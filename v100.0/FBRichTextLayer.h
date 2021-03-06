/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAsyncLayer.h>
#import <Messenger/FBRichTextNetworkImageManagerDelegate.h>

@class FBRichTextNetworkImageManager, FBRichTextHighlightLayer, NSAttributedString, FBImageDownloader, UIFont, NSArray;

@interface FBRichTextLayer : FBAsyncLayer <FBRichTextNetworkImageManagerDelegate> {

	FBRichTextNetworkImageManager* _imageManager;
	NSRange _highlightedRange;
	CGColorRef _highlightedColor;
	mutex _highlightedRangeLock;
	mutex _imageManagerLock;
	FBRichTextHighlightLayer* _highlightLayer;

}

@property (nonatomic,retain) FBRichTextHighlightLayer * highlightLayer;              //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (copy) NSAttributedString * attributedString; 
@property (retain) FBImageDownloader * imageDownloader; 
@property (retain) CGColorRef color; 
@property (retain) UIFont * font; 
@property (assign) NSRange highlightedRange; 
@property (readonly) CGRect highlightedRect; 
@property (copy,readonly) NSArray * highlightedRects; 
@property (retain) CGColorRef highlightedColor; 
@property (assign) long long horizontalAlignmentMode; 
@property (assign) unsigned long long maximumNumberOfLines; 
@property (assign) double textShadowBlur; 
@property (retain) CGColorRef textShadowColor; 
@property (assign) CGSize textShadowOffset; 
@property (copy) NSAttributedString * truncationAttributedString; 
@property (assign) unsigned long long truncationMode; 
@property (assign) unsigned long long verticalAlignmentMode; 
+(CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(CGSize)arg2 defaultFont:(id)arg3 defaultColor:(CGColorRef)arg4 defaultHorizontalAlignmentMode:(long long)arg5 textShadowOffset:(CGSize)arg6 maximumNumberOfLines:(unsigned long long)arg7 truncationMode:(unsigned long long)arg8 truncationAttributedString:(id)arg9 isTruncated:(BOOL*)arg10 numberOfLines:(unsigned long long*)arg11 firstLineBaselineOrigin:(CGPoint*)arg12 lastLineBaselineOrigin:(CGPoint*)arg13 ;
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)defaultValueForKey:(id)arg1 ;
+(void)initialize;
+(id)defaultActionForKey:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(long long)horizontalAlignmentMode;
-(void)setFont:(UIFont *)arg1 ;
-(id)textCheckingResultAtPoint:(CGPoint)arg1 ;
-(void)setImageDownloader:(FBImageDownloader *)arg1 ;
-(FBImageDownloader *)imageDownloader;
-(BOOL)textIsTruncated;
-(CGSize)sizeThatFitsWithConstraint:(CGSize)arg1 ;
-(CGRect)unionRectForRange:(NSRange)arg1 ;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(id)rectsForRange:(NSRange)arg1 ;
-(void)richTextNetworkImageManager:(id)arg1 didDownloadImage:(CGImageRef)arg2 imageURL:(id)arg3 ;
-(CGRect)highlightedRect;
-(NSArray *)highlightedRects;
-(void)setHighlightedRange:(NSRange)arg1 ;
-(NSRange)highlightedRange;
-(unsigned long long)textIndexAtPoint:(CGPoint)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)state;
-(id)accessibilityLabel;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setHighlightedColor:(CGColorRef)arg1 ;
-(CGColorRef)highlightedColor;
-(void)layoutSublayers;
-(void)setHighlightLayer:(FBRichTextHighlightLayer *)arg1 ;
-(FBRichTextHighlightLayer *)highlightLayer;
@end

