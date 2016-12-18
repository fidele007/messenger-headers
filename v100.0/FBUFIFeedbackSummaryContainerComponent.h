/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>
#import <Messenger/CAAnimationDelegate.h>

@class CKComponent, NSString, FBFeedToolbox;

@interface FBUFIFeedbackSummaryContainerComponent : CKCompositeComponent <CAAnimationDelegate> {

	CKComponent* _activityComponent;
	CKComponent* _initialBlingLineComponent;
	BOOL _shouldActivityComponentAnimate;
	BOOL _shouldResetToInitialBlingLineComponent;
	NSString* _recentActivityType;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithFeedback:(id)arg1 reactionDataProvider:(id)arg2 style:(const FBUFIFeedbackSummaryContainerComponentStyle*)arg3 toolbox:(id)arg4 ;
+(id)initialState;
-(FBFeedToolbox *)toolbox;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end
