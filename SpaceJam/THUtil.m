//
//  THUtil.m
//  SpaceJam
//
//  Created by Michael Stromer on 7/3/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import "THUtil.h"

@implementation THUtil

+ (NSInteger) randomWithMin:(NSInteger)min max:(NSInteger)max {
    return arc4random()%(max - min) + min;
}
@end
