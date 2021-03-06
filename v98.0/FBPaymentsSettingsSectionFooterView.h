/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, FBPaymentsSettingsSectionFooterViewModel;

@interface FBPaymentsSettingsSectionFooterView : UIView {

	FBRichTextView* _labelView;
	FBPaymentsSettingsSectionFooterViewModel* _viewModel;

}

@property (nonatomic,copy) FBPaymentsSettingsSectionFooterViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)heightWithViewModel:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBPaymentsSettingsSectionFooterViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsSettingsSectionFooterViewModel *)arg1 ;
@end

