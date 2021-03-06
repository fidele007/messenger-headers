/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsActivityDetailsLoader.h>

@protocol MNPaymentsActivityDetailsLoaderDelegate;
@class NSString, MNPaymentsPeerToPeerPaymentRequestCoordinator, FBPaymentsPeerToPeerContactsService, FBPaymentsPeerToPeerFetchController, FBExponentialBackoffTimer, FBMemPeerToPeerPaymentRequest;

@interface MNPaymentsPeerToPeerRequestActivityLoader : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsActivityDetailsLoader> {

	NSString* _requestId;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBExponentialBackoffTimer* _backoffTimer;
	unsigned long long _retryCount;
	id _requestStatusFetchToken;
	FBMemPeerToPeerPaymentRequest* _request;
	id<MNPaymentsActivityDetailsLoaderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNPaymentsActivityDetailsLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(void)_resetRetryCount;
-(void)_resetBackoffTimer;
-(void)_handleFetchedRequest:(id)arg1 ;
-(void)_retryFetchingRequestStatus;
-(void)_fetchParticipants;
-(void)_updateRequestStatus;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(void)loadActivityDetails;
-(id)initWithRequestId:(id)arg1 fetchController:(id)arg2 requestCoordinator:(id)arg3 contactsService:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<MNPaymentsActivityDetailsLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsActivityDetailsLoaderDelegate>)delegate;
-(void)_updateRequest:(id)arg1 ;
@end

