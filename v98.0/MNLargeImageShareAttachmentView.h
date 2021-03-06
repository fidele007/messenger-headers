/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNAttachmentView.h>

@protocol FBIntentHandler, MNLargeImageShareAttachmentViewDelegate;
@class FBImageDownloader, FBNetworkImageView, MNAttachmentURLButton, MNLargeImageShareAttachmentViewModel, NSString;

@interface MNLargeImageShareAttachmentView : UIControl <MNPhotoPreviewing, MNAttachmentView> {

	FBImageDownloader* _imageDownloader;
	id<FBIntentHandler> _intentHandler;
	FBNetworkImageView* _shareImageView;
	MNAttachmentURLButton* _primaryActionButton;
	MNAttachmentURLButton* _secondaryActionButton;
	MNAttachmentURLButton* _tertiaryActionButton;
	MNLargeImageShareAttachmentViewModel* _viewModel;
	id<MNLargeImageShareAttachmentViewDelegate> _delegate;

}

@property (nonatomic,copy) MNLargeImageShareAttachmentViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNLargeImageShareAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_notifyDidSelectView;
-(void)_updateShareImage;
-(id)initWithImageDownloader:(id)arg1 intentHandler:(id)arg2 ;
-(void)setDelegate:(id<MNLargeImageShareAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNLargeImageShareAttachmentViewDelegate>)delegate;
-(MNLargeImageShareAttachmentViewModel *)viewModel;
-(void)setViewModel:(MNLargeImageShareAttachmentViewModel *)arg1 ;
@end

