//
//  OCVOutputArray+Private.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVOutputArray.h"
#import <opencv2/core/mat.hpp>

@interface OCVOutputArray (OpenCV)

@property (nonatomic, readonly) cv::_OutputArray *_output;

@end
