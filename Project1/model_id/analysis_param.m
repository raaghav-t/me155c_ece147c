
Ts = 0.001;

ws = logspace(-0.5,1,20)*2*pi;


data = cell(length(ws),1);

for w = 1:length(ws)
    t = data2(w, 1:end-1, 1);
    
    
    ybar = diff(data2(w, :, 3))/Ts;

    n = max(abs(ybar));

    u = sin(ws(w)*t)*3;
    data{w} = iddata(ybar'/n, u'/n, Ts);
end

mdata = merge(data{:});


%%
trfu = tfest(mdata, 3, 2);

Gs = tf(trfu)
%%
figure(2)
bode(Gs)
hold on
