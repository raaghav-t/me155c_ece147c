
[A, B, C, D] = ssdata(sys);

sigma = 0.05;

BB = B;

QN = 1;

RN = sigma;

sysqg = ss(A, [B BB], C, 0);

[est, L, P] = kalman(sysqg, QN, RN);


r = reg(ss(sys), K, L)