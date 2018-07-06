//
//  OCVRect.m

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVRect.h"

@interface OCVRectValue ()

@property (nonatomic, readwrite, assign) OCVRect rect;

@end

@implementation OCVRectValue

- (instancetype)initWithRect:(OCVRect)rect {
    self = [super init];
    
    if (self) {
        self.rect = rect;
    }
    
    return self;
}

@end
