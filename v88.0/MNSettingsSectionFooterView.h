/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol MNSettingsSectionFooterViewDelegate;
@class FBRichTextView;

@interface MNSettingsSectionFooterView : UITableViewHeaderFooterView {

	FBRichTextView* _textView;
	id<MNSettingsSectionFooterViewDelegate> _delegate;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) FBRichTextView * textView;                                          //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                            //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<MNSettingsSectionFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_attributedFooterAction:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 linkRanges:(id)arg4 ;
-(void)setDelegate:(id<MNSettingsSectionFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNSettingsSectionFooterViewDelegate>)delegate;
-(id)text;
-(UIEdgeInsets)edgeInsets;
-(FBRichTextView *)textView;
@end
