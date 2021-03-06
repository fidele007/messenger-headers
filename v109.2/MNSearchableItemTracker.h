/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSpotlightIndexingListener.h>

@class FBUserPreferences, NSArray, MNSpotlightUserSearchableItemDeduper, NSString;

@interface MNSearchableItemTracker : NSObject <MNSpotlightIndexingListener> {

	FBUserPreferences* _userPreferences;
	NSArray* _indexedSearchableItemIdentifiers;
	MNSpotlightUserSearchableItemDeduper* _searchableItemDeduper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserPreferences:(id)arg1 searchableItemDeduper:(id)arg2 ;
-(id)_indexedSearchableItemIdentifiers;
-(id)indexedSearchableItemIdentifiers;
-(void)_removeIndexedSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)didIndexSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)didRemoveSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)didRemoveAllGroupThreads;
-(void)didRemoveAllSearchableItems;
-(BOOL)hasImagedSearchableItems;
-(void)dedupCurrentSearchableItemIdentifiers;
-(id)searchableItemsWithContactSyncUsers:(id)arg1 ;
@end

