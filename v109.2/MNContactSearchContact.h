/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNContactSearchPerson, MNContactSearchGroup, MNContactSearchPage, MNContactSearchAddressBookEntry, MNContactSearchGame;

@interface MNContactSearchContact : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNContactSearchPerson* _person;
	MNContactSearchGroup* _group;
	MNContactSearchPage* _page;
	MNContactSearchPerson* _secureThread_otherParticipant;
	MNContactSearchAddressBookEntry* _addressBookEntry;
	MNContactSearchGame* _game;

}
+(id)secureThreadWithOtherParticipant:(id)arg1 ;
+(id)game:(id)arg1 ;
+(id)page:(id)arg1 ;
+(id)person:(id)arg1 ;
+(id)addressBookEntry:(id)arg1 ;
+(id)group:(id)arg1 ;
-(void)matchPerson:(/*^block*/id)arg1 group:(/*^block*/id)arg2 page:(/*^block*/id)arg3 secureThread:(/*^block*/id)arg4 addressBookEntry:(/*^block*/id)arg5 game:(/*^block*/id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

