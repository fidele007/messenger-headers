/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBScrollableMediaNode.h>

@class FBMediaKeyFrame, CADisplayLink;

@interface FBInteractiveMediaNode : FBScrollableMediaNode {

	FBMediaKeyFrame* _previousKeyFrame;
	FBMediaKeyFrame* _currentKeyFrame;
	double _transitionProgress;
	long long _updateBehavior;
	long long _scrollBehavior;
	CADisplayLink* _displayLink;
	CGSize _baselineBoundsSize;
	double _baselineZoom;
	FBMediaKeyFrame* _keyFrame;

}

@property (nonatomic,retain) FBMediaKeyFrame * keyFrame;                                      //@synthesize keyFrame=_keyFrame - In the implementation block
@property (assign,nonatomic,__weak) id<FBInteractiveMediaNodeDelegate> delegate; 
@property (assign,nonatomic) long long updateBehavior;                                        //@synthesize updateBehavior=_updateBehavior - In the implementation block
@property (assign,nonatomic) long long scrollBehavior;                                        //@synthesize scrollBehavior=_scrollBehavior - In the implementation block
-(void)_staticInitialize;
-(void)setKeyFrame:(id)arg1 withAnimation:(SCD_Struct_FB40)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didExitHierarchy;
-(void)_applyKeyFrameUpdateBehavior;
-(void)_relaxInteractionBounds;
-(void)_setTransitionProgress:(double)arg1 ;
-(id)_newTransitionSpringAnimationFromConfig:(SCD_Struct_FB40)arg1 issueUpdates:(BOOL)arg2 ;
-(void)_updateScrollViewForAnimation;
-(void)_killDisplayLink;
-(FBMediaKeyFrame *)keyFrame;
-(BOOL)_requiresDisplayLink;
-(void)_activateDisplayLink;
-(void)willBeginDraggingScrollView:(id)arg1 ;
-(void)_restoreInteractionBounds;
-(void)willBeginInteractiveZooming:(id)arg1 ;
-(void)didUpdateMediaSize:(CGSize)arg1 fromSize:(CGSize)arg2 ;
-(void)setKeyFrame:(FBMediaKeyFrame *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)stopAnimating;
-(void)stopTracking;
-(void)setUpdateBehavior:(long long)arg1 ;
-(long long)updateBehavior;
-(long long)scrollBehavior;
-(void)setScrollBehavior:(long long)arg1 ;
-(void)didLoad;
@end

