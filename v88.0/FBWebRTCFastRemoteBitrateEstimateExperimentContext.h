/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRTCFastRemoteBitrateEstimateExperimentContext : FBExperimentContext {

	int _mode;
	int _br_increase;
	int _br_decrease;

}

@property (nonatomic,readonly) int mode;                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int br_increase;              //@synthesize br_increase=_br_increase - In the implementation block
@property (nonatomic,readonly) int br_decrease;              //@synthesize br_decrease=_br_decrease - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)br_increase;
-(int)br_decrease;
-(int)mode;
@end

