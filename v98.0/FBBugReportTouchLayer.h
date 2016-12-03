/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CAShapeLayer.h>
#import <Messenger/CAAnimationDelegate.h>

@protocol FBBugReportTouchLayerDelegate;
@class FBTimer, NSString;

@interface FBBugReportTouchLayer : CAShapeLayer <CAAnimationDelegate> {

	FBTimer* _timeoutTimer;
	double _lastUpdateTime;
	NSString* _tag;
	id<FBBugReportTouchLayerDelegate> _lifetimeDelegate;

}

@property (nonatomic,copy) NSString * tag;                                                           //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic,__weak) id<FBBugReportTouchLayerDelegate> lifetimeDelegate;              //@synthesize lifetimeDelegate=_lifetimeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layer;
-(void)_scheduleTimeoutTimer;
-(void)hideWithAnimation;
-(id<FBBugReportTouchLayerDelegate>)lifetimeDelegate;
-(void)setLifetimeDelegate:(id<FBBugReportTouchLayerDelegate>)arg1 ;
-(void)hide;
-(void)show;
-(void)setPosition:(CGPoint)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
@end
