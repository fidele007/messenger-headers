/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBPushRegistrationRequestSender.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBPushRegistrationDelegate;
@class FBSimpleNetworkerRequest, NSString;

@interface OrcaPushRegistrationRequestSender : NSObject <FBNetworkerRequestDelegate, FBPushRegistrationRequestSender, FBClassProvidable> {

	id<FBPushRegistrationDelegate> _delegate;
	FBSimpleNetworkerRequest* _registerRequest;

}

@property (nonatomic,retain) FBSimpleNetworkerRequest * registerRequest;                  //@synthesize registerRequest=_registerRequest - In the implementation block
@property (assign,nonatomic,__weak) id<FBPushRegistrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)sendRegisterRequestWithParams:(id)arg1 session:(id)arg2 ;
-(void)cancelCurrentRegisterRequest;
-(void)sendUnregisterRequestWithParams:(id)arg1 session:(id)arg2 ;
-(void)_handleRegistrationSuccess:(id)arg1 session:(id)arg2 ;
-(void)_handleRegistrationFailure:(id)arg1 session:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)setRegisterRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(FBSimpleNetworkerRequest *)registerRequest;
-(void)setDelegate:(id<FBPushRegistrationDelegate>)arg1 ;
-(id<FBPushRegistrationDelegate>)delegate;
@end

