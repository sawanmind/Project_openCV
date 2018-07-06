//
//  OCVSize+Private.m

//
//  Created by sawanmind on 30/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVSize+Private.h"
#import <opencv2/core.hpp>

cv::Size convertSize(OCVSize size) {
    cv::Size finalSize;
    finalSize.width = (int)size.width;
    finalSize.height = (int)size.height;
    
    return finalSize;
}

OCVSize convertSize(cv::Size size) {
    OCVSize finalSize;
    finalSize.width = size.width;
    finalSize.height = size.height;
    
    return finalSize;
}
