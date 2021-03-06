/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageComposerEditablePreviewCropControlViewDelegate;
@class UIButton;

@interface MNMontageComposerEditablePreviewCropControlView : UIView {

	UIButton* _aspectRatioButton;
	id<MNMontageComposerEditablePreviewCropControlViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageComposerEditablePreviewCropControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAspectRatioLocked,nonatomic) BOOL aspectRatioLocked; 
-(void)_didTapAspectRatioButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageComposerEditablePreviewCropControlViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMontageComposerEditablePreviewCropControlViewDelegate>)delegate;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(BOOL)isAspectRatioLocked;
@end

