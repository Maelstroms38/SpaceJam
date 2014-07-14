//
//  THUtil.h
//  SpaceJam
//
//  Created by Michael Stromer on 7/3/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import <Foundation/Foundation.h>

static const int  THProjectileSpeed = 400;
static const int THSpaceDogMinSpeed = -100;
static const int THSpaceDogMaxSpeed = -50;
static const int THMaxLives = 3;
static const int THPointsPerHit = 1;

typedef NS_OPTIONS(uint32_t, THCollisionCategory) { //collision categories
    THCollisionCategoryEnemy = 1 << 0,
    THCollisionCategoryProjectile = 1 << 1,
    THCollisionCategoryDebris = 1 << 2,
    THCollisionCategoryGround = 1 << 3
};

@interface THUtil : NSObject

+ (NSInteger) randomWithMin:(NSInteger)min max:(NSInteger)max;
@end
