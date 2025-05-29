regulator_d = c2d(r, 0.001);
amp = 0.1;
[num_d, den_d] = tfdata(regulator_d, 'v');

num = zeros(1, 4, length(num_d{1}));
den = zeros(1, 4, length(num_d{1}));
for i = 1:length(num_d)
    num(1,i,:) = num_d{i};
    den(1,i,:) = den_d{i};
end