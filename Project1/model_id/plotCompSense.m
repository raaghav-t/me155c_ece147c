tfd = tf(num_d,den_d,0.001);
tfc = d2c(tfd);
ControllerC = tfc;

T = ControllerC * Gs / ( 1 + ControllerC * Gs)
figure(1)
bode(T)
grid on
hold on
set(gcf,'Position',[0,0,1000,400]);
exportgraphics(gcf,'./bodecompsense.pdf');

figure(2)
step(T)
grid on
hold on
set(gcf,'Position',[0,0,1000,400]);
exportgraphics(gcf,'./bodecompsenseStep.pdf');