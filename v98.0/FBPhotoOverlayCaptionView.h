/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPhotoOverlayCaptionViewDelegate;
@class UIScrollView, FBRichTextView, UITapGestureRecognizer, NSAttributedString;

@interface FBPhotoOverlayCaptionView : UIView {

	UIScrollView* _scrollableContentView;
	FBRichTextView* _headerTextView;
	FBRichTextView* _bodyTextView;
	FBRichTextView* _footerTextView;
	UITapGestureRecognizer* _tapRecognizerForHeader;
	UITapGestureRecognizer* _tapRecognizerForBackground;
	long long _renderStyle;
	BOOL _appendSeeMoreWhenTruncatedBodyText;
	BOOL _drawsShadows;
	BOOL _alwaysShowHeader;
	id<FBPhotoOverlayCaptionViewDelegate> _captionViewDelegate;
	long long _textExpansion;
	NSAttributedString* _seeMoreAttributedString;
	NSAttributedString* _seeMoreWithEllipsisAttributedString;
	NSAttributedString* _bodyTextAttributedString;
	CGRect _tappableArea;

}

@property (nonatomic,copy) NSAttributedString * seeMoreAttributedString;                                    //@synthesize seeMoreAttributedString=_seeMoreAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * seeMoreWithEllipsisAttributedString;                        //@synthesize seeMoreWithEllipsisAttributedString=_seeMoreWithEllipsisAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * bodyTextAttributedString;                                   //@synthesize bodyTextAttributedString=_bodyTextAttributedString - In the implementation block
@property (assign,nonatomic) CGRect tappableArea;                                                           //@synthesize tappableArea=_tappableArea - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoOverlayCaptionViewDelegate> captionViewDelegate;              //@synthesize captionViewDelegate=_captionViewDelegate - In the implementation block
@property (nonatomic,readonly) long long textExpansion;                                                     //@synthesize textExpansion=_textExpansion - In the implementation block
@property (assign,nonatomic) BOOL appendSeeMoreWhenTruncatedBodyText;                                       //@synthesize appendSeeMoreWhenTruncatedBodyText=_appendSeeMoreWhenTruncatedBodyText - In the implementation block
@property (assign,nonatomic) BOOL drawsShadows;                                                             //@synthesize drawsShadows=_drawsShadows - In the implementation block
@property (nonatomic,readonly) BOOL hasCaptionText; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (assign,nonatomic) BOOL alwaysShowHeader;                                                         //@synthesize alwaysShowHeader=_alwaysShowHeader - In the implementation block
+(void)_selectTruncationWithInputAttributedString:(id)arg1 betweenTruncationAttributedString:(id)arg2 andTruncationAttributedStringPreferred:(id)arg3 constrainedToSize:(CGSize)arg4 defaultFont:(id)arg5 maximumNumberOfLines:(unsigned long long)arg6 outputAttributedString:(id*)arg7 withSize:(CGSize*)arg8 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(BOOL)hasCaptionText;
-(void)setCaptionViewDelegate:(id<FBPhotoOverlayCaptionViewDelegate>)arg1 ;
-(void)setAppendSeeMoreWhenTruncatedBodyText:(BOOL)arg1 ;
-(long long)textExpansion;
-(void)setAlwaysShowHeader:(BOOL)arg1 ;
-(BOOL)alwaysShowHeader;
-(void)setDrawsShadows:(BOOL)arg1 ;
-(void)setHeaderText:(id)arg1 bodyText:(id)arg2 footerText:(id)arg3 privacyIconText:(id)arg4 accessibilityPrivacyLabel:(id)arg5 renderStyle:(long long)arg6 ;
-(void)animateTextExpansionWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createAndConfigRichTextViewWithSession:(id)arg1 ;
-(void)_handleHeaderTextViewTap:(id)arg1 ;
-(void)_handleBodyTextTap:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleBackgroundTap:(id)arg1 ;
-(double)_contentHeightForConstrainedSize:(CGSize)arg1 textExpansion:(long long)arg2 ;
-(CGSize)_sizeForLayoutBodyContentWithSize:(CGSize)arg1 renderStyle:(long long)arg2 ;
-(void)setBodyTextAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)seeMoreWithEllipsisAttributedString;
-(CGSize)_bodyContentSize:(CGSize)arg1 maximumNumberOfLines:(unsigned long long)arg2 renderStyle:(long long)arg3 truncatedMode:(long long)arg4 ;
-(id)seeMoreAttributedStringWithRenderStyle:(long long)arg1 ;
-(BOOL)appendSeeMoreWhenTruncatedBodyText;
-(CGSize)_truncatedBodyContentSize:(CGSize)arg1 ;
-(CGSize)_truncatedHeaderFooterBodyContentSize:(CGSize)arg1 ;
-(CGSize)_fullContentSize:(CGSize)arg1 ;
-(NSAttributedString *)seeMoreAttributedString;
-(id<FBPhotoOverlayCaptionViewDelegate>)captionViewDelegate;
-(BOOL)drawsShadows;
-(void)setSeeMoreAttributedString:(NSAttributedString *)arg1 ;
-(void)setSeeMoreWithEllipsisAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)bodyTextAttributedString;
-(CGRect)contentFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTappableArea:(CGRect)arg1 ;
-(CGRect)tappableArea;
@end

