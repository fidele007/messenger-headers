/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBRootGraphQLQuerySectionComponentListenerAnnouncer;


@protocol FBRootGraphQLQuerySectionComponentConfiguring <NSObject>
@property (nonatomic,copy) NSString * keyForModelInResponse; 
@property (assign,nonatomic) BOOL reloadOnPullToRefresh; 
@property (assign,nonatomic) BOOL refreshOnReappear; 
@property (assign,nonatomic) unsigned long long cacheThresholdInSeconds; 
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager; 
@property (assign,nonatomic) BOOL shouldShowNoContentOnEmptyResult; 
@property (nonatomic,copy) NSString * loggableName; 
@property (nonatomic,retain) id scopeKey; 
@property (nonatomic,retain) FBRootGraphQLQuerySectionComponentListenerAnnouncer * announcer; 
@required
-(void)setAnnouncer:(id)arg1;
-(void)setReloadOnPullToRefresh:(BOOL)arg1;
-(id)scopeKey;
-(NSString *)loggableName;
-(BOOL)reloadOnPullToRefresh;
-(BOOL)shouldTransitionViewStateManager;
-(BOOL)shouldShowNoContentOnEmptyResult;
-(void)setShouldTransitionViewStateManager:(BOOL)arg1;
-(void)setScopeKey:(id)arg1;
-(void)setShouldShowNoContentOnEmptyResult:(BOOL)arg1;
-(void)setLoggableName:(id)arg1;
-(NSString *)keyForModelInResponse;
-(void)setKeyForModelInResponse:(id)arg1;
-(BOOL)refreshOnReappear;
-(void)setRefreshOnReappear:(BOOL)arg1;
-(unsigned long long)cacheThresholdInSeconds;
-(void)setCacheThresholdInSeconds:(unsigned long long)arg1;
-(FBRootGraphQLQuerySectionComponentListenerAnnouncer *)announcer;

@end

