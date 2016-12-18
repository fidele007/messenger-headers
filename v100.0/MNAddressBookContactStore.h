/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAddressBookContactStoring.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface MNAddressBookContactStore : NSObject <MNAddressBookContactStoring> {

	NSObject*<OS_dispatch_queue> _storageQueue;
	NSArray* _contacts;

}
-(void)clearStoredContacts;
-(void)storeContacts:(id)arg1 ;
-(void)clearStoredContactsWithIdentifiers:(id)arg1 ;
-(id)fetchAddressBookContactsWithFetchLimit:(unsigned long long)arg1 ;
-(id)fetchAddressBookContactsWithIdentifiers:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)fetchAddressBookContactsWithPartialName:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)fetchAddressBookContactsWithPartialNumber:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)initWithStorageQueue:(id)arg1 ;
@end
