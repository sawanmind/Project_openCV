//
//  OCVOutputArrayable.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVOutputArray.h"

@protocol OCVOutputArrayable <NSObject>

@property (nonatomic, readonly) OCVOutputArray *output;

@end
