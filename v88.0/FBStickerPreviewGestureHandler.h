/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMStickerPreviewViewControllerDelegate.h>

@protocol FBStickerResourceManager;
@class FBPopoverController, UILongPressGestureRecognizer, FBMStickerPreviewViewController, FBMCollectionViewStickerCell, NSString;

@interface FBStickerPreviewGestureHandler : NSObject <FBMStickerPreviewViewControllerDelegate> {

	FBPopoverController* _stickerPreviewPopoverController;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	FBMStickerPreviewViewController* _previewViewController;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBMCollectionViewStickerCell* _currentStickerCellPreviewed;

}

@property (nonatomic,retain) FBMCollectionViewStickerCell * currentStickerCellPreviewed;              //@synthesize currentStickerCellPreviewed=_currentStickerCellPreviewed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerResourceManager:(id)arg1 ;
-(void)attachHandlerToCollectionView:(id)arg1 ;
-(void)detachHandlerFromCollectionView:(id)arg1 ;
-(void)stickerPreviewViewControllerWillLayoutSubviews:(id)arg1 ;
-(void)setCurrentStickerCellPreviewed:(FBMCollectionViewStickerCell *)arg1 ;
-(void)_updatePopoverPositionWithCell:(id)arg1 ;
-(id)stickerPreviewViewController;
-(FBMCollectionViewStickerCell *)currentStickerCellPreviewed;
-(void)dealloc;
-(void)_handleLongPressGesture:(id)arg1 ;
@end
