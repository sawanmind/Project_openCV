//
//  OCVGeneralizedHoughBallard.h

//
//  Created by sawanmind on 18/03/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVGeneralizedHough.h"

/*!
 *  Reference type: cv::GeneralizedHoughBallard
 */
@interface OCVGeneralizedHoughBallard : OCVGeneralizedHough

@property (nonatomic, assign) NSInteger levels;
@property (nonatomic, assign) NSInteger voteThreshold;

@end
