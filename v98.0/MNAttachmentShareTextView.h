/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

