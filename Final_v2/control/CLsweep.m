model = "CL_modelid";
u_ws = logspace(-0.5,0.5,10)*2*pi;

resp = zeros(length(u_ws),20000,3);
us = zeros(length(u_ws),20000,2);
for i = 1:length(u_ws)
    omega = u_ws(i);
    amp = 1.2;
    set_param(model, 'Dirty', 'on')
    rtwbuild(model)
    disp(i)
    disp(omega)

    set_param(model, 'SimulationMode', 'external')
    
    set_param(model, 'SimulationCommand', 'connect')
    pause(1)
    
    set_param(model, 'SimulationCommand', 'start')
    pause(21)
    
    pos = cartPos.signals.values;
    
    t = CartPos(:,1);

    resp(i, :, 2:3) = pos;
    resp(i,:,1) = t;
    us(i, :, 1) = u.signals.values;
    us(i, :, 2) = disturbance.signals.values;

end


plot(resp(:,:,1),resp(:,:,3))