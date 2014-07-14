//
//  THProjectileNode.h
//  SpaceJam
//
//  Created by Michael Stromer on 7/3/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface THProjectileNode : SKSpriteNode

+ (instancetype) projectileAtPosition:(CGPoint)position;
- (void) moveTowardsPosition:(CGPoint) position;


@end
