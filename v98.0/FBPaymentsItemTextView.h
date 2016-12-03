/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, FBPaymentsItemViewModel;

@interface FBPaymentsItemTextView : UIView {

	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBRichTextView* _subsubtitleView;
	FBRichTextView* _miscInfoView;
	FBRichTextView* _itemPriceView;
	FBPaymentsItemViewModel* _viewModel;

}

@property (nonatomic,copy) FBPaymentsItemViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(void)_updateWithViewModel;
-(void)_configureWithSingleItemTitle:(id)arg1 subtitle:(id)arg2 subsubtitle:(id)arg3 merchantName:(id)arg4 itemPrice:(id)arg5 ;
-(void)_configureWithMultiItemTitles:(id)arg1 merchantName:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBPaymentsItemViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsItemViewModel *)arg1 ;
@end

