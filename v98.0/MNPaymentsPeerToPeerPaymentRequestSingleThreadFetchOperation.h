/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, MNPaymentsPeerToPeerPaymentRequestCoordinator, FBMemPeerToPeerPaymentRequest;

@interface MNPaymentsPeerToPeerPaymentRequestSingleThreadFetchOperation : NSOperation {

	NSString* _requestSenderId;
	NSString* _requestReceiverId;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _paymentRequestCoordinator;
	FBMemPeerToPeerPaymentRequest* _fetchedPaymentRequest;
	BOOL _finished;
	BOOL _executing;

}
-(id)fetchedPaymentRequest;
-(id)initWithRequestSenderId:(id)arg1 requestReceiverId:(id)arg2 peerToPeerPaymentRequestCoordinator:(id)arg3 ;
-(BOOL)isAsynchronous;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

