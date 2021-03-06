/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <FBSharedFramework/FBUIConfigurable.h>

@protocol FBItemView_DEPRECATEDDelegate;
@class UILabel, FBRichTextView, UIView, FBItemContentSummaryDisclosureView, UIAccessibilityElement, UIImageView, FBItemContentSummaryConfig, FBImageDownloader, UIColor, NSString;

@interface FBItemView_DEPRECATED : UIView <FBUIConfigurable> {

	UILabel* _textLabel;
	FBRichTextView* _primarySubtitleTextView;
	FBRichTextView* _secondarySubtitleTextView;
	FBRichTextView* _metadataTextView;
	UIView* _thumbnailView;
	UIView* _cellSeparatorView;
	UIView* _bottomViewSeparatorView;
	FBItemContentSummaryDisclosureView* _disclosureView;
	UIAccessibilityElement* _textAccessibilityElement;
	BOOL _shouldSeparatorBeOffsetByThumbnail;
	FBRichTextView* _richTextLabel;
	UIImageView* _backgroundImageView;
	UIView* _backgroundView;
	UIView* _bottomView;
	UIView* _accessoryView;
	UIView* _selectedBackgroundView;
	FBItemContentSummaryConfig* _configuration;
	FBImageDownloader* _imageDownloader;
	id<FBItemView_DEPRECATEDDelegate> _delegate;
	double _separatorThickness;
	CGPoint _bottomViewOffset;

}

@property (assign,nonatomic,__weak) id<FBItemView_DEPRECATEDDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isTextLabelLoaded; 
@property (nonatomic,readonly) BOOL isRichTextLabelLoaded; 
@property (nonatomic,readonly) BOOL isPrimarySubtitleTextViewLoaded; 
@property (nonatomic,readonly) BOOL isSecondarySubtitleTextViewLoaded; 
@property (nonatomic,readonly) BOOL isMetadataTextViewLoaded; 
@property (nonatomic,readonly) BOOL isThumbnailViewLoaded; 
@property (nonatomic,readonly) BOOL isDisclosureViewLoaded; 
@property (nonatomic,readonly) BOOL hasAccessoryView; 
@property (nonatomic,readonly) BOOL isBottomViewLoaded; 
@property (assign,nonatomic) double separatorThickness;                                          //@synthesize separatorThickness=_separatorThickness - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) FBRichTextView * richTextLabel;                                   //@synthesize richTextLabel=_richTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * primarySubtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * secondarySubtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * metadataTextView; 
@property (nonatomic,retain) UIView * bottomView;                                                //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIView * thumbnailView;                                             //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) BOOL shouldCenterThumbnail; 
@property (assign,nonatomic) double imageTopOffset; 
@property (assign,nonatomic) unsigned long long imageSize; 
@property (nonatomic,readonly) FBItemContentSummaryDisclosureView * disclosureView; 
@property (assign,nonatomic) unsigned long long disclosureViewPosition; 
@property (nonatomic,retain) UIView * accessoryView;                                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) double accessoryViewLeftOffset; 
@property (assign,nonatomic) UIEdgeInsets contentSummaryEdgeInset; 
@property (assign,nonatomic) double textContentPadding; 
@property (assign,nonatomic) BOOL shouldTopAlignTextContent; 
@property (assign,nonatomic) double topAlignedTextTopOffset; 
@property (assign,nonatomic) double textThumbnailOffset; 
@property (assign,nonatomic) CGPoint bottomViewOffset;                                           //@synthesize bottomViewOffset=_bottomViewOffset - In the implementation block
@property (assign,nonatomic) BOOL hasSeparator; 
@property (assign,nonatomic) BOOL shouldSeparatorBeOffsetByThumbnail;                            //@synthesize shouldSeparatorBeOffsetByThumbnail=_shouldSeparatorBeOffsetByThumbnail - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (nonatomic,retain) UIColor * separatorColor; 
@property (assign,nonatomic) BOOL shouldRightAlignDisclosureView; 
@property (assign,nonatomic) BOOL shouldLeftAlignBottomView; 
@property (assign,nonatomic) BOOL hasBottomViewSeparator; 
@property (assign,nonatomic) UIEdgeInsets bottomViewSeparatorInset; 
@property (nonatomic,retain) UIColor * bottomViewSeparatorColor; 
@property (assign,nonatomic) BOOL shouldTopAlignAccessoryView; 
@property (assign,nonatomic) UIEdgeInsets accessoryViewInset; 
@property (nonatomic,retain) UIView * selectedBackgroundView;                                    //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (nonatomic,retain) FBItemContentSummaryConfig * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FBImageDownloader * imageDownloader;                                //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForThumbnailSize:(unsigned long long)arg1 accessoryView:(id)arg2 contentSummaryEdgeInset:(UIEdgeInsets)arg3 textPadding:(double)arg4 ;
+(double)heightConstrainedToSize:(CGSize)arg1 itemContentSummaryConfig:(id)arg2 textPadding:(double)arg3 ;
+(CGSize)textContentSizeForThumbnailSize:(unsigned long long)arg1 accessoryView:(id)arg2 accessoryViewLeftOffset:(double)arg3 disclosureTextView:(id)arg4 disclosureViewPosition:(unsigned long long)arg5 hasDisclosureIcon:(BOOL)arg6 contentSummaryEdgeInset:(UIEdgeInsets)arg7 glyphSize:(unsigned long long)arg8 constrainedToSize:(CGSize)arg9 textPadding:(double)arg10 ;
+(CGSize)sizeForContentImageViewSize:(unsigned long long)arg1 ;
+(double)textContentHeightConstrainedToSize:(CGSize)arg1 title:(id)arg2 titleView:(id)arg3 primarySubtitleView:(id)arg4 secondarySubtitleView:(id)arg5 metadata:(id)arg6 bottomView:(id)arg7 textContentPadding:(double)arg8 rightViewSize:(CGSize)arg9 disclosureViewPosition:(unsigned long long)arg10 contentSizes:(id*)arg11 ;
+(UIEdgeInsets)imageEdgeInsetForContentInset:(UIEdgeInsets)arg1 textPadding:(double)arg2 ;
+(double)textContentHeightForContentSizes:(id)arg1 textContentPadding:(double)arg2 ;
+(double)_edgeSizeForContentImageViewSize:(unsigned long long)arg1 ;
+(double)imageHeightForThumbnailSize:(double)arg1 imageEdgeInsets:(UIEdgeInsets)arg2 ;
+(double)heightConstrainedToSize:(CGSize)arg1 withConfig:(id)arg2 ;
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
-(FBRichTextView *)richTextLabel;
-(void)setShouldCenterThumbnail:(BOOL)arg1 ;
-(void)setContentSummaryEdgeInset:(UIEdgeInsets)arg1 ;
-(FBRichTextView *)primarySubtitleTextView;
-(FBRichTextView *)secondarySubtitleTextView;
-(FBRichTextView *)metadataTextView;
-(BOOL)shouldCenterThumbnail;
-(void)setDisclosureViewPosition:(unsigned long long)arg1 ;
-(unsigned long long)disclosureViewPosition;
-(UIEdgeInsets)contentSummaryEdgeInset;
-(void)setTextContentPadding:(double)arg1 ;
-(double)textContentPadding;
-(void)setShouldSeparatorBeOffsetByThumbnail:(BOOL)arg1 ;
-(BOOL)shouldSeparatorBeOffsetByThumbnail;
-(void)setTextThumbnailOffset:(double)arg1 ;
-(double)textThumbnailOffset;
-(void)setShouldTopAlignTextContent:(BOOL)arg1 ;
-(BOOL)shouldTopAlignTextContent;
-(void)setTopAlignedTextTopOffset:(double)arg1 ;
-(double)topAlignedTextTopOffset;
-(void)setAccessoryViewLeftOffset:(double)arg1 ;
-(double)accessoryViewLeftOffset;
-(void)_configDidChange;
-(id)configBuilder;
-(id)cellSeparator;
-(void)setShouldLeftAlignBottomView:(BOOL)arg1 ;
-(void)setShouldTopAlignAccessoryView:(BOOL)arg1 ;
-(void)setHasBottomViewSeparator:(BOOL)arg1 ;
-(id)bottomViewSeparatorView;
-(void)setBottomViewSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)setAccessoryViewInset:(UIEdgeInsets)arg1 ;
-(id)fb_accessibilityLabel;
-(id)textAccessibilityElement;
-(id)_rightSideView;
-(void)_styleView;
-(void)_setContent;
-(void)setImageTopOffset:(double)arg1 ;
-(void)setShouldRightAlignDisclosureView:(BOOL)arg1 ;
-(void)setBottomViewSeparatorColor:(UIColor *)arg1 ;
-(BOOL)isTextLabelLoaded;
-(BOOL)isRichTextLabelLoaded;
-(BOOL)isPrimarySubtitleTextViewLoaded;
-(BOOL)isSecondarySubtitleTextViewLoaded;
-(BOOL)isMetadataTextViewLoaded;
-(BOOL)isBottomViewLoaded;
-(BOOL)isThumbnailViewLoaded;
-(BOOL)isDisclosureViewLoaded;
-(BOOL)hasAccessoryView;
-(CGPoint)bottomViewOffset;
-(void)setBottomViewOffset:(CGPoint)arg1 ;
-(double)separatorThickness;
-(void)setSeparatorThickness:(double)arg1 ;
-(BOOL)shouldRightAlignDisclosureView;
-(double)imageTopOffset;
-(BOOL)shouldLeftAlignBottomView;
-(BOOL)hasBottomViewSeparator;
-(UIColor *)bottomViewSeparatorColor;
-(UIEdgeInsets)bottomViewSeparatorInset;
-(BOOL)shouldTopAlignAccessoryView;
-(UIEdgeInsets)accessoryViewInset;
-(FBImageDownloader *)imageDownloader;
-(void)setImageDownloader:(FBImageDownloader *)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<FBItemView_DEPRECATEDDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBItemView_DEPRECATEDDelegate>)delegate;
-(void)_removeGestureRecognizers;
-(UIImageView *)backgroundImageView;
-(unsigned long long)imageSize;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(UIView *)backgroundView;
-(UIEdgeInsets)separatorInset;
-(id)config;
-(void)setConfiguration:(FBItemContentSummaryConfig *)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(FBItemContentSummaryConfig *)configuration;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(id)accessibilityLabel;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)applyConfig:(id)arg1 ;
-(UIView *)bottomView;
-(id)c;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setImageSize:(unsigned long long)arg1 ;
-(UIView *)thumbnailView;
-(void)setThumbnailView:(UIView *)arg1 ;
-(BOOL)hasSeparator;
-(void)setHasSeparator:(BOOL)arg1 ;
-(FBItemContentSummaryDisclosureView *)disclosureView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

