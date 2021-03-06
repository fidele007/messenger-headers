/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAddressBookContactSyncMonitorDelegate.h>
#import <Messenger/MNAddressBookContactSyncQuerying.h>
#import <Messenger/FBAddressBookReaderDelegate.h>
#import <Messenger/MNAddressBookReaderListener.h>

@protocol OS_dispatch_queue, FBAddressBookReader, FBAddressBookReaderDelegate, MNAddressBookContactStoring, MNAddressBookContactSyncMonitoring, MNAddressBookContactSyncStoreSearchRunning, FBAddressBookProfileImageFetching;
@class NSObject, MNAddressBookContactSyncStoreRunJobListenerFactory, MNAddressBookContactSyncStoreListenerAnnouncer, MNUserSettings, NSString;

@interface MNAddressBookContactSyncStore : NSObject <MNAddressBookContactSyncMonitorDelegate, MNAddressBookContactSyncQuerying, FBAddressBookReaderDelegate, MNAddressBookReaderListener> {

	NSObject*<OS_dispatch_queue> _localContactsQueue;
	id<FBAddressBookReader> _addressBookReader;
	MNAddressBookContactSyncStoreRunJobListenerFactory* _listenerFactory;
	id<FBAddressBookReaderDelegate> _readerDelegate;
	id<MNAddressBookContactStoring> _storage;
	id<MNAddressBookContactSyncMonitoring> _syncMonitor;
	id<MNAddressBookContactSyncStoreSearchRunning> _searchRunner;
	id<FBAddressBookProfileImageFetching> _profileImageFetcher;
	MNAddressBookContactSyncStoreListenerAnnouncer* _announcer;
	MNUserSettings* _userSettings;
	BOOL _isStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startSyncIfNecessary;
-(void)stopSync;
-(void)fetchAddressBookContactsWithFetchLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAddressBookContactsWithIdentifiers:(id)arg1 fetchLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAddressBookContactsWithPartialName:(id)arg1 fetchLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAddressBookContactsWithPartialNumber:(id)arg1 fetchLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAddressBookContactProfileImageWithIdentifier:(unsigned long long)arg1 textColor:(id)arg2 profileImageSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearAddressBookContactsWithIdentifiers:(id)arg1 ;
-(void)addAddressBookContactSyncStoreListener:(id)arg1 ;
-(void)didReadAddressBookWithContacts:(id)arg1 ;
-(id)initWithQueue:(id)arg1 storage:(id)arg2 searchRunner:(id)arg3 addressBookReader:(id)arg4 profileImageFetcher:(id)arg5 syncMonitor:(id)arg6 listenerFactory:(id)arg7 userSettings:(id)arg8 ;
-(void)removeAddressBookContactSyncStoreListener:(id)arg1 ;
-(void)addressBookDidChange;
@end

