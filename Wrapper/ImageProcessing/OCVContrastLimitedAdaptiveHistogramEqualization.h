//
//  OCVContrastLimitedAdaptiveHistogramEqualization.h

//
//  Created by sawanmind on 18/03/2017.
//  Copyright © 2018 Genisys. All rights reserved.
//

#import "OCVGeometry.h"
#import "OCVAlgorithm.h"
#import "OCVArrayables.h"

/*!
 *  Reference type: cv::CLAHE
 */
@interface OCVContrastLimitedAdaptiveHistogramEqualization : OCVAlgorithm

@property (nonatomic, assign) double clipLimit;
@property (nonatomic, assign) OCVSize tileGridSize;

- (void)applyWithSource:(id<OCVInputArrayable>)source toDestination:(id<OCVOutputArrayable>)destination;

- (void)collectGarbage;

@end
