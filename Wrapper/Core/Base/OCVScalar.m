//
//  OCVScalar.m

//
//  Created by sawanmind on 30/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVScalar.h"

OCVScalar OCVScalarRGB(double r, double g, double b) {
    OCVScalar scalar;
    scalar.value[0] = r;
    scalar.value[1] = g;
    scalar.value[2] = b;
    scalar.value[3] = 0.0;
    
    return scalar;
}
