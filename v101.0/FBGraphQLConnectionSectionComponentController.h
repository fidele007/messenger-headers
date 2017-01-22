/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponentController.h>
#import <Messenger/FBGraphQLConnectionChangesetSequenceServiceListener.h>
#import <Messenger/FBGraphQLConnectionFetchStatusListener.h>

@protocol FBGraphQLConnectionChangesetSequenceServiceBase, NSObject;
@class FBTimer, NSString, FBGraphQLConnectionFetchStatusListenerAnnouncer;

@interface FBGraphQLConnectionSectionComponentController : FBSectionComponentController <FBGraphQLConnectionChangesetSequenceServiceListener, FBGraphQLConnectionFetchStatusListener> {

	id<FBGraphQLConnectionChangesetSequenceServiceBase> _connectionService;
	FBTimer* _timer;
	NSString* _asyncActionUUID;
	id<NSObject> _previousComponentContext;
	BOOL _hasAppeared;
	BOOL _isCurrentlyDisplayed;
	FBGraphQLConnectionFetchStatusListenerAnnouncer* _announcer;
	BOOL _didGetResponseFromInitialRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewStateManager;
-(void)didRequestPrefetchingData;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didRequestReload;
-(void)didPullToRefresh;
-(void)componentDidAppear;
-(void)componentDidDisappear;
-(void)changedSequence:(id)arg1 fetchStatus:(id)arg2 ;
-(void)didStartLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)didSuccessfullyFinishLoadingData:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didFailInLoadingDataWithError:(id)arg1 fetchType:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didEnterForeground:(id)arg1 ;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)_updateComponentWithInitialFetchStatusAndHidesAllSpinners:(BOOL)arg1 ;
-(void)_updateComponentWithInitialFetchStatus;
-(void)_updateComponentWithSequence:(id)arg1 fetchStatus:(id)arg2 hidesAllSpinners:(BOOL)arg3 ;
-(void)_logSuccessfullyFinishLoadingWithFetchType:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)_updateLoadedSuccess:(BOOL)arg1 fetchType:(unsigned long long)arg2 ;
-(void)_logFailInLoadingWithFetchType:(unsigned long long)arg1 error:(id)arg2 userInfo:(id)arg3 ;
-(void)didCancelLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)configuration;
-(id)logger;
-(void)didLoad;
@end
