//
//  OCVRect.h

//
//  Created by sawanmind on 22/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OCVPoint.h"
#import "OCVSize.h"

typedef struct OCVRect
{
    OCVPoint origin;
    OCVSize size;
}
OCVRect;

/*!
 *  Objective-C class immutable wrapper for OCVRect struct
 */
@interface OCVRectValue : NSObject

@property (nonatomic, readonly) OCVRect rect;

- (instancetype)initWithRect:(OCVRect)rect;

@end
