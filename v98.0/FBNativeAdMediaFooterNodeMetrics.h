/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide;

@interface FBNativeAdMediaFooterNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) PAInterfaceGuide * interfaceGuide;                    //@synthesize interfaceGuide=_interfaceGuide - In the implementation block
@property (nonatomic,readonly) double hairlineBoxLineWeight; 
@property (nonatomic,readonly) CGColorRef hairlineBoxColor; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
@property (nonatomic,readonly) FBTextMetrics* titleTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* subtitleTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* bodyTextMetrics; 
@property (nonatomic,readonly) unsigned long long titleMaxLineCount; 
@property (nonatomic,readonly) unsigned long long subtitleMaxLineCount; 
@property (nonatomic,readonly) unsigned long long bodyMaxLineCount; 
@property (nonatomic,readonly) CGSize maxActionButtonSize; 
@property (nonatomic,readonly) double footerHorizontalPadding; 
@property (nonatomic,readonly) double actionButtonTopSpacing; 
@property (nonatomic,readonly) double titleTopSpacing; 
@property (nonatomic,readonly) double titleToSubtitleSpacing; 
@property (nonatomic,readonly) double subtitleToBodySpacing; 
@property (nonatomic,readonly) double bodyBottomSpacing; 
@property (nonatomic,readonly) double titleToActionButtonMinSpacing; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(PAInterfaceGuide *)interfaceGuide;
-(FBTextMetrics*)titleTextMetrics;
-(double)horizontalSpacePadding;
-(double)subtitleToBodySpacing;
-(double)hairlineBoxLineWeight;
-(CGColorRef)hairlineBoxColor;
-(unsigned long long)subtitleMaxLineCount;
-(CGSize)maxActionButtonSize;
-(FBTextMetrics*)bodyTextMetrics;
-(double)titleToActionButtonMinSpacing;
-(FBTextMetrics*)subtitleTextMetrics;
-(CGSize)calculateNodeSizeWithCallToActionText:(id)arg1 titleText:(id)arg2 subtitleText:(id)arg3 bodyText:(id)arg4 constrainingSize:(CGSize)arg5 ;
-(double)actionButtonTopSpacing;
-(double)titleTopSpacing;
-(double)titleToSubtitleSpacing;
-(CGSize)calculateNodeSizeWithHasActionButton:(BOOL)arg1 actionButtonSize:(CGSize)arg2 titleTextSize:(CGSize)arg3 hasSubtitleText:(BOOL)arg4 subtitleTextSize:(CGSize)arg5 hasBodyText:(BOOL)arg6 bodyTextSize:(CGSize)arg7 constrainedSize:(CGSize)arg8 ;
-(double)bodyBottomSpacing;
-(unsigned long long)titleMaxLineCount;
-(unsigned long long)bodyMaxLineCount;
-(double)footerHorizontalPadding;
@end

