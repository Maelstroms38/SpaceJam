//
//  THGameOverNode.h
//  SpaceJam
//
//  Created by Michael Stromer on 7/7/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface THGameOverNode : SKNode

+(instancetype) gameOverAtPosition:(CGPoint)position;
- (void) performAnimation;
@end
