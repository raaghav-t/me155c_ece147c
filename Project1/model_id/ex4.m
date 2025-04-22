clear;
load("data2.mat");

npnz = [1 0; 1 1;
        2 0; 2 1; 2 2;
        3 0; 3 1; 3 2; 3 3;
        4 0; 4 1; 4 2; 4 3; 4 4;
        5 0; 5 1; 5 2; 5 3; 5 4; 5 5];
MSEs = zeros(length(npnz),1);
StdDevs = zeros(length(npnz),1);
figure(2); clf;

Ts = 0.001;

ws = logspace(-0.5,1,20)*2*pi;

data = cell(length(ws),1);

for w = 1:length(ws)
    t = data2(w, 1:end-1, 1);
    
    
    ybar = diff(data2(w, :, 3))/Ts;

    n = max(abs(ybar));

    u = sin(ws(w)*t)*3;
    data{w} = iddata(ybar'/n, u'/n, Ts);
end

data = merge(data{:});

for i = 1:size(npnz,1)
    np = npnz(i,1);
    nz = npnz(i,2);
    model = tfest(data,np,nz);
    normalizers = zeros(1,20);
    for test = 1:20
        normalizers(test) = data.OutputData{1,test}'*data.OutputData{1,test};
    end


    normalizedMSE = mean(model.Report.Fit.MSE./normalizers/9999);%/((y'*y)/length(y));
    MSEs(i) = normalizedMSE;
    num = model.Numerator;
    den = model.Denominator(2:end); % excludes leading coeff (always 1)
    std_num = sqrt(diag(model.Report.Parameters.FreeParCovariance(1:nz+1,1:nz+1)))';
    std_den = sqrt(diag(model.Report.Parameters.FreeParCovariance(nz+2:end,nz+2:end)))';
    maxStdDev = max([std_num,std_den]./[num,den]);
    StdDevs(i) = maxStdDev;
    subplot(5,4,i); hold on; rlocus(model); title(sprintf('np=%d, nz=%d',np,nz));
end
hold off;
set(gcf,'Position',[0,0,1200,1400]);
% exportgraphics(gcf,'./figure2.pdf');

figure(1); clf;
subplot(2,1,1);
semilogy(MSEs,'-*','LineWidth',2);
xticks(1:length(npnz));
xticklabels(arrayfun(@(i) sprintf('np=%d,nz=%d', npnz(i,1), npnz(i,2)), 1:length(npnz), 'UniformOutput', false));
xtickangle(90);
xlim([1, length(npnz)]);
ylabel("MSE / MSO");
grid on;
set(gca,'FontSize',14);
subplot(2,1,2);
semilogy(StdDevs,'-*','LineWidth',2);
xticks(1:length(npnz));
xticklabels(arrayfun(@(i) sprintf('np=%d,nz=%d', npnz(i,1), npnz(i,2)), 1:length(npnz), 'UniformOutput', false));
xtickangle(90);
xlim([1, length(npnz)]);
ylabel("max(stdev/value)");
grid on;
set(gca,'FontSize',14);
set(gcf,'Position',[50,50,1600,1000]);
% exportgraphics(gcf,'./figure1.pdf');