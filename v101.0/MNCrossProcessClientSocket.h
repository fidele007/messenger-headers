/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCrossProcessSocketConnectionListening.h>

@protocol OS_dispatch_queue;
@class NSObject, MNCrossProcessConnectionTopicTracker, MNCrossProcessSocketConnection, NSString;

@interface MNCrossProcessClientSocket : NSObject <MNCrossProcessSocketConnectionListening> {

	int _clientType;
	NSObject*<OS_dispatch_queue> _queue;
	MNCrossProcessConnectionTopicTracker* _topicTracker;
	MNCrossProcessSocketConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)tryCreateConnectedSocketWithSharedContainerPath:(id)arg1 clientType:(int)arg2 dispatchQueue:(id)arg3 socketCreatedBlock:(/*^block*/id)arg4 socketFailedToConnectBlock:(/*^block*/id)arg5 ;
-(void)didReceiveEstablishConnectionPacket:(id)arg1 clientType:(int)arg2 ;
-(void)didReceivePacketOnConnection:(id)arg1 withTopic:(int)arg2 data:(id)arg3 ;
-(void)connectionDidClose:(id)arg1 withError:(int)arg2 ;
-(id)initWithClientType:(int)arg1 dispatchQueue:(id)arg2 ;
-(void)_establishConnectionWithFileDescriptor:(int)arg1 completeBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)_completeSetupChannelOnTopic:(int)arg1 createBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)_setUpConnection:(id)arg1 ;
-(void)tryStartChannelOnTopic:(int)arg1 initialPacketData:(id)arg2 createListenerBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)close;
@end

