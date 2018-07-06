//
//  OCVReferenceObject.h

//
//  Created by sawanmind on 23/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVObject.h"

@interface OCVReferenceObject : OCVObject

@property (nonatomic, strong) id object;

- (instancetype)initWithObject:(id)object;

@end
