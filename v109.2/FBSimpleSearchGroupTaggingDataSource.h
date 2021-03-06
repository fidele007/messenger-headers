/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSimpleSearchDataSource.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, NSAttributedString, NSMutableSet, NSMutableArray, NSMutableDictionary, FBKVOController, NSArray, NSSet, NSString;

@interface FBSimpleSearchGroupTaggingDataSource : FBSimpleSearchDataSource {

	FBUserSession* _session;
	NSAttributedString* _groupMembersSectionTitle;
	NSAttributedString* _othersSectionTitle;
	NSMutableSet* _groupMemberAvatars;
	NSMutableArray* _groupMemberQueryResults;
	NSMutableDictionary* _groupMemberQueryResultsCache;
	NSMutableArray* _queryResults;
	FBKVOController* _KVOController;
	id<FBServiceTransactionMutating> _token;
	BOOL _explicitMention;
	BOOL _canTagSelf;
	BOOL _isFetchingGroupMembers;
	unsigned long long _fetchLimit;
	NSArray* _avatarCollections;
	NSSet* _excludedIDs;
	NSString* _authorType;
	NSString* _groupID;

}

@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL explicitMention;                       //@synthesize explicitMention=_explicitMention - In the implementation block
@property (assign,nonatomic) BOOL canTagSelf;                            //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (nonatomic,readonly) BOOL isFetchingGroupMembers;              //@synthesize isFetchingGroupMembers=_isFetchingGroupMembers - In the implementation block
@property (nonatomic,copy) NSArray * avatarCollections;                  //@synthesize avatarCollections=_avatarCollections - In the implementation block
@property (nonatomic,copy) NSSet * excludedIDs;                          //@synthesize excludedIDs=_excludedIDs - In the implementation block
@property (nonatomic,copy) NSString * authorType;                        //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSString * groupID;                           //@synthesize groupID=_groupID - In the implementation block
-(NSArray *)avatarCollections;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(BOOL)canTagSelf;
-(NSSet *)excludedIDs;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(void)setCanTagSelf:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 ;
-(void)_downloadComposerGroupPublishTarget;
-(void)_updateSectionTitleWith:(id)arg1 ;
-(void)_resetTaggableCollectionAvatarState;
-(BOOL)isFetchingGroupMembers;
-(id)parseServerResponse:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(void)dedupeSuggestions:(id)arg1 ;
-(id)createTableViewData:(id)arg1 isIndexAvailable:(BOOL)arg2 ;
-(id)typeaheadRequestForQueryString:(id)arg1 callbackPerformer:(id)arg2 typeaheadSessionID:(id)arg3 ;
-(id)bootstrapSuggestionsForQueryString:(id)arg1 indexReady:(BOOL*)arg2 ;
-(id)getNullState;
-(BOOL)explicitMention;
-(void)setExplicitMention:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setQueryString:(id)arg1 ;
-(NSString *)authorType;
-(void)setAuthorType:(NSString *)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
@end

