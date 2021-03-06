/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCInstantPostCallControllerDelegate;
@class FBMUserName, FBTimer;

@interface FBWebRTCInstantPostCallController : NSObject {

	int _endCallReason;
	BOOL _remoteEnded;
	BOOL _instantVideoCall;
	FBMUserName* _peerUserName;
	FBTimer* _timeoutTimer;
	id<FBWebRTCInstantPostCallControllerDelegate> _delegate;
	unsigned long long _viewState;

}

@property (assign,nonatomic,__weak) id<FBWebRTCInstantPostCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long viewState;                                             //@synthesize viewState=_viewState - In the implementation block
-(void)startPostCallFlowWithEndCallReason:(int)arg1 remoteEnded:(BOOL)arg2 isInstantVideoCall:(BOOL)arg3 peerUserName:(id)arg4 ;
-(unsigned long long)_initialPostCallViewState;
-(void)_completeCall;
-(id)_endCallStatus;
-(void)_startTimeoutTimerWithDuration:(double)arg1 ;
-(void)_cleanupTimer;
-(void)setDelegate:(id<FBWebRTCInstantPostCallControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCInstantPostCallControllerDelegate>)delegate;
-(unsigned long long)viewState;
-(void)_setViewState:(unsigned long long)arg1 ;
-(void)abort;
@end

