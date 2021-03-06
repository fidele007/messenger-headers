/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@class FBRichTextView, NSMutableArray, NSString;

@interface FBPaymentsTableFooterView : UIView <FBPaymentsEdgeInsetsConfigurable> {

	FBRichTextView* _titleTextView;
	NSMutableArray* _buttons;
	NSMutableArray* _dividers;
	/*^block*/id _buttonActionBlock;
	NSString* _titleText;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
+(CGSize)sizeWithFooterText:(id)arg1 buttonTitles:(id)arg2 constrainedToSize:(CGSize)arg3 withEdgeInsets:(UIEdgeInsets)arg4 ;
-(void)_didTapButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 buttonTitles:(id)arg3 buttonActionBlock:(/*^block*/id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(NSString *)titleText;
@end

