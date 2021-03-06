/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBOmnistore, MNSecureMessagingStoredProcedureCallbackDispatcher, MNSecureMessagingStoredProcedureResultStore, NSObject, NSMutableDictionary;

@interface MNSecureMessagingStoredProcedureRunner : NSObject {

	FBOmnistore* _omnistore;
	MNSecureMessagingStoredProcedureCallbackDispatcher* _callbackDispatcher;
	MNSecureMessagingStoredProcedureResultStore* _resultStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _callbacks;

}
-(void)addCallback:(/*^block*/id)arg1 forStoredProcedureKey:(int)arg2 ;
-(BOOL)applyStoredProcedure:(int)arg1 params:(id)arg2 ;
-(void)_didReceiveResult:(id)arg1 forStoredProcedure:(int)arg2 ;
-(BOOL)_processResult:(id)arg1 forStoredProcedure:(int)arg2 ;
-(id)initWithOmnistore:(id)arg1 callbackDispatcher:(id)arg2 resultStore:(id)arg3 queue:(id)arg4 ;
-(void)replayResults;
@end

