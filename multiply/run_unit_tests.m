%% Create configuration object of class 'coder.MexCodeConfig'.
disp('Generating MEX file...')
cfg = coder.config('mex');
cfg.FilePartitionMethod = 'SingleFile';
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'multiply'.
ARGS = cell(1);
ARGS{1} = cell(1,2);
ARGS{1}{1} = coder.typeof(0);
ARGS{1}{2} = coder.typeof(0);

%% Invoke MATLAB Coder.
codegen -config cfg multiply -args ARGS{1}

%% Run the unit tests using the generated MEX file
coder.runTest('TestMultiply', 'multiply');