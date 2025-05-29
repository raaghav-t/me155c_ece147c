load resp.mat

tf = zeros(length(u_ws), 2);
Ts = 0.001;

cutoff = 10000;

for i = 1:length(u_ws)
    t = resp(i,:,1);
    u = 3*sin(u_ws(i)*t(cutoff:end-1))';
    ysize = size(resp(i, cutoff:end, 2:3));
    ysize = ysize(2:3);
    y = reshape(resp(i, cutoff:end, 2:3), ysize);
    bary = (y(2:end, :)-y(1:end-1, :))/Ts;
    Y = exp(-1i*u_ws(i).*t(cutoff:end-1))*bary/length(bary);
    U = exp(-1i*u_ws(i).*t(cutoff:end-1))*u/length(bary);
    
    tf(i, :) = Y/U;
end


fig = figure(1);
fig.Units = 'normalized';
fig.OuterPosition = [0 0 1 1];

titles = {'Pendulum Angle', 'Cart Pos'};

for i=1:2
    subplot(2,2,i)
    
    semilogx(u_ws,20*log10((abs(tf(:,i)))))
    title(titles(i))
    ylabel('Magnitude(dB)')
    subplot(2,2,i+2)
    semilogx(u_ws,unwrap(angle(tf(:,i))*180/pi))
    ylabel('Phase(deg)')
end