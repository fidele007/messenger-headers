/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
