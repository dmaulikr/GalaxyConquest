//
//  ACStarNode.h
//  Galactic Conquest
//
//  Created by Christopher Loonam on 9/4/15.
//  Copyright (c) 2015 Christopher Loonam. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@class ACStar;

@interface ACStarNode : SKNode

@property (strong, nonatomic) ACStar *star;

- (id)initWithStar:(ACStar *)star;

@end
