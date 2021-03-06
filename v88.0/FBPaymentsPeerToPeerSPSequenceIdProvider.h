/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSPSnapshotControllerListener.h>
#import <Messenger/MNSyncProtocolSequenceIdProviding.h>

@class FBPaymentsPeerToPeerSPSnapshotController, MNPaymentsPersistentStoreCoordinator, NSString;

@interface FBPaymentsPeerToPeerSPSequenceIdProvider : NSObject <FBPaymentsPeerToPeerSPSnapshotControllerListener, MNSyncProtocolSequenceIdProviding> {

	FBPaymentsPeerToPeerSPSnapshotController* _snapshotController;
	MNPaymentsPersistentStoreCoordinator* _persistentStoreCoordinator;
	/*^block*/id _fetchSnapshotAndSequenceIdSuccessCallback;
	/*^block*/id _fetchSnapshotAndSequenceIdFailureCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSnapshotController:(id)arg1 persistentStoreCoordinator:(id)arg2 ;
-(void)_cleanupCallbacks;
-(void)getPersistedSequenceIdWithSuccessCallback:(/*^block*/id)arg1 failureCallback:(/*^block*/id)arg2 ;
-(void)fetchLatestSequenceIdAndSnapshotWithSuccessCallback:(/*^block*/id)arg1 failureCallback:(/*^block*/id)arg2 ;
-(void)snapshotController:(id)arg1 didFailToFetchSnapshotWithError:(id)arg2 isCancelled:(BOOL)arg3 ;
-(void)snapshotController:(id)arg1 didFetchSnapshotWithSequenceId:(long long)arg2 ;
-(void)dealloc;
@end

