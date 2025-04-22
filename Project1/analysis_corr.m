ws = logspace(-0.5,1,20)*2*pi;
Ts = 0.001;
r = zeros(length(ws),1);
for w = 1:length(ws)
    y = resp(w, :, 3);
    t = resp(w,:,1);
    bary = (y(2:end)-y(1:end-1))/Ts;
    u = sin(t(1:end-1)*ws(w))*3;
    U = trapz(u.*exp(-1i*ws(w).*t(1:end-1)));
    r(w) = sum(bary.*exp(-1i*ws(w).*t(1:end-1)))/U;
end


subplot(2,1,1)
semilogx(ws/2/pi, 20*log10(abs(r)))

subplot(2,1,2)
semilogx(ws/2/pi, unwrap(angle(r))*180/pi)

