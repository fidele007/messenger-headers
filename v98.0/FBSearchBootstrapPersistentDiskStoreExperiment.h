/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSearchBootstrapPersistentDiskStoreExperiment : FBExperimentContext {

	BOOL _use_disk_cache_config;
	BOOL _use_legacy_store_interface;

}

@property (assign,nonatomic) BOOL use_disk_cache_config;                   //@synthesize use_disk_cache_config=_use_disk_cache_config - In the implementation block
@property (assign,nonatomic) BOOL use_legacy_store_interface;              //@synthesize use_legacy_store_interface=_use_legacy_store_interface - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)use_disk_cache_config;
-(BOOL)use_legacy_store_interface;
-(void)setUse_disk_cache_config:(BOOL)arg1 ;
-(void)setUse_legacy_store_interface:(BOOL)arg1 ;
@end

