/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNPromoteStickerInstallExperimentContext : FBExperimentContext {

	BOOL _tapToOpenStickerPackEnabled;
	BOOL _promoteDemographicStickerPackEnabled;
	BOOL _stickerAttributionEnabled;

}

@property (nonatomic,readonly) BOOL tapToOpenStickerPackEnabled;                       //@synthesize tapToOpenStickerPackEnabled=_tapToOpenStickerPackEnabled - In the implementation block
@property (nonatomic,readonly) BOOL promoteDemographicStickerPackEnabled;              //@synthesize promoteDemographicStickerPackEnabled=_promoteDemographicStickerPackEnabled - In the implementation block
@property (nonatomic,readonly) BOOL stickerAttributionEnabled;                         //@synthesize stickerAttributionEnabled=_stickerAttributionEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)tapToOpenStickerPackEnabled;
-(BOOL)promoteDemographicStickerPackEnabled;
-(BOOL)stickerAttributionEnabled;
@end
