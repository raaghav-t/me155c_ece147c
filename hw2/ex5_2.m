clear;

Ts = 0.1;
tfinal = 100;

%% Exercise 5, part 2: Noise

step_mags = linspace(0.1, 2, 20);
noise = 1e-3;
MSEs = zeros(length(step_mags),1);

for i = 1:length(step_mags)
    i
    step_mag = step_mags(i);
    sim('hw2_ex5_spring.slx');
    data = iddata(y,u,Ts);
    model = tfest(data,3,3);
    normalizedMSE = model.Report.Fit.MSE/((y'*y)/length(y));
    MSEs(i) = normalizedMSE;
end

figure(1); clf;
semilogy(step_mags, MSEs,'-*','LineWidth',2);
ylabel("MSE / MSO");
grid on;
set(gca,'FontSize',14);
set(gcf,'Position',[50,50,1600,500]);
% exportgraphics(gcf,'./figure5-5.pdf');
