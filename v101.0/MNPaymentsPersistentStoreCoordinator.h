/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsMessengerPaymentDataFetcher.h>
#import <Messenger/MNPaymentsMessengerPaymentDataMutator.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestDataFetcher.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestDataMutator.h>

@class FBUserSession, MNPaymentsPersistentStore, NSMutableDictionary, NSString;

@interface MNPaymentsPersistentStoreCoordinator : NSObject <MNPaymentsMessengerPaymentDataFetcher, MNPaymentsMessengerPaymentDataMutator, MNPaymentsPeerToPeerPaymentRequestDataFetcher, MNPaymentsPeerToPeerPaymentRequestDataMutator> {

	FBUserSession* _session;
	MNPaymentsPersistentStore* _persistentStore;
	NSMutableDictionary* _dispatchQueues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transferForId:(id)arg1 ;
-(void)paymentRequestForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transferForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 extensibleMap:(id)arg2 ;
-(void)recentInitedPaymentRequestCountWithRequesteeId:(id)arg1 groupThreadId:(id)arg2 maxCount:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentInitedPaymentRequestsWithRequesterId:(id)arg1 requesteeId:(id)arg2 maxCount:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)paymentPin;
-(void)addPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)seqIdWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSeqId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)paymentRequestForId:(id)arg1 ;
-(void)recentTransfersWithUserId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesterId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesteeId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentPaymentRequestsWithMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentPaymentRequestsWithRequesterId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentPaymentRequestsWithRequesteeId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)getInitedPaymentRequestCountWithRequesteeId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePaymentPin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentTransfersWithMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentTransfersWithMaxCount:(long long)arg1 beforeTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersWithUserId:(id)arg1 maxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentTransfersFromSenderId:(id)arg1 withMaxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersFromSenderId:(id)arg1 withMaxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentTransfersToRecipientId:(id)arg1 withMaxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersToRecipientId:(id)arg1 withMaxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messengerPaymentQueue;
-(BOOL)_isPINPersistentStoreProductionTestEnabled;
-(void)_upsertPaymentPin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deletePaymentPin:(/*^block*/id)arg1 ;
-(id)paymentPinQueue;
-(id)paymentRequestQueue;
-(void)_executeAsyncDatabaseCall:(/*^block*/id)arg1 dispatchQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dispatchQueueForIdentifier:(id)arg1 ;
-(id)dbPersistentStore;
-(void)executeAsyncOpenDatabaseCall:(/*^block*/id)arg1 dispatchQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_databasePath;
-(id)userSession;
@end

