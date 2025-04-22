%% Exercise 3, part 1: Not knowing parameters

clear;
load('hw2_ex3_unknown_pole.mat');

Ts = t(2)-t(1);
data = iddata(y,u,Ts);
model = tfest(data,2,1);
sysc = tf(model);
zpk(sysc)
% figure(1); bode(sysc);

%% Exercise 3, part 2: Known parameters

clear;
load('hw2_ex3_unknown_pole.mat');

Ts = t(2)-t(1);
p1 = -0.3; % known pole
z1 = -0.5; % known zero
bary = (y(2:end)-y(1:end-1))/Ts - p1*y(1:end-1);
baru = (u(2:end)-u(1:end-1))/Ts - z1*u(1:end-1);
data = iddata(bary, baru, Ts);
model = tfest(data,1,0);
sysc = tf(model);
s = tf('s');
sysc = zpk(sysc*(s-z1)/(s-p1))
% hold on; bode(sysc);