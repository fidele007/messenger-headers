/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBSimpleNetworkerRequest;

@interface MNPaymentsAgentSuggestedItemCheckoutRequestSender : NSObject {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _networkRequest;

}
-(void)placeOrderForItemWithItemId:(id)arg1 externalRequestId:(id)arg2 amount:(id)arg3 userCredentialId:(id)arg4 pin:(id)arg5 touchIDNonce:(id)arg6 successBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8 ;
-(id)initWithSession:(id)arg1 ;
@end
