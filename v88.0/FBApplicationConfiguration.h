/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBApplicationModulesConfiguration;

@interface FBApplicationConfiguration : NSObject {

	BOOL _allowDelayingServices;
	BOOL _shouldUseInterstitialPushRegistration;
	/*^block*/id _shoeboxSyncServiceIsEnabled;
	Class _appSessionControllerClass;
	/*^block*/id _messengerProviderModule;
	/*^block*/id _additionalCanOpenURLCheck;
	unsigned long long _simpleSearchFilterType;
	unsigned long long _jewelBadgeFilterType;
	FBApplicationModulesConfiguration* _applicationModulesConfiguration;
	/*^block*/id _destinationConfiguringBlock;

}

@property (nonatomic,readonly) BOOL allowDelayingServices;                                                       //@synthesize allowDelayingServices=_allowDelayingServices - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseInterstitialPushRegistration;                                       //@synthesize shouldUseInterstitialPushRegistration=_shouldUseInterstitialPushRegistration - In the implementation block
@property (nonatomic,copy,readonly) id shoeboxSyncServiceIsEnabled;                                              //@synthesize shoeboxSyncServiceIsEnabled=_shoeboxSyncServiceIsEnabled - In the implementation block
@property (nonatomic,readonly) Class appSessionControllerClass;                                                  //@synthesize appSessionControllerClass=_appSessionControllerClass - In the implementation block
@property (nonatomic,readonly) id messengerProviderModule;                                                       //@synthesize messengerProviderModule=_messengerProviderModule - In the implementation block
@property (nonatomic,copy,readonly) id additionalCanOpenURLCheck;                                                //@synthesize additionalCanOpenURLCheck=_additionalCanOpenURLCheck - In the implementation block
@property (nonatomic,readonly) unsigned long long simpleSearchFilterType;                                        //@synthesize simpleSearchFilterType=_simpleSearchFilterType - In the implementation block
@property (nonatomic,readonly) unsigned long long jewelBadgeFilterType;                                          //@synthesize jewelBadgeFilterType=_jewelBadgeFilterType - In the implementation block
@property (nonatomic,readonly) FBApplicationModulesConfiguration * applicationModulesConfiguration;              //@synthesize applicationModulesConfiguration=_applicationModulesConfiguration - In the implementation block
@property (nonatomic,readonly) id destinationConfiguringBlock;                                                   //@synthesize destinationConfiguringBlock=_destinationConfiguringBlock - In the implementation block
-(id)initWithAllowDelayingServices:(BOOL)arg1 shouldUseInterstitialPushRegistration:(BOOL)arg2 shoeboxSyncServiceIsEnabled:(/*^block*/id)arg3 appSessionControllerClass:(Class)arg4 messengerProviderModule:(/*^block*/id)arg5 additionalCanOpenURLCheck:(/*^block*/id)arg6 navigationBarSimpleSearchFilterType:(unsigned long long)arg7 jewelBadgeFilterType:(unsigned long long)arg8 applicationModulesConfiguration:(id)arg9 destinationConfiguringBlock:(/*^block*/id)arg10 ;
-(BOOL)allowDelayingServices;
-(BOOL)shouldUseInterstitialPushRegistration;
-(id)shoeboxSyncServiceIsEnabled;
-(Class)appSessionControllerClass;
-(id)messengerProviderModule;
-(id)additionalCanOpenURLCheck;
-(unsigned long long)simpleSearchFilterType;
-(unsigned long long)jewelBadgeFilterType;
-(FBApplicationModulesConfiguration *)applicationModulesConfiguration;
-(id)destinationConfiguringBlock;
-(id)init;
@end

