/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

