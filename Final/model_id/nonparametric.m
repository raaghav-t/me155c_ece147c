load test2a3.mat

tf = zeros(length(u_ws), 4);
Ts = 0.001;

for i = 1:length(u_ws)
    t = resp(i,:,1);
    u = 3*sin(u_ws(i)*t(1:end-1))';
    ysize = size(resp(i, :, 2:5));
    ysize = ysize(2:3);
    y = reshape(resp(i, :, 2:5), ysize);
    bary = y(1:end-1, :);%(y(2:end, :)-y(1:end-1, :))/Ts;
    Y = exp(-1i*u_ws(i).*t(1:end-1))*bary/length(bary);
    U = exp(-1i*u_ws(i).*t(1:end-1))*u/length(bary);
    
    tf(i, :) = Y/U;
end


fig = figure(1);
fig.Units = 'normalized';
fig.OuterPosition = [0 0 1 1];

titles = {'cart2 pend angle', 'cart1 pend angle', 'cart2 pos', 'cart1 pos'};

for i=1:4
    subplot(2,4,i)
    
    semilogx(u_ws,20*log10((abs(tf(:,i)))))
    title(titles(i))
    ylabel('Magnitude(dB)')
    subplot(2,4,i+4)
    semilogx(u_ws,unwrap(angle(tf(:,i))*180/pi))
    ylabel('Phase(deg)')
end