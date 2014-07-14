//
//  THHudNode.h
//  SpaceJam
//
//  Created by Michael Stromer on 7/7/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface THHudNode : SKNode
@property (nonatomic) NSInteger lives;
@property (nonatomic) NSInteger score;

+ (instancetype) hudAtPosition:(CGPoint)position inFrame:(CGRect)frame;
- (void) addPoints:(NSInteger)points;
- (BOOL) loseLife;
@end
