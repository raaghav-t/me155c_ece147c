regulator_d = c2d(r, 0.001);
amp = 0.1;
[num_d, den_d] = tfdata(regulator_d, 'v')

