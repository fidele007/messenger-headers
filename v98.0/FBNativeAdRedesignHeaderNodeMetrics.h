/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide, UIColor;

@interface FBNativeAdRedesignHeaderNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) PAInterfaceGuide * interfaceGuide;                         //@synthesize interfaceGuide=_interfaceGuide - In the implementation block
@property (nonatomic,readonly) double hairlineBoxLineWeight; 
@property (nonatomic,readonly) UIColor * hairlineBoxColor; 
@property (nonatomic,readonly) FBTextMetrics* titleTextRedesignMetrics; 
@property (nonatomic,readonly) unsigned long long titleMaxLineCount; 
@property (nonatomic,readonly) CGSize maxIconNodeSize; 
@property (nonatomic,readonly) CGSize maxChevronButtonSize; 
@property (nonatomic,readonly) CGSize maxSponsoredLableNodeSize; 
@property (nonatomic,readonly) UIEdgeInsets chevronButtonTapTargetInsets; 
@property (nonatomic,readonly) FBTextMetrics* sponsoredLabelTextMetrics; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
@property (nonatomic,readonly) double verticalSpacePadding; 
@property (nonatomic,readonly) double sponsoredLabelAndChevronButtonPadding; 
@property (nonatomic,readonly) double chevronButtonHeightSpacePadding; 
@property (nonatomic,readonly) double footerHorizontalPadding; 
@property (nonatomic,readonly) double redesignHeaderNodeBorderCornerRadius; 
@property (nonatomic,readonly) double sponsoredLabelTopSpacing; 
@property (nonatomic,readonly) double sponsoredLabelBottomSpacing; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(PAInterfaceGuide *)interfaceGuide;
-(FBTextMetrics*)sponsoredLabelTextMetrics;
-(UIEdgeInsets)chevronButtonTapTargetInsets;
-(double)sponsoredLabelTopSpacing;
-(CGSize)maxChevronButtonSize;
-(double)sponsoredLabelBottomSpacing;
-(CGSize)defaultIconSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)horizontalSpacePadding;
-(double)hairlineBoxLineWeight;
-(UIColor *)hairlineBoxColor;
-(double)verticalSpacePadding;
-(FBTextMetrics*)bodyTextMetrics;
-(FBTextMetrics*)titleTextRedesignMetrics;
-(double)chevronButtonHeightSpacePadding;
-(CGSize)maxSponsoredLableNodeSize;
-(double)sponsoredLabelAndChevronButtonPadding;
-(double)redesignHeaderNodeBorderCornerRadius;
-(CGSize)calculateSponsoredLabelNodeSizeWithIconSize:(CGSize)arg1 titleTextSize:(CGSize)arg2 constrainedSize:(CGSize)arg3 ;
-(CGSize)maxIconNodeSize;
-(CGSize)calculateSponsoredLabelNodeSizeWithIconSize:(CGSize)arg1 titleText:(id)arg2 enableFullLengthBorderLineRedesign:(BOOL)arg3 constrainedSize:(CGSize)arg4 ;
-(unsigned long long)titleMaxLineCount;
-(double)footerHorizontalPadding;
@end

