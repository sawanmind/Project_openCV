//
//  OCVInputOutputArrayable.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVInputOutputArray.h"

@protocol OCVInputOutputArrayable <NSObject>

@property (nonatomic, readonly) OCVInputOutputArray *inputOutput;

@end
