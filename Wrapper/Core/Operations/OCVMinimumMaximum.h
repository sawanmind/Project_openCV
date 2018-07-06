//
//  OCVMinimumMaximum.h

//
//  Created by sawanmind on 04/03/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVGeometry.h"

#import "OCVObject.h"

@interface OCVMinimumMaximumLocation : OCVObject

@property (nonatomic, assign) double minimumValue;
@property (nonatomic, assign) double maximumValue;
@property (nonatomic, assign) OCVPoint minimumLocation;
@property (nonatomic, assign) OCVPoint maximumLocation;

@end

@interface OCVMinimumMaximumIndex : OCVObject

@property (nonatomic, assign) double minimumValue;
@property (nonatomic, assign) double maximumValue;
@property (nonatomic, assign) NSInteger minimumIndex;
@property (nonatomic, assign) NSInteger maximumIndex;

@end
