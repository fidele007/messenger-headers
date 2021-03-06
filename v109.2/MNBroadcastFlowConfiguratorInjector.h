/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBProviderMapData, FBMobileConfigContextManager;

@interface MNBroadcastFlowConfiguratorInjector : NSObject {

	FBProviderMapData* _mapData;
	BOOL _enablePagesSearch;
	FBMobileConfigContextManager* _configManager;

}

@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;              //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) BOOL enablePagesSearch;                                    //@synthesize enablePagesSearch=_enablePagesSearch - In the implementation block
-(FBMobileConfigContextManager *)configManager;
-(id)initWithProviderMapData:(id)arg1 enablePagesSearch:(BOOL)arg2 ;
-(BOOL)enablePagesSearch;
@end

