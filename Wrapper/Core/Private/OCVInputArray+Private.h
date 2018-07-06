//
//  OCVInputArray+Private.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVInputArray.h"
#import <opencv2/core/mat.hpp>

@interface OCVInputArray (OpenCV)

@property (nonatomic, assign) cv::_InputArray *arrayReference;

@property (nonatomic, readonly) cv::_InputArray *_input;

@end
