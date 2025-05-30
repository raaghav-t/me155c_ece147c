load ../analysis/model.mat est
sys = est;

gamma = 1000000;
rho = 1;

[A, B, C, D] = ssdata(sys);

G = [C; gamma*C*A];

H = [0; 0; 0; 0; (gamma*C*B)];

R = 100000000;
Q = 0.00001*eye(8);


[K, S, P] = lqr(A, B, G'*Q*G, H'*Q*H+rho*eye(size(H'*H))*R, G'*Q*H);


%L = K * inv(tf('s')*eye(size(A))-A) * B;

 