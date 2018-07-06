//
//  OCVInputArrayable.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVInputArray.h"

@protocol OCVInputArrayable <NSObject>

@property (nonatomic, readonly) OCVInputArray *input;

@end
