/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary;

@interface FBGraphQLThreadUnsafeMutationSecretary : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _mutationBookkeeperMap;

}
-(void)cancelMutation:(id)arg1 ;
-(void)registerMutation:(id)arg1 ;
-(void)mutationDidStart:(id)arg1 withRequest:(id)arg2 ;
-(void)mutationDidSucceed:(id)arg1 withPayload:(id)arg2 ;
-(void)mutationDidFail:(id)arg1 withError:(id)arg2 ;
-(id)bookkeeperForMutation:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

