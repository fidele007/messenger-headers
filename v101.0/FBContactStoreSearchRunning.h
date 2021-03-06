/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactStoreSearchRunning <NSObject>
@required
-(void)fetchContactWithId:(id)arg1 listener:(id)arg2;
-(void)fetchContactsWithIds:(id)arg1 listener:(id)arg2;
-(void)fetchTopContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)fetchTopContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 withinList:(id)arg3 listener:(id)arg4;
-(void)fetchTopMessengerContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)fetchTopNonMessengerContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)fetchAllContactsWithFetchLimit:(unsigned)arg1 listener:(id)arg2;
-(void)fetchSpokenToContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)startWithCollection:(id)arg1;

@end

