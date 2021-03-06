/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNInviteTokenBasedConversionTrackingRequestControllerDelegate;
@class NSString, FBUserSession, FBAnalytics, FBGraphQLMutationHandle;

@interface MNInviteTokenBasedConversionTrackingRequestController : NSObject {

	NSString* _inviteToken;
	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBGraphQLMutationHandle* _requestHandle;
	id<MNInviteTokenBasedConversionTrackingRequestControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInviteTokenBasedConversionTrackingRequestControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithInviteToken:(id)arg1 session:(id)arg2 analytics:(id)arg3 ;
-(void)trackConversion;
-(void)_inviteTokenBasedConversionTrackingRequestSucceeded;
-(void)_inviteTokenBasedConversionTrackingRequestFailedWithError:(id)arg1 ;
-(void)setDelegate:(id<MNInviteTokenBasedConversionTrackingRequestControllerDelegate>)arg1 ;
-(id<MNInviteTokenBasedConversionTrackingRequestControllerDelegate>)delegate;
@end

