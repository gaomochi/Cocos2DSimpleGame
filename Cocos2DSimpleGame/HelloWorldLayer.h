//
//  HelloWorldLayer.h
//  Cocos2DSimpleGame
//
//  Created by 高 墨赤 on 13-1-2.
//  Copyright __MyCompanyName__ 2013年. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer

@interface HelloWorldLayer : CCLayerColor <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    NSMutableArray *_targets;
    NSMutableArray *_projectiles;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;


@end
