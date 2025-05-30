load est2.mat
sys = est;

sys = [sys(1); sys(2)/tf('s')];

sys(1) = rev_est;
% sys(2) = rev_est2;

gamma = 1;
rho   = 1;

[A, B, C, D] = ssdata(sys);

% tB = B;
% tB(1) = -tB(1);
% B = tB;




sys_c = ss(sys);
sys_d = c2d(sys_c,0.001);

G = [C; gamma*C*A];

H = [0; 0; (gamma*C*B)];

R = 0.000001;
Q = diag([1000, 1, 10, 0.01]);
% theta, x, thetadot, xdot

[K, S, P] = lqr(A, B, G'*Q*G, H'*Q*H+rho*R, G'*Q*H);


%L = K * inv(tf('s')*eye(size(A))-A) * B;

 