/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBSectionedDataSourceChangesetWriter.h>
#import <Messenger/FBGraphQLConnectionControllerLoadListener.h>
#import <Messenger/FBGraphQLConnectionChangesetSequenceServiceBase.h>

@protocol NSObject, FBGraphQLConnectionChangesetSequenceServiceListener, FBGraphQLConnectionFetchStatusListener, FBGraphQLConnectionChangesetMapper;
@class FBGraphQLConnectionController, FBGQLConnectionFlatteningAdapter, FBConnectionPageLoadLimits, NSMutableDictionary, FBGraphQLConnectionCursor, FBGraphQLConnectionDelayedChangesets, NSString;

@interface FBGraphQLConnectionChangesetSequenceService : NSObject <FBSectionedDataSourceChangesetWriter, FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionChangesetSequenceServiceBase> {

	FBGraphQLConnectionController* _connectionController;
	FBGQLConnectionFlatteningAdapter* _flatteningAdapter;
	FBConnectionPageLoadLimits* _pageLoadLimits;
	NSMutableDictionary* _pageLoadUserInfo;
	id<NSObject> _componentContext;
	/*^block*/id _componentProvider;
	id<FBGraphQLConnectionChangesetSequenceServiceListener> _listener;
	id<FBGraphQLConnectionFetchStatusListener> _fetchStatusListener;
	FBGraphQLConnectionCursor* _lastHeadLoadLocation;
	/*function pointer*/void* _connectionEdgeToModelTransformer;
	id<FBGraphQLConnectionChangesetMapper> _changesetMapper;
	unsigned long long _currentType;
	BOOL _didCompleteIntialLoad;
	FBGraphQLConnectionDelayedChangesets* _delayedChangesets;

}

@property (nonatomic,readonly) FBGraphQLConnectionController * connectionController;              //@synthesize connectionController=_connectionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(FBGraphQLConnectionController *)connectionController;
-(id)initWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentProvider:(/*^block*/id)arg4 graphQLConnectionController:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentPerIndexProvider:(/*^block*/id)arg4 ;
-(id)initWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentPerIndexProvider:(/*^block*/id)arg4 graphQLConnectionController:(id)arg5 ;
-(void)performHeadLoad;
-(void)reloadAllDataWithDelayedCacheClearing;
-(id)initWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentPerIndexProvider:(/*^block*/id)arg4 graphQLConnectionController:(id)arg5 changesetMapper:(id)arg6 ;
-(void)setFetchStatusListener:(id)arg1 ;
-(void)didChangeComponentContext:(id)arg1 ;
-(void)reloadAllData;
-(void)performTailLoad;
-(void)setListener:(id)arg1 ;
@end

