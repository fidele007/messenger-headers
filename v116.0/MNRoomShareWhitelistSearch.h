/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBContactsSearch.h>

@protocol FBCancelable, FBContactsSearchDelegate;
@class MNRoomShareWhitelistSearchInjector, MNRoomShareWhitelistContactsFetcher, NSArray, FBContactSearchQuery, NSString;

@interface MNRoomShareWhitelistSearch : NSObject <FBContactsSearch> {

	MNRoomShareWhitelistSearchInjector* _injector;
	MNRoomShareWhitelistContactsFetcher* _whitelistContactsFetcher;
	id<FBCancelable> _whitelistContactsFetchRequestCancelHandle;
	NSArray* _searchResults;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(void)_didLoadContactFBIDs:(id)arg1 ;
-(void)_didLoadContactsWithError:(id)arg1 ;
-(void)_didLoadUsersByFBID:(id)arg1 orderedContactFBIDs:(id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(void)refreshSearch:(id)arg1 ;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1 ;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(id)sectionsInSearch;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(BOOL)hasPendingSearchOperation;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(void)clearResults;
-(FBContactSearchQuery *)currentQuery;
-(id)titleForHeaderInSection:(long long)arg1 ;
@end

