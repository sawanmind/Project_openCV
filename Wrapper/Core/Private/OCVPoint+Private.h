//
//  OCVPoint+Private.h

//
//  Created by sawanmind on 30/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVPoint.h"

#import <opencv2/core.hpp>

cv::Point convertPoint(OCVPoint point);
OCVPoint convertPoint(cv::Point point);
