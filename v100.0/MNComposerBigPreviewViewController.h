/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMStickerViewDelegate.h>

@protocol FBStickerResourceManager;
@class FBMStickerView, MNImage, MNPhotoView, MNPhotoViewImageDownloadController, MNTextAndAttachmentForwardContent, NSString;

@interface MNComposerBigPreviewViewController : UIViewController <FBMStickerViewDelegate> {

	FBMStickerView* _stickerPreviewView;
	id<FBStickerResourceManager> _stickerResourceManager;
	MNImage* _placeholderImage;
	MNPhotoView* _photoPreviewView;
	MNPhotoViewImageDownloadController* _photoDownloadController;
	MNTextAndAttachmentForwardContent* _content;
	BOOL _viewVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)configureWithContent:(id)arg1 placeholderImage:(id)arg2 ;
-(id)initWithStickerResourceManager:(id)arg1 photoViewImageDownloadController:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateContent;
@end

