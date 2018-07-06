//
//  OCVCascadeClassifierResult.h

//
//  Created by sawanmind on 18/03/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVObject.h"
#import "OCVRect.h"

NS_ASSUME_NONNULL_BEGIN

@interface OCVCascadeClassifierResult : OCVObject

@property (nonatomic, strong) NSArray <OCVRectValue *>* objects;
@property (nullable, nonatomic, strong) NSArray <NSNumber *>* numberOfDetections;
@property (nullable, nonatomic, strong) NSArray <NSNumber *>* rejectLevels;
@property (nullable, nonatomic, strong) NSArray <NSNumber *>* levelWeights;

@end

NS_ASSUME_NONNULL_END