/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBInAppBeeperConfig;

@interface FBInAppBeeperConfigBuilder : NSObject {

	FBInAppBeeperConfig* _config;

}
-(id)getConfig;
-(id)withDismissalDelay:(double)arg1 ;
-(id)withPriority:(long long)arg1 ;
-(id)withStatusBarStyle:(long long)arg1 ;
-(id)withBackgroundBlur:(BOOL)arg1 ;
-(id)init;
@end

