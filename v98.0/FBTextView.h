/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UILabel, UIColor;

@interface FBTextView : UITextView {

	NSString* _textInputContextIdentifier;
	BOOL _hasComputedSingleLinePlaceholderHeight;
	double _singleLinePlaceholderHeight;
	BOOL _placeholderShouldWrap;
	BOOL _placeholderShouldHideWhenEditing;
	BOOL _shouldConsiderPlaceholderWhenComputeSizeThatFits;
	UILabel* _placeholderLabel;

}

@property (nonatomic,copy,readonly) UILabel * placeholderLabel;                                  //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * textInputContextIdentifier; 
@property (assign,nonatomic) BOOL placeholderShouldWrap;                                         //@synthesize placeholderShouldWrap=_placeholderShouldWrap - In the implementation block
@property (assign,nonatomic) BOOL placeholderShouldHideWhenEditing;                              //@synthesize placeholderShouldHideWhenEditing=_placeholderShouldHideWhenEditing - In the implementation block
@property (assign,nonatomic) BOOL shouldConsiderPlaceholderWhenComputeSizeThatFits;              //@synthesize shouldConsiderPlaceholderWhenComputeSizeThatFits=_shouldConsiderPlaceholderWhenComputeSizeThatFits - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor; 
@property (nonatomic,readonly) BOOL isOverflown; 
+(id)defaultPlaceholderTextColor;
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(void)setTextInputContextIdentifier:(NSString *)arg1 ;
-(void)setPlaceholderShouldWrap:(BOOL)arg1 ;
-(void)setShouldConsiderPlaceholderWhenComputeSizeThatFits:(BOOL)arg1 ;
-(void)setPlaceholderShouldHideWhenEditing:(BOOL)arg1 ;
-(void)_updateHiddenStateForPlaceholderText;
-(void)sizeFontToFitWithMinimumSize:(double)arg1 ;
-(BOOL)isOverflown;
-(void)sizeFontToFit;
-(BOOL)placeholderShouldWrap;
-(BOOL)placeholderShouldHideWhenEditing;
-(BOOL)shouldConsiderPlaceholderWhenComputeSizeThatFits;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)accessibilityLabel;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)textInputContextIdentifier;
-(NSString *)placeholder;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(void)_textChanged:(id)arg1 ;
@end

