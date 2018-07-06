//
//  OCVPoint+Private.m

//
//  Created by sawanmind on 30/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVPoint+Private.h"

cv::Point convertPoint(OCVPoint point) {
    cv::Point finalPoint;
    finalPoint.x = (int)point.x;
    finalPoint.y = (int)point.y;

    return finalPoint;
}

OCVPoint convertPoint(cv::Point point) {
    OCVPoint finalPoint;
    finalPoint.x = point.x;
    finalPoint.y = point.y;
    
    return finalPoint;
}
