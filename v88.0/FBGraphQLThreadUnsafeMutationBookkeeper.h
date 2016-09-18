/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableArray, NSMutableDictionary;

@interface FBGraphQLThreadUnsafeMutationBookkeeper : NSObject {

	FBUserSession* _session;
	NSMutableArray* _mutationBookList;
	NSMutableDictionary* _mutationBookDictionary;

}
-(void)cancelMutation:(id)arg1 ;
-(void)applySuccessfulMutationBook:(id)arg1 ;
-(void)persistPayload:(id)arg1 forMutation:(id)arg2 ;
-(void)bookkeep;
-(void)rollbackToMutationBook:(id)arg1 ;
-(void)handleErrorFromFailedMutationBook:(id)arg1 ;
-(void)rollbackMutationBookIfNeeded:(id)arg1 ;
-(void)registerMutation:(id)arg1 ;
-(void)mutationDidStart:(id)arg1 withRequest:(id)arg2 ;
-(void)mutationDidSucceed:(id)arg1 withPayload:(id)arg2 ;
-(void)mutationDidFail:(id)arg1 withError:(id)arg2 ;
-(unsigned long long)liveMutationCount;
-(id)initWithSession:(id)arg1 ;
@end
