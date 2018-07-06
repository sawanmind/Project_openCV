//
//  OCVScalar+Private.h

//
//  Created by sawanmind on 30/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVScalar.h"

#import <opencv2/core.hpp>

CvScalar convertScalar(OCVScalar scalar);

OCVScalar convertScalar(CvScalar rect);
