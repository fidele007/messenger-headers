/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageCollectionViewCell.h>
#import <Messenger/FBMStickerViewDelegate.h>
#import <Messenger/MNStickerAttributionViewDelegate.h>
#import <Messenger/MNMessageProgressUpdaterDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNStickerPreviewing.h>

@class FBUserSession, FBMStickerView, MNAttributionContainerView, MNMessageProgressUpdater, UIImageView, MNTombstoneBubbleView, MNFlowerCornersView, NSString;

@interface MNStickerMessageCollectionViewCell : MNMessageCollectionViewCell <FBMStickerViewDelegate, MNStickerAttributionViewDelegate, MNMessageProgressUpdaterDelegate, FBClassProvidable, MNStickerPreviewing> {

	FBUserSession* _session;
	FBMStickerView* _stickerView;
	MNAttributionContainerView* _attributionContainerView;
	MNMessageProgressUpdater* _messageProgressUpdater;
	UIImageView* _tombstoneMaskView;
	MNTombstoneBubbleView* _blurryTombstoneMaskView;
	MNFlowerCornersView* _flowerCornersView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)previewableStickerAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)applyLayoutSpec:(id)arg1 ;
-(void)setMessageRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateFlowerCornersView;
-(void)didDisappear;
-(void)doMessageContentInit;
-(void)_tearDownAttributionView;
-(void)_tearDownTombstoneMaskView;
-(void)_attributionViewMayAppear;
-(void)_updateTombstoneMaskView;
-(void)_updateSecureThreadTombstoneMaskView;
-(void)_setUpAttributionView;
-(void)_setUpFlowerCornersView;
-(void)_tearDownFlowerCornersView;
-(void)_setUpTombstoneMaskView;
-(void)messageProgressUpdaterDidFinish:(id)arg1 ;
-(void)addContextMenuItemsTo:(id)arg1 ;
-(BOOL)canSelect;
-(void)didSelect;
-(void)updateParentCollectionViewScrolling;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)_tearDownStickerView;
-(void)_tearDownProgressUpdater;
-(void)_tearDownSecureThreadTombstoneView;
-(void)_updateStickerAnimated:(BOOL)arg1 ;
-(void)_updateProgressUpdater;
-(void)openStickerPackage:(id)arg1 ;
-(void)_setUpSecureThreadTombstoneView;
-(void)_setUpProgressUpdater;
-(void)stickerAttributionViewDidTapOpenButton:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)willAppear;
-(void)_updateAttribution;
-(id)initWithSession:(id)arg1 ;
@end
