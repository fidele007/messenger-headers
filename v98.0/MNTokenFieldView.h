/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNTokenViewDelegate.h>
#import <Messenger/MNTokenFieldDelegate.h>

@protocol MNTokenFieldViewDelegate;
@class NSString, UIColor, NSObject, UILabel, UIView, UIScrollView, NSMutableArray, MNTokenField, UITapGestureRecognizer;

@interface MNTokenFieldView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, UITextFieldDelegate, MNTokenViewDelegate, MNTokenFieldDelegate> {

	NSString* _text;
	NSString* _placeholder;
	UIColor* _placeholderColor;
	double _minHeight;
	double _maxHeight;
	NSObject*<MNTokenFieldViewDelegate> _delegate;
	UILabel* _textLabel;
	UIView* _backgroundView;
	UIScrollView* _scrollView;
	NSMutableArray* _tokenViews;
	MNTokenField* _textField;
	UIView* _line;
	double _contentHeight;
	double _leftMargin;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokenViews;                                      //@synthesize tokenViews=_tokenViews - In the implementation block
@property (nonatomic,retain) MNTokenField * textField;                                         //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * line;                                                    //@synthesize line=_line - In the implementation block
@property (nonatomic,copy) NSString * text;                                                    //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double contentHeight;                                             //@synthesize contentHeight=_contentHeight - In the implementation block
@property (assign,nonatomic) double leftMargin;                                                //@synthesize leftMargin=_leftMargin - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                           //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                             //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) UIColor * placeholderColor;                                         //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double minHeight;                                                 //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                                                 //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MNTokenFieldViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                            //@synthesize textLabel=_textLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addTokenForObject:(id)arg1 ;
-(id)getTokenObjects;
-(void)removeTokenForObject:(id)arg1 ;
-(void)willBecomeFirstResponder:(id)arg1 ;
-(void)willResignFirstResponder:(id)arg1 ;
-(void)didTouchTokenField:(id)arg1 ;
-(void)setTokenViews:(NSMutableArray *)arg1 ;
-(double)_tokenHorizontalPadding;
-(double)_tokenVerticalPadding;
-(void)_layoutTokens;
-(void)_adjustFrame;
-(void)_unselectAllTokens;
-(void)_setTextFieldEmpty;
-(void)updateDivider:(BOOL)arg1 ;
-(double)_frameHeight;
-(void)_unselectAllTokensBut:(id)arg1 ;
-(void)_setTextFieldHidden;
-(void)_removeSelectedTokens;
-(void)didSelectTokenView:(id)arg1 ;
-(NSMutableArray *)tokenViews;
-(void)setDelegate:(NSObject*<MNTokenFieldViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSObject*<MNTokenFieldViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UILabel *)textLabel;
-(UIView *)backgroundView;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(MNTokenField *)textField;
-(UIView *)line;
-(void)setLine:(UIView *)arg1 ;
-(NSString *)placeholder;
-(CGRect)_scrollViewFrame;
-(void)handleTap:(id)arg1 ;
-(double)minHeight;
-(void)setLabelText:(id)arg1 ;
-(void)setMinHeight:(double)arg1 ;
-(void)setMaxHeight:(double)arg1 ;
-(void)setContentHeight:(double)arg1 ;
-(double)contentHeight;
-(BOOL)isSearching;
-(void)updatePlaceholder;
-(void)textFieldDidChange:(id)arg1 ;
-(double)maxHeight;
-(UITapGestureRecognizer *)tapRecognizer;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)removeAllTokens;
-(void)setTextField:(MNTokenField *)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(double)leftMargin;
-(void)setLeftMargin:(double)arg1 ;
@end

