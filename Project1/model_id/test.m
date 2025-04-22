clear;
pause(1)
model = 'Lab1';
omega = 2*pi*5;

set_param(model, 'Dirty', 'on')
rtwbuild(model)

set_param(model, 'SimulationMode', 'external')

set_param(model, 'SimulationCommand', 'connect')
pause(1)

set_param(model, 'SimulationCommand', 'start')
pause(15)
set_param(model, 'SimulationCommand', 'stop')
pause(1)


%%
figure(1); clf;
t = CartPos(:,1);
pos = cartPos.signals.values;

plot(t, pos(:,1))
hold on
plot(t, pos(:,2))