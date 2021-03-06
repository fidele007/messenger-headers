/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, FBMemGraphSearchQuery, FBGraphQLPagedDownloadRequest;


@protocol FBSearchCommonDownloaderProtocol <FBSearchResultsDownloaderProtocol>
@property (nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL hasLoadedEnoughInitialPages; 
@property (nonatomic,readonly) unsigned long long resultType; 
@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,copy,readonly) NSString * semantic; 
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID; 
@property (nonatomic,copy,readonly) NSString * resultsSessionID; 
@property (nonatomic,copy,readonly) NSString * requestTracker; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,copy,readonly) NSArray * needleFilters; 
@property (nonatomic,copy,readonly) NSString * spellerConfidence; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * correctedQuery; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * currentQuery; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * rootQuery; 
@property (nonatomic,readonly) FBGraphQLPagedDownloadRequest * request; 
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog; 
@property (nonatomic,copy,readonly) NSString * resultsSessionLoggingUnitId; 
@required
-(NSString *)typeaheadSessionID;
-(NSString *)resultsSessionID;
-(NSString *)verticalToLog;
-(NSString *)spellerConfidence;
-(NSArray *)needleFilters;
-(NSString *)requestTracker;
-(NSString *)postSearchIntentLog;
-(FBMemGraphSearchQuery *)correctedQuery;
-(BOOL)hasLoadedEnoughInitialPages;
-(FBMemGraphSearchQuery *)rootQuery;
-(NSString *)resultsSessionLoggingUnitId;
-(FBGraphQLPagedDownloadRequest *)request;
-(NSArray *)filters;
-(BOOL)loading;
-(unsigned long long)resultType;
-(void)cancelDownloadRequest;
-(NSString *)semantic;
-(FBMemGraphSearchQuery *)currentQuery;

@end

