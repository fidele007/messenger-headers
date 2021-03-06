/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBQuicksilverPlayerInfoLabelViewModel;

@interface FBQuicksilverPlayerInfoLabelView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyLabel;
	FBQuicksilverPlayerInfoLabelViewModel* _viewModel;

}
-(void)_layoutLabel:(id)arg1 withLabelAttributes:(id)arg2 startingPoint:(CGPoint)arg3 ;
-(CGSize)_labelSizeForLabelAttributes:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)_setLabelAttributes:(id)arg1 forLabel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

