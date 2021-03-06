/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNThreadViewModel, FBMMessageKey, MNFoldableAdminViewStateListenerAnnouncer, NSDictionary, NSString;

@interface MNFoldableAdminMessageCoordinator : NSObject <FBViewerContextClassProvidable> {

	MNThreadViewModel* _threadViewModel;
	FBMMessageKey* _newestMediaMessageKey;
	MNFoldableAdminViewStateListenerAnnouncer* _announcer;
	NSDictionary* _gameIdToUnfoldedMessageMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)updateViewStateMapWithThreadViewModel:(id)arg1 sourceUpdater:(id)arg2 updateType:(long long)arg3 ;
-(void)updateViewStateMapWithViewState:(long long)arg1 forMessageKey:(id)arg2 sourceUpdater:(id)arg3 updateType:(long long)arg4 ;
-(id)_mutableViewStateMapFromSourceUpdater:(id)arg1 ;
-(void)_updateViewStateMap:(id)arg1 viewState:(long long)arg2 messageKey:(id)arg3 ;
-(void)_updateGamesAdminMessageStateWithSourceUpdater:(id)arg1 updateType:(long long)arg2 gameIdMessageKeyMap:(id)arg3 ;
-(void)_updateMediaAdminMessageStateWithNewestMessage:(id)arg1 sourceUpdater:(id)arg2 updateType:(long long)arg3 ;
-(void)_mutateViewStateMapWithPreviousNewestMessageKey:(id)arg1 newestMessageKey:(id)arg2 sourceUpdater:(id)arg3 updateType:(long long)arg4 ;
-(id)init;
-(void)addListener:(id)arg1 ;
@end

