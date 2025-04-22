
sys = Gs/tf("s");
gamma = .01;
rho = .1;

[A, B, C, D] = ssdata(sys);

G = [C; gamma*C*A];

H = [0 ; gamma*C*B];

R = 1;
Q = 1;


[K, S, P] = lqr(A, B, G'*Q*G, H'*Q*H+rho*eye(size(H'*H)*R), G'*Q*H);


L = K * inv(tf('s')*eye(size(A))-A) * B;

 