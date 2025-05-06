model = "Controller";
ws = logspace(-0.5,1,20)*2*pi;

resp = zeros(length(ws),10000,3);
for i = 1:length(ws)
    omega = ws(i);
    amp = 3;
    set_param(model, 'Dirty', 'on')
    rtwbuild(model)
    disp(i)
    disp(omega)

    set_param(model, 'SimulationMode', 'external')
    
    set_param(model, 'SimulationCommand', 'connect')
    pause(1)
    
    set_param(model, 'SimulationCommand', 'start')
    pause(11)
    
    pos = cartPos.signals.values;
    t = CartPos(:,1);

    resp(i, :, 2:3) = pos;
    resp(i,:,1) = t;
end


plot(resp(:,:,3))