load ../model_id/resp.mat

clear data;
cutoff = 10000;

for i = 1:length(u_ws)
    t = resp(i,cutoff:end,1);
    u = 3*sin(u_ws(i)*t)';
    ysize = size(resp(i, cutoff:end, 2:3));
    ysize = ysize(2:3);
    y = reshape(resp(i, cutoff:end, 2:3), ysize);
    yd = [y(1:end-1,1),diff(y(:,2))/Ts];
    if ~exist('data','var')
        data = iddata(yd, u(1:end-1), 0.001);
    else
        data = merge(data, iddata(y, u, 0.001));
    end
end



trial = 24;

figure(1); clf;
plot(resp(trial,:,1), resp(trial, :, 2));
hold on
plot(resp(trial,:,1), resp(trial, :, 3));

legend('cart angle', 'cart pos')
est = tfest(data,[4;4]);