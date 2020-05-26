classdef TestKalmanFilter < matlab.unittest.TestCase
% Copyright 2014 - 2015 The MathWorks, Inc.

    methods ( Test )
        
        function SSE_WithinTolerance( testCase )
            load position.mat;
            load expected_error.mat;
            
            tolerance = 1e-08;
            z = position;
            x = kalman_loop(z);
            y = kalman_loop(z);
            A = z - y;
            error = sum(sum(A.^2));

            testCase.verifyEqual( error, expected_error,'AbsTol',tolerance);

        end

        function SampleErrorLessThanTolerance( testCase )
            load position.mat;
            z = position;
            y = kalman_loop(z);
            range = 75:100;

            tolerance = 0.01;   % tolerance of 0.001 will break
            
            testCase.verifyEqual(y(:,range), z(:,range), 'AbsTol', tolerance)    % check if all samples are within the absolute tolerance; if not, it'll show which samples didn't make the tolerance

            % For debugging
%             plot_kalman_filter_trajectory(z,1000*y);
%            ObjTrack(z)
% 
%             [value, location] = max(A(:));
%             [R,C] = ind2sub(size(A),location);
%             disp(['Max value is ' num2str(value) ' is is located at [' num2str(R) ',' num2str(C) ']']);
        end
    end
end