/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUserSession, FBScenePath, FBListViewStateManager, FBListLogger, FBListViewLayoutListenerAnnouncer, FBGraphQLConsistentLookasideCache, FBFeedGraphQLConnectionManager, NSString;


@protocol FBComponentContextConfiguration <NSObject>
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler; 
@property (nonatomic,__weak,readonly) id<FBSectionComponentScrollManagerProtocol> scrollManager; 
@property (nonatomic,__weak,readonly) id<FBListViewNavigationSearchBarUpdater> searchBarUpdater; 
@property (nonatomic,__weak,readonly) FBListViewStateManager * viewStateManager; 
@property (nonatomic,readonly) FBListLogger * logger; 
@property (nonatomic,__weak,readonly) id<FBListViewControllerActionHandler> componentActionHandler; 
@property (nonatomic,readonly) FBListViewLayoutListenerAnnouncer * layoutAnnouncer; 
@property (nonatomic,readonly) id<FBGraphQLService> graphQLService; 
@property (nonatomic,readonly) FBGraphQLConsistentLookasideCache * consistentLookasideCache; 
@property (nonatomic,readonly) FBFeedGraphQLConnectionManager * feedGraphQLConnectionManager; 
@property (nonatomic,copy,readonly) NSString * analyticsModule; 
@required
-(NSString *)analyticsModule;
-(id<FBGraphQLService>)graphQLService;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBGraphQLConsistentLookasideCache *)consistentLookasideCache;
-(FBScenePath *)scenePath;
-(id<FBSectionComponentScrollManagerProtocol>)scrollManager;
-(FBListViewStateManager *)viewStateManager;
-(id<FBListViewNavigationSearchBarUpdater>)searchBarUpdater;
-(id<FBListViewControllerActionHandler>)componentActionHandler;
-(FBListViewLayoutListenerAnnouncer *)layoutAnnouncer;
-(FBFeedGraphQLConnectionManager *)feedGraphQLConnectionManager;
-(FBListLogger *)logger;
-(FBUserSession *)session;

@end

