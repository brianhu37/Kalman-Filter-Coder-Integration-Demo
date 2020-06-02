classdef TestMultiply < matlab.unittest.TestCase
    % Copyright 2014 - 2016 The MathWorks, Inc.
    
    methods ( Test )
        
        function verifyTypeMatch( testCase )
            x = 1;
            y = 2;
            z = multiply( x , y );
            outputIsSingle = isa( z , 'single' );
            outputIsDouble = isa( z , 'double' );
            outputIsHalf = isa( z, 'half' );
            testCase.verifyTrue( outputIsSingle | outputIsDouble | outputIsHalf );
        end
        
        function multiplywithPi( testCase )
            x = pi;
            y = 2;
            z = multiply(x,y);
            if isa( z , 'single' ) == true
                t = single(pi*2);
            elseif isa ( z , 'double' ) == true
                t = double(pi*2);
            elseif isa ( z, 'half' ) == true
                t = half(pi*2);
            else
                t = 0;
            end
            testCase.verifyEqual( z , t );
        end
    end
end