/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface MNQuickPromotionBannerViewModel : NSObject {

	BOOL _reserveSpaceForBannerImage;
	BOOL _isBannerTappable;
	BOOL _roundedCorners;
	BOOL _hidesDismissButton;
	NSString* _title;
	NSString* _subtitle;
	NSString* _primaryActionButtonTitle;
	NSString* _secondaryActionButtonTitle;
	unsigned long long _entryPoint;
	unsigned long long _colorScheme;
	UIImage* _bannerImage;

}

@property (nonatomic,copy,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryActionButtonTitle;                //@synthesize primaryActionButtonTitle=_primaryActionButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryActionButtonTitle;              //@synthesize secondaryActionButtonTitle=_secondaryActionButtonTitle - In the implementation block
@property (nonatomic,readonly) BOOL reserveSpaceForBannerImage;                         //@synthesize reserveSpaceForBannerImage=_reserveSpaceForBannerImage - In the implementation block
@property (nonatomic,readonly) unsigned long long entryPoint;                           //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) unsigned long long colorScheme;                          //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIImage * bannerImage;                                   //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,readonly) BOOL isBannerTappable;                                   //@synthesize isBannerTappable=_isBannerTappable - In the implementation block
@property (nonatomic,readonly) BOOL roundedCorners;                                     //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (nonatomic,readonly) BOOL hidesDismissButton;                                 //@synthesize hidesDismissButton=_hidesDismissButton - In the implementation block
-(NSString *)primaryActionButtonTitle;
-(NSString *)secondaryActionButtonTitle;
-(id)initWithQPPromotion:(id)arg1 ;
-(BOOL)reserveSpaceForBannerImage;
-(BOOL)isBannerTappable;
-(BOOL)hidesDismissButton;
-(NSString *)title;
-(NSString *)subtitle;
-(BOOL)roundedCorners;
-(unsigned long long)entryPoint;
-(UIImage *)bannerImage;
-(unsigned long long)colorScheme;
@end

