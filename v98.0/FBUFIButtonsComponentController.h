/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>
#import <Messenger/FBFeedEventBusListener.h>

@protocol FBFeedbackReactionsHandler;
@class FBTimer, FBSelfieReactionCameraController, NSString;

@interface FBUFIButtonsComponentController : CKComponentController <FBFeedEventBusListener> {

	BOOL _currentPendingCancellation;
	FBTimer* _progressiveUfiDismissTimer;
	id<FBFeedbackReactionsHandler> _reactionsHandler;
	FBSelfieReactionCameraController* _cameraController;

}

@property (nonatomic,retain) id<FBFeedbackReactionsHandler> reactionsHandler;                  //@synthesize reactionsHandler=_reactionsHandler - In the implementation block
@property (nonatomic,retain) FBSelfieReactionCameraController * cameraController;              //@synthesize cameraController=_cameraController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUnmount;
-(void)didMount;
-(void)didLongPressLike:(id)arg1 context:(id)arg2 ;
-(void)didTapLike:(id)arg1 ;
-(void)didTouchDownLike;
-(void)didTapShare:(id)arg1 ;
-(void)didTapComment:(id)arg1 ;
-(void)presentReactionsActionSheet;
-(id)ufiButtonsComponent;
-(void)dismissDockInput;
-(void)componentTreeDidDisappear;
-(/*^block*/id)failureErrorHandler;
-(void)_resetStateToHideProgressiveUfi;
-(void)_updateStateToShowProgressiveUfi;
-(id<FBFeedbackReactionsHandler>)reactionsHandler;
-(id)setupReactionInputDockWithSender:(id)arg1 triggerView:(id)arg2 gestureRecognizer:(id)arg3 useStaticTriggerPosition:(BOOL)arg4 ;
-(void)setReactionsHandler:(id<FBFeedbackReactionsHandler>)arg1 ;
-(FBSelfieReactionCameraController *)cameraController;
-(void)setCameraController:(FBSelfieReactionCameraController *)arg1 ;
-(void)updateWithGestureState:(unsigned long long)arg1 pendingCancellation:(BOOL)arg2 ;
-(void)presentSelfieReactionCamera;
-(void)feedEventBus:(id)arg1 didDetectEvent:(unsigned long long)arg2 ;
-(id)visibleViewController;
@end

