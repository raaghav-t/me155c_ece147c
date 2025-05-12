clear;
load('data2.mat')

%% u

% ws = logspace(-0.5,1,20);
% t=0:0.001:10;
% figure(99); clf;
% for i = 1:20
%     hold on;
%     plot(t,sin(ws(i)*t))
% end
% grid on;


%% x2
figure(1); clf;
for i = 1:20
    hold on;
    plot(data2(i,:,1),data2(i,:,3))
end
grid on;
xlabel("Time (s)");
ylabel("Cart 2 position (x_2) (m)");
set(gcf,'Position',[0,0,1000,300]);
exportgraphics(gcf,'./sysid-outputs.pdf');

%% x1
% figure(2); clf;
% for i = 1:20
%     hold on;
%     plot(data2(i,:,1),data2(i,:,2))
% end
% grid on;