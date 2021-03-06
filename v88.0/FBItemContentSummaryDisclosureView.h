/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIImageView;

@interface FBItemContentSummaryDisclosureView : UIView {

	FBRichTextView* _disclosureTextView;
	UIImageView* _disclosureImageView;
	UIEdgeInsets _labelInsets;
	BOOL _hasDisclosureIcon;
	unsigned long long _disclosureIconViewPosition;
	unsigned long long _glyphName;
	unsigned long long _glyphSize;
	unsigned long long _glyphShading;

}

@property (nonatomic,readonly) FBRichTextView * disclosureTextView; 
@property (assign,nonatomic) unsigned long long disclosureIconViewPosition;              //@synthesize disclosureIconViewPosition=_disclosureIconViewPosition - In the implementation block
@property (assign,nonatomic) BOOL hasDisclosureIcon;                                     //@synthesize hasDisclosureIcon=_hasDisclosureIcon - In the implementation block
@property (assign,nonatomic) unsigned long long glyphName;                               //@synthesize glyphName=_glyphName - In the implementation block
@property (assign,nonatomic) unsigned long long glyphSize;                               //@synthesize glyphSize=_glyphSize - In the implementation block
@property (assign,nonatomic) unsigned long long glyphShading;                            //@synthesize glyphShading=_glyphShading - In the implementation block
+(UIEdgeInsets)disclosureLabelInsets;
+(CGSize)viewSizeConstrainedToSize:(CGSize)arg1 disclosureTextView:(id)arg2 hasDisclosureIcon:(BOOL)arg3 contentSizes:(id*)arg4 glyphSize:(unsigned long long)arg5 ;
+(unsigned long long)_highlightedShadingForShading:(unsigned long long)arg1 ;
+(double)widthConstrainedToSize:(CGSize)arg1 disclosureTextView:(id)arg2 hasDisclosureIcon:(BOOL)arg3 glyphSize:(unsigned long long)arg4 ;
-(void)setHasDisclosureIcon:(BOOL)arg1 ;
-(void)setGlyphShading:(unsigned long long)arg1 ;
-(unsigned long long)glyphSize;
-(FBRichTextView *)disclosureTextView;
-(BOOL)hasDisclosureIcon;
-(void)setGlyphSize:(unsigned long long)arg1 ;
-(void)setDisclosureIconViewPosition:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_glyphParametersDidChange;
-(void)setDisclosureIconViewPosition:(unsigned long long)arg1 ;
-(unsigned long long)disclosureIconViewPosition;
-(unsigned long long)glyphShading;
-(unsigned long long)glyphName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(void)setGlyphName:(unsigned long long)arg1 ;
@end

