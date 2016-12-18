/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFavoriteContact;
@class FBSyncGroupConversation, FBSyncMessengerStatusUpdate, FBSyncPerson, FBSyncPresence, NSArray, FBPersonSyncSummary;

@interface FBSyncEventBuilder : NSObject {

	id<FBFavoriteContact> _favoriteContact;
	FBSyncGroupConversation* _groupConversation;
	FBSyncMessengerStatusUpdate* _messengerStatusUpdate;
	FBSyncPerson* _person;
	FBSyncPresence* _presence;
	NSArray* _searchTokens;
	FBPersonSyncSummary* _summary;
	unsigned long long _type;

}
+(id)aSyncEvent;
-(id)withType:(unsigned long long)arg1 ;
-(id)withSummary:(id)arg1 ;
-(id)withFavoriteContact:(id)arg1 ;
-(id)withGroupConversation:(id)arg1 ;
-(id)withMessengerStatusUpdate:(id)arg1 ;
-(id)withPerson:(id)arg1 ;
-(id)withPresence:(id)arg1 ;
-(id)withSearchTokens:(id)arg1 ;
-(id)build;
@end
