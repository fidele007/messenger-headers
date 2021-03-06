/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBNativeArticleEngagementActionButtonConfiguration, PAInterfaceGuide, UIColor;

@interface FBPublisherNodeMetrics : NSObject {

	FBNativeArticleEngagementActionButtonConfiguration* _likeButtonConfig;
	PAInterfaceGuide* _interfaceGuide;
	UIColor* _accentColor;
	UIColor* _borderLineColor;
	UIColor* _backgroundColor;
	double _borderLineHeight;

}

@property (nonatomic,readonly) PAInterfaceGuide * interfaceGuide;                                                  //@synthesize interfaceGuide=_interfaceGuide - In the implementation block
@property (nonatomic,readonly) FBNativeArticleEngagementActionButtonConfiguration * likeButtonConfig; 
@property (nonatomic,readonly) CGSize logoConstrainedSize; 
@property (nonatomic,readonly) double logoBarHeight; 
@property (nonatomic,readonly) UIColor * accentColor;                                                              //@synthesize accentColor=_accentColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderLineColor;                                                          //@synthesize borderLineColor=_borderLineColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                                                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double borderLineHeight;                                                            //@synthesize borderLineHeight=_borderLineHeight - In the implementation block
@property (nonatomic,readonly) double minimumSpaceBetweenLogoAndLikeButton; 
-(UIColor *)accentColor;
-(PAInterfaceGuide *)interfaceGuide;
-(CGSize)logoConstrainedSize;
-(id)initWithAccentColor:(id)arg1 borderLineColor:(id)arg2 borderLineHeight:(id)arg3 backgroundColor:(id)arg4 interfaceGuide:(id)arg5 ;
-(double)logoBarHeight;
-(FBNativeArticleEngagementActionButtonConfiguration *)likeButtonConfig;
-(UIColor *)borderLineColor;
-(double)borderLineHeight;
-(double)minimumSpaceBetweenLogoAndLikeButton;
-(UIColor *)backgroundColor;
@end

