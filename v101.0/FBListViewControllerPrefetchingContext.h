/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponentContext, FBListViewStateManager, FBListViewLayoutListenerAnnouncer, FBListViewControllerConfiguration, FBSectionComponentTrackerWrapper, FBListLogger, FBUserSession;

@interface FBListViewControllerPrefetchingContext : NSObject {

	/*^block*/id _componentContextFactory;
	/*^block*/id _sectionComponentFactory;
	FBSectionComponentContext* _sectionComponentContext;
	FBListViewStateManager* _viewStateManager;
	FBListViewLayoutListenerAnnouncer* _layoutAnnouncer;
	FBListViewControllerConfiguration* _listViewControllerConfiguration;
	FBSectionComponentTrackerWrapper* _trackerWrapper;
	BOOL _isUsingExternalLogger;
	FBListLogger* _logger;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBSectionComponentTrackerWrapper * trackerWrapper;                                //@synthesize trackerWrapper=_trackerWrapper - In the implementation block
@property (nonatomic,readonly) FBListLogger * logger;                                                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) BOOL isUsingExternalLogger;                                                       //@synthesize isUsingExternalLogger=_isUsingExternalLogger - In the implementation block
@property (nonatomic,readonly) FBListViewStateManager * viewStateManager;                                        //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (nonatomic,readonly) FBListViewLayoutListenerAnnouncer * layoutAnnouncer;                              //@synthesize layoutAnnouncer=_layoutAnnouncer - In the implementation block
@property (nonatomic,readonly) id sectionComponentFactory;                                                       //@synthesize sectionComponentFactory=_sectionComponentFactory - In the implementation block
@property (nonatomic,readonly) id componentContextFactory;                                                       //@synthesize componentContextFactory=_componentContextFactory - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBListViewControllerConfiguration * listViewControllerConfiguration;              //@synthesize listViewControllerConfiguration=_listViewControllerConfiguration - In the implementation block
-(FBListViewStateManager *)viewStateManager;
-(id)initWithConfiguration:(id)arg1 componentContextFactory:(/*^block*/id)arg2 sectionComponentFactory:(/*^block*/id)arg3 session:(id)arg4 logger:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 componentContextFactory:(/*^block*/id)arg2 sectionComponentFactory:(/*^block*/id)arg3 session:(id)arg4 ;
-(void)startPrefetching;
-(FBSectionComponentTrackerWrapper *)trackerWrapper;
-(BOOL)isUsingExternalLogger;
-(FBListViewLayoutListenerAnnouncer *)layoutAnnouncer;
-(id)sectionComponentFactory;
-(id)componentContextFactory;
-(FBListViewControllerConfiguration *)listViewControllerConfiguration;
-(FBListLogger *)logger;
-(FBUserSession *)session;
@end
