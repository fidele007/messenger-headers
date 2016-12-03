/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)setDelegate:(id<MNSoccerFxViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNSoccerFxViewDelegate>)delegate;
-(void)_update;
@end
