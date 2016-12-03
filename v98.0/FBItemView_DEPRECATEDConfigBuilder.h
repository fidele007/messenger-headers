/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUIConfigBuilder.h>

@class NSString, NSAttributedString, UIColor;

@interface FBItemView_DEPRECATEDConfigBuilder : NSObject <FBUIConfigBuilder> {

	UIEdgeInsets _contentEdgeInset;
	unsigned long long _imageSize;
	BOOL _hasDisclosureIcon;
	unsigned long long _disclosureViewPosition;
	double _textContentPadding;
	BOOL _shouldTopAlignTextContent;
	double _topAlignedTextTopOffset;
	BOOL _shouldCenterThumbnail;
	double _textThumbnailOffset;
	BOOL _hasSeparator;
	UIEdgeInsets _separatorInset;
	id _separatorColor;
	BOOL _shouldRightAlignDisclosureView;
	double _imageTopOffset;
	double _accessoryViewLeftOffset;
	double _titleSize;
	double _primarySubtitleSize;
	double _secondarySubtitleSize;
	double _metadataSize;
	NSString* _titleFontName;
	NSString* _primarySubtitleFontName;
	NSString* _secondarySubtitleFontName;
	NSString* _title;
	NSString* _primarySubtitle;
	NSString* _secondarySubtitle;
	NSString* _metadata;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedPrimarySubtitle;
	NSAttributedString* _attributedSecondarySubtitle;
	NSAttributedString* _attributedMetadata;
	id _image;
	UIColor* _imageBackgroundColor;
	BOOL _shouldSetImageContentMode;
	long long _imageContentMode;
	id _imageUrl;
	id _titleColor;
	id _primarySubtitleColor;
	id _secondarySubtitleColor;
	id _metadataTextColor;
	id _backgroundColor;
	BOOL _shouldLeftAlignBottomView;
	unsigned long long _titleTruncationMode;
	unsigned long long _primarySubtitleTruncationMode;
	unsigned long long _secondarySubtitleTruncationMode;
	unsigned long long _titleMaxNumberOfLines;
	unsigned long long _primarySubtitleMaxNumberOfLines;
	unsigned long long _secondarySubtitleMaxNumberOfLines;
	BOOL _hasBottomViewSeparator;
	id _bottomViewSeparatorColor;
	UIEdgeInsets _bottomViewSeparatorInset;
	BOOL _shouldTopAlignAccessoryView;
	UIEdgeInsets _accessoryViewInset;
	BOOL _shouldSeparatorBeOffsetByThumbnail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderForInstance:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setImageBackgroundColor:(id)arg1 ;
-(id)setTitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setShouldCenterThumbnail:(BOOL)arg1 ;
-(id)setDisclosureViewPosition:(unsigned long long)arg1 ;
-(id)setTextContentPadding:(double)arg1 ;
-(id)setShouldSeparatorBeOffsetByThumbnail:(BOOL)arg1 ;
-(id)setTextThumbnailOffset:(double)arg1 ;
-(id)setShouldTopAlignTextContent:(BOOL)arg1 ;
-(id)setTopAlignedTextTopOffset:(double)arg1 ;
-(id)setAccessoryViewLeftOffset:(double)arg1 ;
-(id)setTitleFontName:(id)arg1 ;
-(id)setHasDisclosureIcon:(BOOL)arg1 ;
-(id)setShouldLeftAlignBottomView:(BOOL)arg1 ;
-(id)setShouldTopAlignAccessoryView:(BOOL)arg1 ;
-(id)setHasBottomViewSeparator:(BOOL)arg1 ;
-(id)setBottomViewSeparatorInset:(UIEdgeInsets)arg1 ;
-(id)setAccessoryViewInset:(UIEdgeInsets)arg1 ;
-(id)setImageTopOffset:(double)arg1 ;
-(id)setContentEdgeInset:(UIEdgeInsets)arg1 ;
-(id)setShouldRightAlignDisclosureView:(BOOL)arg1 ;
-(id)setBottomViewSeparatorColor:(id)arg1 ;
-(id)setTitleSize:(double)arg1 ;
-(id)setPrimarySubtitleSize:(double)arg1 ;
-(id)setSecondarySubtitleSize:(double)arg1 ;
-(id)setMetadataSize:(double)arg1 ;
-(id)setPrimarySubtitleFontName:(id)arg1 ;
-(id)setSecondarySubtitleFontName:(id)arg1 ;
-(id)setPrimarySubtitle:(id)arg1 ;
-(id)setSecondarySubtitle:(id)arg1 ;
-(id)setAttributedPrimarySubtitle:(id)arg1 ;
-(id)setAttributedSecondarySubtitle:(id)arg1 ;
-(id)setAttributedMetadata:(id)arg1 ;
-(id)setShouldSetImageContentMode:(BOOL)arg1 ;
-(id)setImageUrl:(id)arg1 ;
-(id)setPrimarySubtitleColor:(id)arg1 ;
-(id)setSecondarySubtitleColor:(id)arg1 ;
-(id)setMetadataTextColor:(id)arg1 ;
-(id)setTitleTruncationMode:(unsigned long long)arg1 ;
-(id)setPrimarySubtitleTruncationMode:(unsigned long long)arg1 ;
-(id)setSecondarySubtitleTruncationMode:(unsigned long long)arg1 ;
-(id)setPrimarySubtitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setSecondarySubtitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setImage:(id)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setAttributedTitle:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)setSeparatorColor:(id)arg1 ;
-(id)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(id)setTitleColor:(id)arg1 ;
-(id)setMetadata:(id)arg1 ;
-(id)build;
-(id)setImageSize:(unsigned long long)arg1 ;
-(id)setImageContentMode:(long long)arg1 ;
-(id)setHasSeparator:(BOOL)arg1 ;
@end

