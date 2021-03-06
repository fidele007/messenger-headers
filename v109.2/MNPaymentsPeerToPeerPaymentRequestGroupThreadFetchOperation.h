/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, MNPaymentsPeerToPeerPaymentRequestCoordinator, FBMemPeerToPeerPaymentRequest;

@interface MNPaymentsPeerToPeerPaymentRequestGroupThreadFetchOperation : NSOperation {

	NSString* _requestReceiverId;
	NSString* _groupThreadId;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _paymentRequestCoordinator;
	FBMemPeerToPeerPaymentRequest* _fetchedPaymentRequest;
	BOOL _finished;
	BOOL _executing;

}
-(id)initWithRequestReceiverId:(id)arg1 groupThreadId:(id)arg2 peerToPeerPaymentRequestCoordinator:(id)arg3 ;
-(id)fetchedPaymentRequest;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
@end

