/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPassThroughView.h>
#import <Messenger/MNMontageComposerHudNavigationListener.h>
#import <Messenger/MNMontageComposerHudEditListener.h>
#import <Messenger/MNMontageComposerHudPreviewListener.h>
#import <Messenger/MNMediaViewerDayOverlayTooltipAncherViewProvider.h>
#import <Messenger/MNMediaViewerDayOverlayTooltipHostViewProvider.h>

@class UIView, MNMontageComposerHudView, MNMediaViewerDayOverlayInteractionListenerAnnouncer, NSString;

@interface MNMediaViewerDayOverlayView : MNPassThroughView <MNMontageComposerHudNavigationListener, MNMontageComposerHudEditListener, MNMontageComposerHudPreviewListener, MNMediaViewerDayOverlayTooltipAncherViewProvider, MNMediaViewerDayOverlayTooltipHostViewProvider> {

	UIView* _composerView;
	MNMontageComposerHudView* _hudViewOnStaticImage;
	MNMontageComposerHudView* _hudViewOnAnimatedImage;
	MNMediaViewerDayOverlayInteractionListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)montageComposerHudDidTapClose;
-(void)montageComposerHudDidTapBack;
-(void)montageComposerHudDidTapNextWithBadgeCount:(long long)arg1 ;
-(void)montageComposerHudDidTapCamera;
-(void)montageComposerHudDidTapCanvas;
-(void)montageComposerHudDidTapMedia;
-(void)montageComposerHudDidTapFeaturedSectionButton;
-(void)montageComposerHudDidTapXRayButton;
-(void)montageComposerHudDidTapCropping;
-(void)montageComposerHudDidTapArt;
-(void)montageComposerHudDidTapText;
-(void)montageComposerHudDidTapDrawing;
-(void)montageComposerHudDidTapTrash;
-(void)montageComposerHudDidTapDone;
-(void)montageComposerHudDidChangeTextColorTo:(id)arg1 withValue:(double)arg2 ;
-(void)montageComposerHudDidTapUndo;
-(void)montageComposerHudDidChangeDrawColorTo:(id)arg1 ;
-(void)montageComposerHudDidChangeDrawBrushSize:(double)arg1 ;
-(void)montageComposerHudDidTapBackgroundColor;
-(void)montageComposerHudDidTapSave;
-(void)montageComposerHudDidTapMute;
-(void)montageComposerHudDidTapHDButton;
-(void)montageComposerHudDidTapMoreActionButton:(id)arg1 ;
-(void)montageComposerHudDidTapShare;
-(id)anchorViewForTooltipWithType:(long long)arg1 ;
-(id)hostViewForTooltip;
-(id)initWithHudViewOnStaticImage:(id)arg1 hudViewOnAnimatedImage:(id)arg2 composerView:(id)arg3 ;
-(void)displayHudViewWithType:(long long)arg1 ;
-(void)addInteractionListener:(id)arg1 ;
-(void)removeInteractionListener:(id)arg1 ;
-(void)montageComposerHudDidTapHDOption;
-(void)layoutSubviews;
@end

