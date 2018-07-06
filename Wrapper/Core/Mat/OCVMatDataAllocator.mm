//
//  OCVMatDataAllocator.mm

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import <opencv2/core.hpp>

#import "OCVMatDataAllocator.h"

@interface OCVMatDataAllocator () {
    cv::Mat *source;
}

@end

@implementation OCVMatDataAllocator

- (cv::Mat *)source {
    return source;
}

- (instancetype)initWithMatInstance:(cv::Mat *)mat {
    self = [super init];
    
    if (self) {
        self->source = mat;
    }
    
    return self;
}

- (void)dealloc {
//    if (source) {
//        free(source);
//    }
//
//    source = NULL;
}

@end
