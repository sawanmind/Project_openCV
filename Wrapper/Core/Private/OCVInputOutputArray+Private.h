//
//  OCVInputOutputArray+Private.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVInputOutputArray.h"
#import <opencv2/core/mat.hpp>

@interface OCVInputOutputArray (OpenCV)

@property (nonatomic, readonly) cv::_InputOutputArray *_inputOutput;

@end
