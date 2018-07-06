//
//  OCVRect+Private.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVRect.h"

#import <opencv2/core.hpp>

cv::Rect convertRect(OCVRect rect);
OCVRect convertRect(cv::Rect rect);
