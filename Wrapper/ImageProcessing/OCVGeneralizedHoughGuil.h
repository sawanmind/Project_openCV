//
//  OCVGeneralizedHoughGuil.h

//
//  Created by sawanmind on 18/03/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVGeneralizedHough.h"

/*!
 *  Reference type: cv::GeneralizedHoughGuil
 */
@interface OCVGeneralizedHoughGuil : OCVGeneralizedHough

@property (nonatomic, assign) double xi;
@property (nonatomic, assign) NSInteger levels;
@property (nonatomic, assign) double angleEpsilon;
@property (nonatomic, assign) double minAngle;
@property (nonatomic, assign) double maxAngle;
@property (nonatomic, assign) double angleStep;
@property (nonatomic, assign) NSInteger angleThreshold;
@property (nonatomic, assign) double maxScale;
@property (nonatomic, assign) double scaleStep;
@property (nonatomic, assign) NSInteger scaleThreshold;
@property (nonatomic, assign) NSInteger positionThreshold;

@end
