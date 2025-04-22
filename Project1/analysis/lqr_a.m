
sys = Gs/tf("s");
gamma = 0.01;
rho = 0.001;

[A, B, C, D] = ssdata(sys);

G = [C; gamma*C*A];

H = [0 ; gamma*C*B];

R = 0.04;
Q = 1000000;


[K, S, P] = lqr(A, B, G'*Q*G, H'*Q*H+rho*eye(size(H'*H))*R, G'*Q*H);


L = K * inv(tf('s')*eye(size(A))-A) * B;

 