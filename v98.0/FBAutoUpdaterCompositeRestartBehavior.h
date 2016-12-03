/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoUpdaterAutomaticRestartBehavior.h>
#import <Messenger/FBAutoUpdaterAutomaticRestartBehaviorListening.h>

@class NSArray, FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer, NSString;

@interface FBAutoUpdaterCompositeRestartBehavior : NSObject <FBAutoUpdaterAutomaticRestartBehavior, FBAutoUpdaterAutomaticRestartBehaviorListening> {

	NSArray* _componentBehaviors;
	/*^block*/id _verifier;
	FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allBehaviors:(id)arg1 ;
+(id)anyBehavior:(id)arg1 ;
-(BOOL)autoUpdaterShouldAutomaticallyRestart;
-(void)behaviorNowPermitsAutomaticRestart:(id)arg1 ;
-(void)addRestartBehaviorListener:(id)arg1 ;
-(void)removeRestartBehaviorListener:(id)arg1 ;
-(id)initWithComponentBehaviors:(id)arg1 verifier:(/*^block*/id)arg2 ;
@end

