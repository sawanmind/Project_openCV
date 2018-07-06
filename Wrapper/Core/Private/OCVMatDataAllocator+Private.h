//
//  OCVMatDataAllocator+Private.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

//
// MARK: Unavailable in Swift, convenience for OpenCV, should be private
//

#import "OCVMatDataAllocator.h"
#import <opencv2/core/mat.hpp>

@interface OCVMatDataAllocator (OpenCV)

@property (nonatomic, readonly) cv::Mat *source;

- (instancetype)initWithMatInstance:(cv::Mat *)mat;

@end
