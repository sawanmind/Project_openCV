//
//  OCVPoint.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 *  Reference type: cv::Point, cv::Point2i, cv::Point_<int>
 */
typedef struct OCVPoint
{
    NSInteger x;
    NSInteger y;
}
OCVPoint;

/*!
 *  Reference type: cv::Point2f, cv::Point_<float>
 */
typedef struct OCVPoint2f {
    float x;
    float y;
} OCVPoint2f;
