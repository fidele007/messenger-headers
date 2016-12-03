/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudNavigationListener.h>
#import <Messenger/MNMediaViewerStateListener.h>

@class MNMediaViewerHudCoordinator, MNMediaViewerHudContainerView, MNMediaViewerHudContainerInteractionListenerAnnouncer, MNMediaViewerState, NSString;

@interface MNMediaViewerHudContainerController : NSObject <MNMontageComposerHudNavigationListener, MNMediaViewerStateListener> {

	MNMediaViewerHudCoordinator* _hudCoordinator;
	BOOL _enableDismissButton;
	MNMediaViewerHudContainerView* _mediaViewerHudContainerView;
	MNMediaViewerHudContainerInteractionListenerAnnouncer* _announcer;
	MNMediaViewerState* _mediaViewerState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapActionButton:(id)arg1 ;
-(void)_didTapDismissButton:(id)arg1 ;
-(void)_updateHudViewIfNeeded;
-(void)montageComposerHudDidTapClose;
-(void)montageComposerHudDidTapBack;
-(void)montageComposerHudDidTapNextWithBadgeCount:(long long)arg1 ;
-(void)montageComposerHudDidTapCamera;
-(void)montageComposerHudDidTapCanvas;
-(void)montageComposerHudDidTapMedia;
-(void)didSetMediaViewerState:(id)arg1 ;
-(id)initWithHudCoordinator:(id)arg1 enableDismissButton:(BOOL)arg2 initialMediaViewerState:(id)arg3 ;
-(id)hudView;
-(void)addInteractionListener:(id)arg1 ;
-(void)removeInteractionListener:(id)arg1 ;
@end

