%% Add unit function multiply to path
addpath([pwd '\multiply'])

%% Run Integration Test in MATLAB
load position.mat
ObjTrack(position)
runtests('TestKalmanFilter');

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.FilePartitionMethod = 'SingleFile';
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'kalman_loop'.
ARGS = cell(1,1);
ARGS{1} = cell(1,1);
ARGS{1}{1} = coder.typeof(0);

%% Invoke MATLAB Coder.
codegen -args {position} kalman_loop.m
disp('Code generated')

%% Run the unit tests using the generated MEX file
coder.runTest('TestKalmanFilter', 'kalman_loop');