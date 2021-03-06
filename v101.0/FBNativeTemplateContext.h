/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/NTNativeTemplateBaseContext.h>
#import <Messenger/NTNativeTemplateContextScopedDataModelMutatorListener.h>

@protocol FBSectionedDataSourceChangesetWriter, FBNavigationCoordinator, FBIntentHandler;
@class NSMutableDictionary, FBUserSession, NSString, FBFeedToolbox, FBNTAnnounceActionListenerAnnouncer, NSArray, NSDictionary;

@interface FBNativeTemplateContext : NTNativeTemplateBaseContext <NTNativeTemplateContextScopedDataModelMutatorListener> {

	NSMutableDictionary* _cachedTemplateIDToBundleMap;
	id<FBSectionedDataSourceChangesetWriter> _writeInterface;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id _scenePath;
	NSString* _analyticsModule;
	FBFeedToolbox* _feedToolbox;
	FBNTAnnounceActionListenerAnnouncer* _announceListenerAnnouncer;
	NSArray* _cachedTemplates;

}

@property (nonatomic,__weak,readonly) id<FBSectionedDataSourceChangesetWriter> writeInterface;               //@synthesize writeInterface=_writeInterface - In the implementation block
@property (nonatomic,__weak,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,__weak,readonly) id<FBNavigationCoordinator> navigationCoordinator;                     //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler;                                     //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) id scenePath;                                                                 //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;                                                  //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (nonatomic,readonly) FBNTAnnounceActionListenerAnnouncer * announceListenerAnnouncer;              //@synthesize announceListenerAnnouncer=_announceListenerAnnouncer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cachedTemplates;                                               //@synthesize cachedTemplates=_cachedTemplates - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cachedTemplateIDToBundleMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(id)scenePath;
-(id<FBSectionedDataSourceChangesetWriter>)writeInterface;
-(NSArray *)cachedTemplates;
-(FBFeedToolbox *)feedToolbox;
-(void)dataModelMutator:(id)arg1 removedIndexPaths:(id)arg2 insertedModels:(id)arg3 atIndices:(id)arg4 updatedModels:(id)arg5 atIndices:(id)arg6 isInitialLoad:(BOOL)arg7 ;
-(id)initWithScenePath:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 writeInterface:(id)arg5 analyticsModule:(id)arg6 feedToolbox:(id)arg7 cachedTemplates:(id)arg8 announceActionListenerAnnouncer:(id)arg9 ;
-(/*^block*/id)alertControllerPresentationBlock;
-(id)javaScriptExecutor;
-(NSDictionary *)cachedTemplateIDToBundleMap;
-(void)addCachedTemplates:(id)arg1 ;
-(FBNTAnnounceActionListenerAnnouncer *)announceListenerAnnouncer;
-(FBUserSession *)session;
@end

