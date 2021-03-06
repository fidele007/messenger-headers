/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSearchCommonDownloaderProtocol.h>

@protocol FBSearchResultsDownloaderDelegate;
@class NSArray, NSString, FBGraphQLQuery, FBMemGraphSearchQuery, FBScenePath, FBUserSession, FBGraphQLMemPaginatedConnectionController, FBSearchResultsDownloaderConfig, FBGraphQLPagedDownloadRequest;

@interface FBGraphSearchResultsDownloader : NSObject <FBSearchCommonDownloaderProtocol> {

	FBScenePath* _scenePath;
	unsigned long long _emptyConnectionCount;
	BOOL _forSaleSearch;
	FBUserSession* _session;
	FBGraphQLMemPaginatedConnectionController* _connectionController;
	BOOL _inFatalState;
	FBSearchResultsDownloaderConfig* _downloaderConfig;
	BOOL _loadedAtLeastOnce;
	unsigned long long _headRequestPageSize;
	BOOL _isLoading;
	BOOL _areTopIndependentModulesAlreadyShown;
	BOOL _shouldReturnTopIndependentModulesOnly;
	NSString* _requestTracker;
	NSString* _spellerConfidence;
	FBMemGraphSearchQuery* _currentQuery;
	NSString* _verticalToLog;
	NSArray* _needleFilters;
	NSString* _postSearchIntentLog;
	FBMemGraphSearchQuery* _correctedQuery;
	NSString* _resultsSessionLoggingUnitId;
	id<FBSearchResultsDownloaderDelegate> _delegate;
	NSString* _pivotType;
	unsigned long long _pageSize;
	NSString* _typeaheadSessionID;
	NSString* _connectionModelKey;
	FBGraphQLPagedDownloadRequest* _request;

}

@property (nonatomic,copy) NSString * connectionModelKey;                                        //@synthesize connectionModelKey=_connectionModelKey - In the implementation block
@property (nonatomic,retain) FBGraphQLPagedDownloadRequest * request;                            //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBSearchResultsDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pivotType;                                        //@synthesize pivotType=_pivotType - In the implementation block
@property (nonatomic,readonly) unsigned long long pageSize;                                      //@synthesize pageSize=_pageSize - In the implementation block
@property (assign,nonatomic) BOOL areTopIndependentModulesAlreadyShown;                          //@synthesize areTopIndependentModulesAlreadyShown=_areTopIndependentModulesAlreadyShown - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnTopIndependentModulesOnly;                         //@synthesize shouldReturnTopIndependentModulesOnly=_shouldReturnTopIndependentModulesOnly - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;                               //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isLoading;                                                   //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedEnoughInitialPages; 
@property (nonatomic,readonly) unsigned long long resultType; 
@property (nonatomic,copy,readonly) NSArray * filtersChangeSet; 
@property (nonatomic,copy,readonly) NSString * semantic; 
@property (nonatomic,copy,readonly) NSString * requestTracker;                                   //@synthesize requestTracker=_requestTracker - In the implementation block
@property (nonatomic,copy,readonly) NSString * verticalToLog;                                    //@synthesize verticalToLog=_verticalToLog - In the implementation block
@property (nonatomic,copy,readonly) NSArray * needleFilters;                                     //@synthesize needleFilters=_needleFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * spellerConfidence;                                //@synthesize spellerConfidence=_spellerConfidence - In the implementation block
@property (nonatomic,readonly) FBGraphQLQuery * lastGraphQLQuery; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * correctedQuery;                           //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (nonatomic,readonly) FBMemGraphSearchQuery * currentQuery;                             //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,readonly) FBMemGraphSearchQuery * rootQuery; 
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog;                              //@synthesize postSearchIntentLog=_postSearchIntentLog - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultsSessionLoggingUnitId;                      //@synthesize resultsSessionLoggingUnitId=_resultsSessionLoggingUnitId - In the implementation block
-(NSString *)pivotType;
-(NSString *)verticalToLog;
-(void)loadHead;
-(void)loadTail;
-(void)setAreTopIndependentModulesAlreadyShown:(BOOL)arg1 ;
-(void)setShouldReturnTopIndependentModulesOnly:(BOOL)arg1 ;
-(NSArray *)filtersChangeSet;
-(NSString *)spellerConfidence;
-(void)_loadWithTimeout:(BOOL)arg1 ;
-(BOOL)hasLoadedEnoughInitialPages;
-(NSArray *)needleFilters;
-(FBGraphQLQuery *)lastGraphQLQuery;
-(FBMemGraphSearchQuery *)rootQuery;
-(NSString *)postSearchIntentLog;
-(NSString *)resultsSessionLoggingUnitId;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 downloaderConfig:(id)arg3 ;
-(BOOL)supportsFilters;
-(BOOL)areTopIndependentModulesAlreadyShown;
-(BOOL)shouldReturnTopIndependentModulesOnly;
-(NSString *)connectionModelKey;
-(void)setConnectionModelKey:(NSString *)arg1 ;
-(NSString *)typeaheadSessionID;
-(BOOL)hasMoreData;
-(void)setDelegate:(id<FBSearchResultsDownloaderDelegate>)arg1 ;
-(NSString *)description;
-(id<FBSearchResultsDownloaderDelegate>)delegate;
-(FBGraphQLPagedDownloadRequest *)request;
-(BOOL)isLoading;
-(id)edges;
-(unsigned long long)resultType;
-(void)setRequest:(FBGraphQLPagedDownloadRequest *)arg1 ;
-(void)cancelDownloadRequest;
-(NSString *)semantic;
-(FBMemGraphSearchQuery *)currentQuery;
-(void)retry;
-(NSString *)requestTracker;
-(unsigned long long)pageSize;
-(FBMemGraphSearchQuery *)correctedQuery;
@end

