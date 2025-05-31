load est2.mat
sys = est;

sys = [sys(1); sys(2)/tf('s')];

dsys = sys;

sys(1) = rev_est;
% sys(2) = rev_est2;

gamma = 1;
rho   = 1;

[A, B, C, D] = ssdata(sys);
[Ad, Bd, Cd, Dd] = ssdata(dsys);

% tB = B;
% tB(1) = -tB(1);
% B = tB;




sys_c = ss(sys);
sys_d = c2d(sys_c,0.001);

sys_d_down = c2d(ss(dsys),0.001);

G = [C; gamma*C*A];

H = [0; 0; (gamma*C*B)];

Gd = [Cd; gamma*Cd*Ad];

Hd = [0; 0; (gamma*Cd*Bd)];

R = 0.000001;
Q = diag([1000, 1, 10, 0.01]);
Q = diag([2000, 20, 10, 0.01]);
Qd = diag([8000, 10, 100, 0.01]);


% theta, x, thetadot, xdot

[K, S, P] = lqr(A, B, G'*Q*G, H'*Q*H+rho*R, G'*Q*H);
[K_down, S_down, P_down] = lqr(Ad, Bd, Gd'*Qd*Gd, Hd'*Qd*Hd+rho*R, Gd'*Qd*Hd);


%L = K * inv(tf('s')*eye(size(A))-A) * B;

 