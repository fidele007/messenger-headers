/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMQTTClient.h>
#import <Messenger/FBWhistleDelegate.h>

@protocol FBMQTTClientByteAggregating, OS_dispatch_queue, FBMQTTClientDelegate;
@class FBMQTTClientParameter, NSMutableDictionary, FBWhistleAdaptor, FBWhistleAdaptorFactory, FBMQTTClientSettings, NSObject, NSString;

@interface FBMQTTWhistleClient : NSObject <FBMQTTClient, FBWhistleDelegate> {

	FBMQTTClientParameter* _clientParam;
	NSMutableDictionary* _publishingMessages;
	NSMutableDictionary* _publishingMessageTokens;
	NSMutableDictionary* _publishedMessageIds;
	int _localMessageId;
	FBWhistleAdaptor* _whistle;
	FBWhistleAdaptorFactory* _factory;
	FBMQTTClientSettings* _settings;
	id<FBMQTTClientByteAggregating> _byteAggregator;
	int _connSentDbg;
	int _connSuccessDbg;
	int _connFailureDbg;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _useVOIP;
	BOOL _inBackground;
	int _mqttKeepAliveTime;
	int _mqttForegroundKeepAliveTime;
	float _pingResponseTimeout;
	float _connectTimeout;
	int _connectStatus;
	double _lastMqttActivityTimeSecond;
	id<FBMQTTClientDelegate> _delegate;
	long long _state;

}

@property (assign) int connectStatus;                                               //@synthesize connectStatus=_connectStatus - In the implementation block
@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL useVOIP;                                          //@synthesize useVOIP=_useVOIP - In the implementation block
@property (assign,nonatomic) int mqttKeepAliveTime;                                 //@synthesize mqttKeepAliveTime=_mqttKeepAliveTime - In the implementation block
@property (assign,nonatomic) int mqttForegroundKeepAliveTime;                       //@synthesize mqttForegroundKeepAliveTime=_mqttForegroundKeepAliveTime - In the implementation block
@property (assign,nonatomic) float pingResponseTimeout;                             //@synthesize pingResponseTimeout=_pingResponseTimeout - In the implementation block
@property (assign,nonatomic) float connectTimeout;                                  //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign,nonatomic) double lastMqttActivityTimeSecond;                     //@synthesize lastMqttActivityTimeSecond=_lastMqttActivityTimeSecond - In the implementation block
@property (assign,nonatomic,__weak) id<FBMQTTClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inBackground;                                     //@synthesize inBackground=_inBackground - In the implementation block
-(void)setInBackground:(BOOL)arg1 ;
-(id)connectionDebugInfo;
-(BOOL)inBackground;
-(BOOL)useVOIP;
-(void)setLastMqttActivityTimeSecond:(double)arg1 ;
-(float)pingResponseTimeout;
-(void)publishMessage:(id)arg1 sendTimeBlock:(/*^block*/id)arg2 ;
-(void)_dispatchCouldNotPublishMessageToMainThread:(id)arg1 error:(id)arg2 ;
-(int)mqttKeepAliveTime;
-(void)subscribeToPatterns:(id)arg1 ;
-(void)unsubscribeFromPatterns:(id)arg1 ;
-(void)runKeepAlive;
-(void)pauseForegroundKeepAlive;
-(void)resumeForegroundKeepAlive;
-(void)networkStatusChangedFrom:(long long)arg1 to:(long long)arg2 ;
-(void)setUseVOIP:(BOOL)arg1 ;
-(void)setMqttKeepAliveTime:(int)arg1 ;
-(int)mqttForegroundKeepAliveTime;
-(void)setMqttForegroundKeepAliveTime:(int)arg1 ;
-(void)setPingResponseTimeout:(float)arg1 ;
-(double)lastMqttActivityTimeSecond;
-(int)connectStatus;
-(void)setConnectStatus:(int)arg1 ;
-(void)_disconnectWithError:(id)arg1 ;
-(void)_dispatchMessageReceivedToMainThread:(id)arg1 ;
-(void)_onMessageSent:(id)arg1 ;
-(void)_updateLastMqttActivityTime;
-(void)onConnectSent;
-(void)onConnSuccess:(id)arg1 ;
-(void)onConnFailure:(id)arg1 ;
-(void)onPingResponseTimeout;
-(void)onPublishWithTopic:(id)arg1 messageId:(id)arg2 qos:(int)arg3 payload:(id)arg4 receiveTime:(double)arg5 ;
-(void)onPublishSentWithMessageId:(id)arg1 context:(id)arg2 ;
-(void)onPublishFailedWithContext:(id)arg1 error:(id)arg2 ;
-(void)onPubAckWithMessageId:(id)arg1 ;
-(void)onSubAckWithMessageId:(id)arg1 ;
-(void)onPingRequestSent;
-(void)onPingResponse;
-(id)initClientWithParameter:(id)arg1 factory:(id)arg2 dispatchQueue:(id)arg3 byteAggregator:(id)arg4 ;
-(void)setDelegate:(id<FBMQTTClientDelegate>)arg1 ;
-(id<FBMQTTClientDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(void)start;
-(void)publishMessage:(id)arg1 ;
-(void)onError:(id)arg1 ;
-(float)connectTimeout;
-(void)setConnectTimeout:(float)arg1 ;
@end

