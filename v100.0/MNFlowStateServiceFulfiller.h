/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFlowStateServiceFulfilling.h>

@protocol OS_dispatch_queue;
@class MNFlowStateServiceListenerAnnouncer, NSObject, NSMutableDictionary;

@interface MNFlowStateServiceFulfiller : NSObject <MNFlowStateServiceFulfilling> {

	MNFlowStateServiceListenerAnnouncer* _listenerAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _flowStates;

}
-(void)getFlowStateForName:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyFlowStateOperation:(id)arg1 ;
-(id)initWithFlowStateServiceAnnouncer:(id)arg1 queue:(id)arg2 ;
-(id)_getFlowStateForName:(id)arg1 ;
-(void)_applySetOperationWithFlowStateName:(id)arg1 stateKey:(id)arg2 stateValue:(id)arg3 ;
-(void)_applyCreateOperationWithFlowStateName:(id)arg1 ;
-(void)_applyDeleteOperationWithFlowStateName:(id)arg1 ;
-(void)_announceModificationToStateWithName:(id)arg1 ;
@end
