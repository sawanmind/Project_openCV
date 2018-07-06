//
//  OCVCamera+Private.h

//
//  Created by sawanmind on 23/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVCamera.h"

#import <opencv2/videoio/cap_ios.h>

@interface OCVCamera (OpenCV)

@property (nonatomic, strong) CvAbstractCamera *source;

@end
