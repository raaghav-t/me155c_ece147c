load ControlData.mat
Ts = 0.001;

ws = logspace(-0.5,1,20)*2*pi;

r = zeros(1,length(ws));

for w = 1:length(ws)
    y = resp(w, :, 3);
    t = resp(w,:,1);
    
    u = sin(t*ws(w))*0.1;
    U = trapz(u.*exp(-1i*ws(w).*t));
    r(w) = trapz((y).*exp(-1i*ws(w).*t))/U;
end


subplot(2,1,1)
semilogx(ws/2/pi, 20*log10(abs(r)))
title("Closed Loop Frequency Response From Reference to Output")
ylabel("Magnitude $[dB]$")
grid on
subplot(2,1,2)
semilogx(ws/2/pi, unwrap(angle(r))*180/pi)
xlabel("Frequency $[Hz]$")
ylabel("Phase $[\circ]$")
grid on
print(gcf, 'CLFreqResp', '-dpng', '-r1200')