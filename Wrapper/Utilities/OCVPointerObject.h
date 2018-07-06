//
//  OCVPointerObject.h

//
//  Created by sawanmind on 22/01/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVObject.h"

@interface OCVPointerObject : OCVObject {
   
@public
    void *pointer;
}

- (instancetype)initWithPointer:(void *)unsafePointer;

@end
