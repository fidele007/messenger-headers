/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBWebRTCStarRatingViewDelegate.h>

@protocol FBWebRTCInstantPostCallControllerDelegate;
@class FBMobileConfigContextManager, FBWebRTCEndCallPresenter, FBMUserName, FBTimer, FBWebRTCStarRating, NSString;

@interface FBWebRTCInstantPostCallController : NSObject <FBClassProvidable, FBWebRTCStarRatingViewDelegate> {

	FBMobileConfigContextManager* _configManager;
	FBWebRTCEndCallPresenter* _presenter;
	unsigned long long _endCallReason;
	BOOL _remoteEnded;
	BOOL _instantVideoCall;
	BOOL _videoChat;
	FBMUserName* _peerUserName;
	FBTimer* _timeoutTimer;
	FBWebRTCStarRating* _starRating;
	id<FBWebRTCInstantPostCallControllerDelegate> _delegate;
	unsigned long long _viewState;

}

@property (assign,nonatomic,__weak) id<FBWebRTCInstantPostCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long viewState;                                             //@synthesize viewState=_viewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)starRatingView:(id)arg1 ratingDidChange:(long long)arg2 ;
-(void)starRatingViewDidPressSubmit:(id)arg1 ;
-(void)starRatingViewDidPressDismiss:(id)arg1 ;
-(void)startPostCallFlowWithEndCallPresenter:(id)arg1 isInstantVideoCall:(BOOL)arg2 videoChat:(BOOL)arg3 ;
-(void)showStarRatingInView:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 starRating:(id)arg2 ;
-(unsigned long long)_initialPostCallViewState;
-(void)_completeCall;
-(id)_endCallStatus;
-(void)_startTimeoutTimerWithDuration:(double)arg1 ;
-(void)_cleanupTimer;
-(void)setDelegate:(id<FBWebRTCInstantPostCallControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCInstantPostCallControllerDelegate>)delegate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(unsigned long long)viewState;
-(void)_setViewState:(unsigned long long)arg1 ;
-(void)abort;
@end

