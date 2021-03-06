/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContactsSearch.h>

@protocol FBLocalGroupsSearchModelAdapter, FBContactsSearchDelegate;
@class NSOperationQueue, NSBlockOperation, FBAnalytics, NSString, FBSearchResultsFilterer, FBContactSearchQuery, NSArray;

@interface FBLocalGroupsSearch : NSObject <FBContactsSearch> {

	id<FBLocalGroupsSearchModelAdapter> _modelAdapter;
	NSOperationQueue* _operationQueue;
	NSBlockOperation* _searchOperation;
	FBAnalytics* _analytics;
	NSString* _analyticsJobUuid;
	NSString* _analyticsQueryUuid;
	unsigned long long _searchStartTime;
	FBSearchResultsFilterer* _resultsFilterer;
	BOOL _includeNicknameResults;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	NSArray* _sortedResults;

}

@property (nonatomic,copy,readonly) NSArray * sortedResults;                          //@synthesize sortedResults=_sortedResults - In the implementation block
@property (assign,nonatomic) BOOL includeNicknameResults;                             //@synthesize includeNicknameResults=_includeNicknameResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(BOOL)hasPendingSearchOperation;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1 ;
-(void)refreshSearch:(id)arg1 ;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(id)sectionsInSearch;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(void)setIncludeNicknameResults:(BOOL)arg1 ;
-(id)initWithModelAdapter:(id)arg1 ;
-(void)setFilteredResults:(id)arg1 ;
-(NSArray *)sortedResults;
-(BOOL)includeNicknameResults;
-(void)_createSearchOperation;
-(void)_searchExecutionOperationMain;
-(void)_executeSearchThroughPossibleResults:(id)arg1 ;
-(BOOL)_shouldShowNicknameResults;
-(void)_searchOperationCompleted;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(void)clearResults;
@end

