//
//  OCVInputArray.h

//
//  Created by sawanmind on 12/06/2018.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVReferenceObject.h"

#import "OCVGeometry.h"

typedef NS_ENUM(NSInteger, OCVInputArrayType) {
    OCVInputArrayTypeMat        = 65536,
    OCVInputArrayTypeExpression = 393216
};

@class OCVMat;

@interface OCVInputArray : OCVReferenceObject

#pragma mark - Public Properties

@property (nonatomic, readonly) OCVInputArrayType type;
@property (nonatomic, readonly) OCVSize size;

@property (nonatomic, readonly) NSInteger channels;
@property (nonatomic, readonly) NSInteger depth;
@property (nonatomic, readonly) NSInteger dims;

@property (nonatomic, readonly) BOOL isEmpty;

@property (nonatomic, readonly) BOOL isMat;

#pragma mark - Initialization

- (void)setup;

#pragma mark - Public Methods

- (NSInteger)channelsWithIndex:(NSInteger)index;

- (NSInteger)depthWithIndex:(NSInteger)index;

- (NSInteger)dimsWithIndex:(NSInteger)index;

- (OCVMat *)mat;
- (OCVMat *)matWithIndex:(NSInteger)index;

#pragma mark - Static Factory Methods

@end
