/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VOIPConfiguration : NSObject {

	BOOL _mqttEnabled;
	BOOL _keepPersistentConnection;
	BOOL _enableVOIP;
	BOOL _updateForegroundKeepAlive;
	BOOL _useWebrtcTimeout;
	BOOL _isBackgroundKeepAliveDisabled;
	BOOL _isSetToDefaults;
	BOOL _setMqttTestHostNameAndPort;
	BOOL _setMqttLatestHostName;
	BOOL _setMqttSwedenHostName;
	BOOL _failConnectionFast;
	BOOL _setMqttKeepAliveMinIdleTimeSecond;
	int _keepAliveTimeout;
	int _subscribeTimeout;
	int _mqttFastReconnectTimes;
	int _foregroundKeepAliveTime;
	int _mqttMaxDisconnectOnBgPing;
	int _mqttPort;
	double _pubAckTimeout;
	double _responseTimeout;
	double _numMsgSendRetries;
	double _graphSendTimeout;
	double _graphSendAttachmentTimeout;
	double _pingResponseTimeout;
	double _connectTimeout;
	double _mqttFastReconnectInterval;
	double _mqttBgReconnectInterval;
	double _mqttReconnectBgBackoffInterval;
	double _webrtcPubAckTimeout;
	double _webrtcResponseTimeout;
	double _mqttConnectionStatusUpdateDelay;
	NSString* _mqttHostName;
	double _mqttKeepAliveMinIdleTimeSecond;

}

@property (assign,nonatomic) BOOL mqttEnabled;                                    //@synthesize mqttEnabled=_mqttEnabled - In the implementation block
@property (assign,nonatomic) BOOL keepPersistentConnection;                       //@synthesize keepPersistentConnection=_keepPersistentConnection - In the implementation block
@property (assign,nonatomic) BOOL enableVOIP;                                     //@synthesize enableVOIP=_enableVOIP - In the implementation block
@property (assign,nonatomic) int keepAliveTimeout;                                //@synthesize keepAliveTimeout=_keepAliveTimeout - In the implementation block
@property (assign,nonatomic) int subscribeTimeout;                                //@synthesize subscribeTimeout=_subscribeTimeout - In the implementation block
@property (assign,nonatomic) double pubAckTimeout;                                //@synthesize pubAckTimeout=_pubAckTimeout - In the implementation block
@property (assign,nonatomic) double responseTimeout;                              //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (assign,nonatomic) double numMsgSendRetries;                            //@synthesize numMsgSendRetries=_numMsgSendRetries - In the implementation block
@property (assign,nonatomic) double graphSendTimeout;                             //@synthesize graphSendTimeout=_graphSendTimeout - In the implementation block
@property (assign,nonatomic) double graphSendAttachmentTimeout;                   //@synthesize graphSendAttachmentTimeout=_graphSendAttachmentTimeout - In the implementation block
@property (assign,nonatomic) double pingResponseTimeout;                          //@synthesize pingResponseTimeout=_pingResponseTimeout - In the implementation block
@property (assign,nonatomic) double connectTimeout;                               //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign,nonatomic) int mqttFastReconnectTimes;                          //@synthesize mqttFastReconnectTimes=_mqttFastReconnectTimes - In the implementation block
@property (assign,nonatomic) double mqttFastReconnectInterval;                    //@synthesize mqttFastReconnectInterval=_mqttFastReconnectInterval - In the implementation block
@property (assign,nonatomic) double mqttBgReconnectInterval;                      //@synthesize mqttBgReconnectInterval=_mqttBgReconnectInterval - In the implementation block
@property (assign,nonatomic) BOOL updateForegroundKeepAlive;                      //@synthesize updateForegroundKeepAlive=_updateForegroundKeepAlive - In the implementation block
@property (assign,nonatomic) int foregroundKeepAliveTime;                         //@synthesize foregroundKeepAliveTime=_foregroundKeepAliveTime - In the implementation block
@property (assign,nonatomic) int mqttMaxDisconnectOnBgPing;                       //@synthesize mqttMaxDisconnectOnBgPing=_mqttMaxDisconnectOnBgPing - In the implementation block
@property (assign,nonatomic) double mqttReconnectBgBackoffInterval;               //@synthesize mqttReconnectBgBackoffInterval=_mqttReconnectBgBackoffInterval - In the implementation block
@property (assign,nonatomic) double webrtcPubAckTimeout;                          //@synthesize webrtcPubAckTimeout=_webrtcPubAckTimeout - In the implementation block
@property (assign,nonatomic) double webrtcResponseTimeout;                        //@synthesize webrtcResponseTimeout=_webrtcResponseTimeout - In the implementation block
@property (assign,nonatomic) BOOL useWebrtcTimeout;                               //@synthesize useWebrtcTimeout=_useWebrtcTimeout - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundKeepAliveDisabled;                  //@synthesize isBackgroundKeepAliveDisabled=_isBackgroundKeepAliveDisabled - In the implementation block
@property (assign,nonatomic) BOOL isSetToDefaults;                                //@synthesize isSetToDefaults=_isSetToDefaults - In the implementation block
@property (assign,nonatomic) double mqttConnectionStatusUpdateDelay;              //@synthesize mqttConnectionStatusUpdateDelay=_mqttConnectionStatusUpdateDelay - In the implementation block
@property (assign,nonatomic) BOOL setMqttTestHostNameAndPort;                     //@synthesize setMqttTestHostNameAndPort=_setMqttTestHostNameAndPort - In the implementation block
@property (assign,nonatomic) BOOL setMqttLatestHostName;                          //@synthesize setMqttLatestHostName=_setMqttLatestHostName - In the implementation block
@property (assign,nonatomic) BOOL setMqttSwedenHostName;                          //@synthesize setMqttSwedenHostName=_setMqttSwedenHostName - In the implementation block
@property (nonatomic,copy) NSString * mqttHostName;                               //@synthesize mqttHostName=_mqttHostName - In the implementation block
@property (assign,nonatomic) int mqttPort;                                        //@synthesize mqttPort=_mqttPort - In the implementation block
@property (assign,nonatomic) BOOL failConnectionFast;                             //@synthesize failConnectionFast=_failConnectionFast - In the implementation block
@property (assign,nonatomic) double mqttKeepAliveMinIdleTimeSecond;               //@synthesize mqttKeepAliveMinIdleTimeSecond=_mqttKeepAliveMinIdleTimeSecond - In the implementation block
@property (assign,nonatomic) BOOL setMqttKeepAliveMinIdleTimeSecond;              //@synthesize setMqttKeepAliveMinIdleTimeSecond=_setMqttKeepAliveMinIdleTimeSecond - In the implementation block
-(void)setMqttHostName:(NSString *)arg1 ;
-(void)setMqttPort:(int)arg1 ;
-(double)pubAckTimeout;
-(void)setKeepPersistentConnection:(BOOL)arg1 ;
-(BOOL)keepPersistentConnection;
-(BOOL)enableVOIP;
-(int)keepAliveTimeout;
-(int)subscribeTimeout;
-(BOOL)mqttEnabled;
-(double)numMsgSendRetries;
-(double)graphSendTimeout;
-(double)graphSendAttachmentTimeout;
-(double)pingResponseTimeout;
-(int)mqttFastReconnectTimes;
-(double)mqttFastReconnectInterval;
-(double)mqttBgReconnectInterval;
-(int)foregroundKeepAliveTime;
-(BOOL)updateForegroundKeepAlive;
-(int)mqttMaxDisconnectOnBgPing;
-(double)mqttReconnectBgBackoffInterval;
-(double)webrtcPubAckTimeout;
-(double)webrtcResponseTimeout;
-(BOOL)useWebrtcTimeout;
-(BOOL)isBackgroundKeepAliveDisabled;
-(double)mqttConnectionStatusUpdateDelay;
-(BOOL)setMqttTestHostNameAndPort;
-(BOOL)setMqttLatestHostName;
-(BOOL)setMqttSwedenHostName;
-(NSString *)mqttHostName;
-(int)mqttPort;
-(BOOL)failConnectionFast;
-(double)mqttKeepAliveMinIdleTimeSecond;
-(id)initWithUseIntegrationVip:(BOOL)arg1 enableVoIP:(BOOL)arg2 enableVoIPSocket:(BOOL)arg3 ;
-(id)initWithResultsDictionary:(id)arg1 ;
-(id)getSocketConfig;
-(void)setMqttEnabled:(BOOL)arg1 ;
-(void)setEnableVOIP:(BOOL)arg1 ;
-(void)setKeepAliveTimeout:(int)arg1 ;
-(void)setSubscribeTimeout:(int)arg1 ;
-(void)setPubAckTimeout:(double)arg1 ;
-(void)setNumMsgSendRetries:(double)arg1 ;
-(void)setGraphSendTimeout:(double)arg1 ;
-(void)setGraphSendAttachmentTimeout:(double)arg1 ;
-(void)setPingResponseTimeout:(double)arg1 ;
-(void)setMqttFastReconnectTimes:(int)arg1 ;
-(void)setMqttFastReconnectInterval:(double)arg1 ;
-(void)setMqttBgReconnectInterval:(double)arg1 ;
-(void)setUpdateForegroundKeepAlive:(BOOL)arg1 ;
-(void)setForegroundKeepAliveTime:(int)arg1 ;
-(void)setMqttMaxDisconnectOnBgPing:(int)arg1 ;
-(void)setMqttReconnectBgBackoffInterval:(double)arg1 ;
-(void)setWebrtcPubAckTimeout:(double)arg1 ;
-(void)setWebrtcResponseTimeout:(double)arg1 ;
-(void)setUseWebrtcTimeout:(BOOL)arg1 ;
-(void)setIsBackgroundKeepAliveDisabled:(BOOL)arg1 ;
-(BOOL)isSetToDefaults;
-(void)setIsSetToDefaults:(BOOL)arg1 ;
-(void)setMqttConnectionStatusUpdateDelay:(double)arg1 ;
-(void)setSetMqttTestHostNameAndPort:(BOOL)arg1 ;
-(void)setSetMqttLatestHostName:(BOOL)arg1 ;
-(void)setSetMqttSwedenHostName:(BOOL)arg1 ;
-(void)setFailConnectionFast:(BOOL)arg1 ;
-(void)setMqttKeepAliveMinIdleTimeSecond:(double)arg1 ;
-(BOOL)setMqttKeepAliveMinIdleTimeSecond;
-(void)setSetMqttKeepAliveMinIdleTimeSecond:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqualToObject:(id)arg1 ;
-(double)connectTimeout;
-(void)setConnectTimeout:(double)arg1 ;
-(void)setDefaults;
-(double)responseTimeout;
-(void)setResponseTimeout:(double)arg1 ;
@end

