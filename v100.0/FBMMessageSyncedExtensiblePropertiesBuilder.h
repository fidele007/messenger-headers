/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMMessageReactions, FBMThreadLiveLocation;

@interface FBMMessageSyncedExtensiblePropertiesBuilder : NSObject {

	FBMMessageReactions* _reactions;
	FBMThreadLiveLocation* _liveLocation;

}
+(id)messageSyncedExtensiblePropertiesFromExistingMessageSyncedExtensibleProperties:(id)arg1 ;
+(id)messageSyncedExtensibleProperties;
-(id)withReactions:(id)arg1 ;
-(id)withLiveLocation:(id)arg1 ;
-(id)build;
@end
