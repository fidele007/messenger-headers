/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDiskCacheConfigBuilder.h>

@class FBManualConfigBuilder;

@interface FBManualDiskCacheConfigBuilder : FBDiskCacheConfigBuilder {

	FBManualConfigBuilder* _subConfig;

}

@property (nonatomic,retain) FBManualConfigBuilder * subConfig;              //@synthesize subConfig=_subConfig - In the implementation block
-(FBManualConfigBuilder *)subConfig;
-(void)setSubConfig:(FBManualConfigBuilder *)arg1 ;
-(id)init;
-(id)build;
@end

