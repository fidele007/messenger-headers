/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, MNAttachmentShareTextViewModel;

@interface MNAttachmentShareTextView : UIView {

	FBRichTextView* _titleLabel;
	FBRichTextView* _bodyLabel;
	FBRichTextView* _attributionLabel;
	MNAttachmentShareTextViewModel* _viewModel;

}

@property (nonatomic,copy) MNAttachmentShareTextViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNAttachmentShareTextViewModel *)viewModel;
-(void)setViewModel:(MNAttachmentShareTextViewModel *)arg1 ;
-(void)_updateLabels;
@end

