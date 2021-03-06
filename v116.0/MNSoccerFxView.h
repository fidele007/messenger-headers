/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSoccerFxFireworkDelegate.h>

@protocol MNSoccerFxViewDelegate;
@class NSMutableArray, CADisplayLink;

@interface MNSoccerFxView : UIView <MNSoccerFxFireworkDelegate> {

	NSMutableArray* _fireworkPool;
	NSMutableArray* _spotlightPool;
	BOOL _isNextSpotlightOnRightSide;
	double _lastUpdateTime;
	CADisplayLink* _displayLink;
	id<MNSoccerFxViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSoccerFxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_runUpdateLoop;
-(void)spawnSpotlight;
-(void)spawnFirework;
-(void)fireworkDidExplode:(id)arg1 ;
-(void)_recycleEffect:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNSoccerFxViewDelegate>)arg1 ;
-(id<MNSoccerFxViewDelegate>)delegate;
-(void)_update;
@end

