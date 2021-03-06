/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol MNRegistrationPhoneVerificationRequestSenderDelegate;
@class FBSimpleNetworkerRequest, FBMReachabilityAwareNetworker, LPPhoneNumber, NSString;

@interface MNRegistrationPhoneVerificationRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBSimpleNetworkerRequest* _restNetworkRequest;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	LPPhoneNumber* _phoneNumber;
	id<MNRegistrationPhoneVerificationRequestSenderDelegate> _delegate;

}

@property (nonatomic,readonly) LPPhoneNumber * phoneNumber;                                                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationPhoneVerificationRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_authenticationFunnelConfirmationRequestSucceededPayload;
-(id)_authenticationFunnelConfirmationRequestFailedPayload:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNRegistrationPhoneVerificationRequestSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationPhoneVerificationRequestSenderDelegate>)delegate;
-(void)start;
-(LPPhoneNumber *)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 ;
@end

