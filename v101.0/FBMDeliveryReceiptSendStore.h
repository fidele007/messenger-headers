/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache;

@interface FBMDeliveryReceiptSendStore : NSObject {

	FBCache* _pendingStore;
	FBCache* _sendingStore;
	FBCache* _sentStore;

}
-(BOOL)_isDeliveryReceipt:(id)arg1 inStore:(id)arg2 ;
-(void)_mergeDeliveryReceipt:(id)arg1 intoStore:(id)arg2 ;
-(void)_mergeDeliveryReceipts:(id)arg1 intoStore:(id)arg2 ;
-(void)_removeDeliveryReceipts:(id)arg1 fromStore:(id)arg2 ;
-(void)addPendingDeliveryReceipts:(id)arg1 ;
-(void)addPendingDeliveryReceipt:(id)arg1 ;
-(id)flushAllPendingDeliveryReceipts;
-(void)archiveSentDeliveryReceipts:(id)arg1 ;
-(void)markFailedDeliveryReceiptsAsPending:(id)arg1 ;
-(id)init;
@end

