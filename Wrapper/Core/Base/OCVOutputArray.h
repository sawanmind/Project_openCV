//
//  OCVOutputArray.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVInputArray.h"

@interface OCVOutputArray : OCVInputArray

@property (nonatomic, readonly) BOOL isFixedSize;
@property (nonatomic, readonly) BOOL isFixedType;

@property (nonatomic, readonly) BOOL isNeeded;

@end
