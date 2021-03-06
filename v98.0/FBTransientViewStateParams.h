/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView, NSString, UIImage, UIColor;

@interface FBTransientViewStateParams : NSObject {

	BOOL _spinnerAtTopForLoading;
	BOOL _showsTextShadow;
	UIView* _view;
	unsigned long long _viewState;
	unsigned long long _showOption;
	NSString* _titleForEmpty;
	NSString* _titleForError;
	NSString* _subtitleForError;
	NSString* _titleForLoading;
	NSString* _buttonTextForEmpty;
	NSString* _buttonTextForError;
	UIImage* _imageForEmptyView;
	UIColor* _textColor;
	UIColor* _shadowColor;
	double _fontSize;
	UIColor* _backgroundColor;
	double _textMarginX;
	double _textOffsetY;
	CGSize _shadowOffset;
	CGRect _viewStateFrame;

}

@property (nonatomic,retain,readonly) UIView * view;                            //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned long long viewState;                    //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) unsigned long long showOption;                   //@synthesize showOption=_showOption - In the implementation block
@property (nonatomic,readonly) CGRect viewStateFrame;                           //@synthesize viewStateFrame=_viewStateFrame - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForEmpty;                   //@synthesize titleForEmpty=_titleForEmpty - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForError;                   //@synthesize titleForError=_titleForError - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleForError;                //@synthesize subtitleForError=_subtitleForError - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForLoading;                 //@synthesize titleForLoading=_titleForLoading - In the implementation block
@property (assign,nonatomic) BOOL spinnerAtTopForLoading;                       //@synthesize spinnerAtTopForLoading=_spinnerAtTopForLoading - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTextForEmpty;              //@synthesize buttonTextForEmpty=_buttonTextForEmpty - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTextForError;              //@synthesize buttonTextForError=_buttonTextForError - In the implementation block
@property (nonatomic,retain,readonly) UIImage * imageForEmptyView;              //@synthesize imageForEmptyView=_imageForEmptyView - In the implementation block
@property (nonatomic,retain,readonly) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) BOOL showsTextShadow;                            //@synthesize showsTextShadow=_showsTextShadow - In the implementation block
@property (nonatomic,retain,readonly) UIColor * shadowColor;                    //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) double fontSize;                                 //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) CGSize shadowOffset;                             //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain,readonly) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double textMarginX;                              //@synthesize textMarginX=_textMarginX - In the implementation block
@property (nonatomic,readonly) double textOffsetY;                              //@synthesize textOffsetY=_textOffsetY - In the implementation block
-(NSString *)titleForEmpty;
-(UIImage *)imageForEmptyView;
-(NSString *)buttonTextForEmpty;
-(unsigned long long)showOption;
-(CGRect)viewStateFrame;
-(NSString *)titleForError;
-(NSString *)subtitleForError;
-(NSString *)titleForLoading;
-(NSString *)buttonTextForError;
-(double)textMarginX;
-(double)textOffsetY;
-(BOOL)showsTextShadow;
-(void)setSpinnerAtTopForLoading:(BOOL)arg1 ;
-(BOOL)spinnerAtTopForLoading;
-(id)initWithView:(id)arg1 showOption:(unsigned long long)arg2 imageForEmptyView:(id)arg3 viewState:(unsigned long long)arg4 titleForEmpty:(id)arg5 titleForError:(id)arg6 titleForLoading:(id)arg7 spinnerAtTopForLoading:(BOOL)arg8 buttonTextForEmpty:(id)arg9 buttonTextForError:(id)arg10 textColor:(id)arg11 showsTextShadow:(BOOL)arg12 shadowOffset:(CGSize)arg13 backgroundColor:(id)arg14 shadowColor:(id)arg15 fontSize:(double)arg16 textMarginX:(double)arg17 textOffsetY:(double)arg18 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIView *)view;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIColor *)textColor;
-(double)fontSize;
-(unsigned long long)viewState;
@end

