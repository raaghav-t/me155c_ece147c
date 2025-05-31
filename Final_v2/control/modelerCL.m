load respCL.mat
Ts = 0.001;
clear data_tu data_ty data;
cutoff = 10000;

for i = 1:length(u_ws)
    t = resp(i,cutoff:end,1);
    u = us(i, cutoff:end, 1)';
    d = us(i, cutoff:end, 2)';
    ysize = size(resp(i, cutoff:end, 2:3));
    ysize = ysize(2:3);
    y = reshape(resp(i, cutoff:end, 2:3), ysize);
    yd = [y(1:end-1,1),diff(y(:,2))/Ts];
    if ~exist('data_tu','var')
        data_tu = iddata(u, d, 0.001);
        data_ty = iddata(yd, d(1:end-1), 0.001);
        data = iddata(yd, u(1:end-1), 0.001);

    else
        data_tu = merge(data_tu, iddata(u, d, 0.001));
        data_ty = merge(data_ty, iddata(yd, d(1:end-1), 0.001));
        data = merge(data, iddata(y, u, 0.001));
    end
end



trial = 9;

figure(1); clf;
plot(resp(trial,:,1), resp(trial, :, 2));
hold on
plot(resp(trial,:,1), resp(trial, :, 3));

legend('cart angle', 'cart pos')
est = tfest(data,[3;2], [2;1]);


Tu = tfest(data_tu, 1, 1);
Ty = tfest(data_ty, [2; 1], [1; 0]);