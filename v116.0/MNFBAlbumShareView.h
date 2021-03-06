/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNFBAlbumShareViewDelegate;
@class MNFBAlbumShareImagesView, MNAttachmentShareTextView, MNFBAlbumShareViewModel, NSString;

@interface MNFBAlbumShareView : UIControl <MNAttachmentView> {

	MNFBAlbumShareImagesView* _imagesView;
	MNAttachmentShareTextView* _shareTextView;
	MNFBAlbumShareViewModel* _viewModel;
	id<MNFBAlbumShareViewDelegate> _delegate;

}

@property (nonatomic,copy) MNFBAlbumShareViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNFBAlbumShareViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_notifyDidSelectAlbum;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNFBAlbumShareViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFBAlbumShareViewDelegate>)delegate;
-(void)setImages:(id)arg1 ;
-(MNFBAlbumShareViewModel *)viewModel;
-(void)setViewModel:(MNFBAlbumShareViewModel *)arg1 ;
@end

