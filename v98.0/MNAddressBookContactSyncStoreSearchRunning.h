/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAddressBookContactSyncStoreSearchRunning
@required
-(void)fetchAddressBookContactsWithFetchLimit:(unsigned long long)arg1 listener:(id)arg2;
-(void)fetchAddressBookContactsWithIdentifiers:(id)arg1 fetchLimit:(unsigned long long)arg2 listener:(id)arg3;
-(void)fetchAddressBookContactsWithPartialName:(id)arg1 fetchLimit:(unsigned long long)arg2 listener:(id)arg3;
-(void)fetchAddressBookContactsWithPartialNumber:(id)arg1 fetchLimit:(unsigned long long)arg2 listener:(id)arg3;

@end
