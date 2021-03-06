/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBBurstAnimationImageViewKenBurnsConfig : FBValueObject <NSCopying> {

	BOOL _shouldAlwaysZoomIn;
	double _transitionDuration;
	double _displayDuration;
	double _enlargeRatio;

}

@property (nonatomic,readonly) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,readonly) double displayDuration;                 //@synthesize displayDuration=_displayDuration - In the implementation block
@property (nonatomic,readonly) double enlargeRatio;                    //@synthesize enlargeRatio=_enlargeRatio - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysZoomIn;                //@synthesize shouldAlwaysZoomIn=_shouldAlwaysZoomIn - In the implementation block
-(double)displayDuration;
-(BOOL)shouldAlwaysZoomIn;
-(double)enlargeRatio;
-(id)initWithTransitionDuration:(double)arg1 displayDuration:(double)arg2 enlargeRatio:(double)arg3 shouldAlwaysZoomIn:(BOOL)arg4 ;
-(double)transitionDuration;
@end

