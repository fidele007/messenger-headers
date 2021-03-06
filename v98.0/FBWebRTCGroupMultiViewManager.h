/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCEngineListener.h>
#import <Messenger/FBWebRTCGroupMultiViewModelDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBWebRTCVideoViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol FBWebRTCGroupMultiViewManagerDelegate;
@class FBWebRTCEngine, FBWebRTCVideoView, FBWebRTCGroupMultiView, FBWebRTCGroupMultiViewModel, MNCDNProfileImageDownloader, NSString;

@interface FBWebRTCGroupMultiViewManager : NSObject <FBWebRTCEngineListener, FBWebRTCGroupMultiViewModelDelegate, UICollectionViewDelegate, FBWebRTCVideoViewDelegate, UICollectionViewDataSource> {

	FBWebRTCEngine* _engine;
	FBWebRTCVideoView* _selfView;
	FBWebRTCGroupMultiView* _groupMultiView;
	FBWebRTCGroupMultiViewModel* _model;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	BOOL _rosterVisible;
	NSString* _pinnedUserId;
	BOOL _forceActiveSpeakerLayout;
	id<FBWebRTCGroupMultiViewManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCGroupMultiViewManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(unsigned long long)arg2 subreason:(id)arg3 remoteEnded:(BOOL)arg4 callSummary:(id)arg5 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)videoView:(id)arg1 didChangeVideoOrientation:(long long)arg2 ;
-(void)groupMultiViewModelWillUpdate:(id)arg1 withTotalParticipantsCount:(long long)arg2 updates:(id)arg3 userIdsToSubscribe:(id)arg4 ;
-(void)_switchToAppropriateLayoutForNumberOfParticipants:(long long)arg1 selfViewCount:(long long)arg2 rosterVisible:(BOOL)arg3 ;
-(void)_updateCallActionControlsBottomInsetForLayout:(unsigned long long)arg1 ;
-(void)_refreshPeerRenderingCells;
-(void)_refreshDominantSpeakerUIIfNeeded;
-(double)_getBestOffsetForCollectionView:(id)arg1 layout:(unsigned long long)arg2 ;
-(void)_notifyUpdateToLayout:(unsigned long long)arg1 ;
-(void)_notifyUpdateNumberOfParticipants:(long long)arg1 selfViewCount:(long long)arg2 ;
-(void)_updateCollectionViewWithUpdates:(id)arg1 userIdsToSubscribe:(id)arg2 fromModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configurePeerCell:(id)arg1 forParticipant:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_fetchProfileImageForUserId:(id)arg1 forCell:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithGroupMultiView:(id)arg1 selfView:(id)arg2 engine:(id)arg3 profileImageDownloader:(id)arg4 ;
-(void)updateLayoutForRosterVisible:(BOOL)arg1 ;
-(void)toggleLayout;
-(void)setDelegate:(id<FBWebRTCGroupMultiViewManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCGroupMultiViewManagerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

