/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBFeedQueryConfiguration : NSObject {

	/*^block*/id _feedConnectionBlock;
	/*^block*/id _analyticsModuleBlock;
	unsigned long long _newsFeedType;
	BOOL _shouldPersistEdges;
	BOOL _shouldPerformEndToEndLogging;
	NSString* _feedName;
	const FBGraphQLFieldSet* _edgeFieldSet;
	unsigned long long _persistedEdgeCountLimit;

}

@property (nonatomic,copy,readonly) NSString * feedName;                                //@synthesize feedName=_feedName - In the implementation block
@property (nonatomic,readonly) const FBGraphQLFieldSet* edgeFieldSet;                   //@synthesize edgeFieldSet=_edgeFieldSet - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersistEdges;                                 //@synthesize shouldPersistEdges=_shouldPersistEdges - In the implementation block
@property (nonatomic,readonly) unsigned long long persistedEdgeCountLimit;              //@synthesize persistedEdgeCountLimit=_persistedEdgeCountLimit - In the implementation block
@property (nonatomic,readonly) BOOL isNewsFeed; 
@property (nonatomic,readonly) BOOL isTopStoriesNewsFeed; 
@property (nonatomic,readonly) BOOL isMostRecentNewsFeed; 
@property (nonatomic,readonly) BOOL shouldPerformEndToEndLogging;                       //@synthesize shouldPerformEndToEndLogging=_shouldPerformEndToEndLogging - In the implementation block
-(const FBGraphQLFieldSet*)edgeFieldSet;
-(id)initWithFeedName:(id)arg1 edgeFieldSet:(const FBGraphQLFieldSet*)arg2 feedConnectionBlock:(/*^block*/id)arg3 analyticsModuleBlock:(/*^block*/id)arg4 shouldPersistEdges:(BOOL)arg5 persistedEdgeCountLimit:(unsigned long long)arg6 newsFeedType:(unsigned long long)arg7 shouldPerformEndToEndLogging:(BOOL)arg8 ;
-(id)feedConnectionFromResponse:(id)arg1 ;
-(id)analyticsModuleWithTarget:(id)arg1 ;
-(BOOL)isNewsFeed;
-(BOOL)isTopStoriesNewsFeed;
-(BOOL)isMostRecentNewsFeed;
-(NSString *)feedName;
-(BOOL)shouldPersistEdges;
-(unsigned long long)persistedEdgeCountLimit;
-(BOOL)shouldPerformEndToEndLogging;
@end

