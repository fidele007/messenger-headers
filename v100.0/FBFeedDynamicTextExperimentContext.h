/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBFeedDynamicTextExperimentContext : FBExperimentContext {

	long long _postLength;
	long long _botPadding;
	BOOL _enable;
	BOOL _useVeryLargeFont;
	BOOL _oneLineScaling;
	long long _fontSize;
	BOOL _centerText;
	long long _topPadding;

}

@property (assign,nonatomic) long long postLength;               //@synthesize postLength=_postLength - In the implementation block
@property (assign,nonatomic) long long botPadding;               //@synthesize botPadding=_botPadding - In the implementation block
@property (assign,nonatomic) BOOL enable;                        //@synthesize enable=_enable - In the implementation block
@property (assign,nonatomic) BOOL useVeryLargeFont;              //@synthesize useVeryLargeFont=_useVeryLargeFont - In the implementation block
@property (assign,nonatomic) BOOL oneLineScaling;                //@synthesize oneLineScaling=_oneLineScaling - In the implementation block
@property (assign,nonatomic) long long fontSize;                 //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL centerText;                    //@synthesize centerText=_centerText - In the implementation block
@property (assign,nonatomic) long long topPadding;               //@synthesize topPadding=_topPadding - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)botPadding;
-(BOOL)oneLineScaling;
-(long long)postLength;
-(BOOL)useVeryLargeFont;
-(void)setPostLength:(long long)arg1 ;
-(void)setBotPadding:(long long)arg1 ;
-(void)setUseVeryLargeFont:(BOOL)arg1 ;
-(void)setOneLineScaling:(BOOL)arg1 ;
-(void)setFontSize:(long long)arg1 ;
-(BOOL)enable;
-(long long)fontSize;
-(void)setEnable:(BOOL)arg1 ;
-(void)setCenterText:(BOOL)arg1 ;
-(long long)topPadding;
-(BOOL)centerText;
-(void)setTopPadding:(long long)arg1 ;
@end
