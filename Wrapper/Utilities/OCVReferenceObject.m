//
//  OCVReferenceObject.m

//
//  Created by sawanmind on 23/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVReferenceObject.h"

@implementation OCVReferenceObject

- (NSString *)description {
    return [NSString stringWithFormat:@"[OCVReferencedObject]: %@", [self.object description]];
}

- (instancetype)initWithObject:(id)object {
    self = [super init];
    
    if (self) {
        self.object = object;
    }
    
    return self;
}

@end
