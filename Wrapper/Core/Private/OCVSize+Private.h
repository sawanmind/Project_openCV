//
//  OCVSize+Private.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVSize.h"
#import <opencv2/core.hpp>

cv::Size convertSize(OCVSize size);
OCVSize convertSize(cv::Size size);
