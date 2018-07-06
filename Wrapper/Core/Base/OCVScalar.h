//
//  OCVScalar.h

//
//  Created by sawanmind on 30/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct OCVScalar {
    double value[4];
}
OCVScalar;

OCVScalar OCVScalarRGB(double r, double g, double b) CF_SWIFT_NAME(OCVScalar.init(r:g:b:));
