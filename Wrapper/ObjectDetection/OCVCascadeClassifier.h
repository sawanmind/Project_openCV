//
//  OCVCascadeClassifier.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVBaseCascadeClassifier.h"
#import "OCVInputArrayable.h"
#import "OCVSize.h"
#import "OCVRect.h"
#import "OCVPersistence.h"

NS_ASSUME_NONNULL_BEGIN

@interface OCVCascadeClassifier : OCVBaseCascadeClassifier

- (void)readWithNode:(OCVFileNode *)node;

@end

NS_ASSUME_NONNULL_END
