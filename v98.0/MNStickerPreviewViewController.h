/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPreviewViewController.h>

@protocol MNStickerPreviewViewControllerDelegate;
@class MNStickerPreviewingContext, FBMStickerPreviewViewController, MNStickerPackViewer, NSArray, FBMStickerView, NSString;

@interface MNStickerPreviewViewController : UIViewController <MNPreviewViewController> {

	MNStickerPreviewingContext* _stickerPreviewingContext;
	double _previewWidth;
	FBMStickerPreviewViewController* _stickerPreviewViewController;
	MNStickerPackViewer* _stickerPackViewer;
	NSArray* _previewActionItems;
	FBMStickerView* _stickerPreviewView;
	id<MNStickerPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNStickerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initPreviewActionItems;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(id)initWithStickerPreviewingContext:(id)arg1 stickerResourceManager:(id)arg2 stickerManager:(id)arg3 stickerStorePresenter:(id)arg4 previewWidth:(double)arg5 ;
-(void)_openStickerPack;
-(void)_forwardSticker;
-(void)setDelegate:(id<MNStickerPreviewViewControllerDelegate>)arg1 ;
-(id<MNStickerPreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end

