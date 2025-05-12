
t = CartPos(:,1);
u = heaviside(t-1)*0.3;
y = CartPos(:,3);


plot(t,u,t,y)
xlabel("Time $[s]$",'Interpreter','latex')
ylabel("Position $[m]$",'Interpreter','latex')
title("\textbf{Step Response of Closed Loop System}",'Interpreter','latex')


print(gcf, "StepResponse", "-dpng", "-r1200")