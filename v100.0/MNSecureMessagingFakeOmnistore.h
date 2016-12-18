/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOmnistore.h>

@class NSMutableArray;

@interface MNSecureMessagingFakeOmnistore : FBOmnistore {

	NSMutableArray* _storedProceduresCallbacks;

}
-(void)addDeltaReceivedCallback:(/*^block*/id)arg1 ;
-(id)subscribeCollection:(id)arg1 ;
-(BOOL)applyStoredProcedure:(int)arg1 params:(id)arg2 ;
-(void)_handleSendMessageProcedureWithParams:(id)arg1 ;
-(void)_handleLookupProcedureWithParams:(id)arg1 ;
-(void)_handleRegisrationPacketWithParams:(id)arg1 ;
-(void)_handleMakePrimaryProcedure;
-(void)_handleMakeNotPrimaryProcedure;
-(void)_callOutToCallbacksWithId:(int)arg1 data:(id)arg2 ;
-(void)addStoredProcedureResultCallback:(/*^block*/id)arg1 ;
-(id)init;
@end
