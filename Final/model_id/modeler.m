load test2a3.mat

clear data;

for i = 1:length(u_ws)
    t = resp(i,:,1);
    u = 3*sin(u_ws(i)*t)';
    ysize = size(resp(i, :, 2:5));
    ysize = ysize(2:3);
    y = reshape(resp(i, :, 2:5), ysize);
    if ~exist('data','var')
        data = iddata(y, u, 0.001);
    else
        data = merge(data, iddata(y, u, 0.001));
    end
end



trial = 24;

figure(1); clf;
plot(resp(trial,:,1), resp(trial, :, 2));
hold on
plot(resp(trial,:,1), resp(trial, :, 3));
plot(resp(trial,:,1), resp(trial, :, 4));
plot(resp(trial,:,1), resp(trial, :, 5));

legend('cart2 pend angle', 'cart1 pend angle', 'cart2 pos', 'cart1 pos')
tfest(data,[6;6;4;4],[2; 4;1; 2])