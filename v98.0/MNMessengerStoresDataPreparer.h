/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSearchDataPreparing.h>

@protocol OS_dispatch_queue, MNAddressBookContactSyncQuerying;
@class NSObject, MNThreadStore, MNUserStore;

@interface MNMessengerStoresDataPreparer : NSObject <MNContactSearchDataPreparing> {

	NSObject*<OS_dispatch_queue> _queue;
	MNThreadStore* _threadStore;
	MNUserStore* _userStore;
	id<MNAddressBookContactSyncQuerying> _addressBookContactSyncStore;

}
-(id)initWithUserProvider:(id)arg1 handlerChainManager:(id)arg2 addressBookContactSyncStore:(id)arg3 queue:(id)arg4 ;
-(void)prepareDataForResults:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_makeUserStoreRequestForResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_makeThreadStoreRequestForResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_makeAddressBookRequestForResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

