/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMQTTClientDelegate.h>
#import <Messenger/FBMQTTNetworkStatusChangedListening.h>
#import <Messenger/FBMQTTInterface.h>

@protocol OS_dispatch_queue, FBMQTTClientFactory, FBMQTTNetworkStatusChangedListening, FBMQTTClientManagerDelegate, FBMQTTClient;
@class NSObject, NSNotificationCenter, FBMQTTExperiments, FBWhistleCellRadioChangeMonitor, NSDate, JSONDecoder, FBDNSCacheHost, NSString, FBMQTTCredentialHashProcessor, NSNumber, FBMQTTNetworkStatusMonitor, FBMQTTClientByteAggregator, FBMQTTClientConnectLogger, FBMQTTChannelEndpointCapabilities, FBMQTTConfigurations, FBMQTTSocketConfig, NSMutableDictionary, NSTimer, FBMQTTClientCapabilities, NSMutableSet, NSDictionary;

@interface FBMQTTClientManager : NSObject <FBMQTTClientDelegate, FBMQTTNetworkStatusChangedListening, FBMQTTInterface> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _jsonDecodingQueue;
	NSObject*<OS_dispatch_queue> _jsonEncodingQueue;
	int _runningState;
	NSNotificationCenter* _notificationCenter;
	BOOL _credentialsAndUserAgentFetched;
	BOOL _sslDisabled;
	BOOL _encodingDisabled;
	BOOL _isDNSCacheEnabled;
	FBMQTTExperiments* _experiments;
	FBWhistleCellRadioChangeMonitor* _whistleCellRadioMonitor;
	id<FBMQTTClientFactory> _clientFactory;
	BOOL _isFirstConnect;
	NSDate* _clientStartTime;
	JSONDecoder* _jsonDecoder;
	FBDNSCacheHost* _mqttCacheHost;
	NSString* _appSessionId;
	int _encodingFormat;
	FBMQTTCredentialHashProcessor* _credentialHashProcessor;
	BOOL _autoOnlineOnForeground;
	NSNumber* _currentEncodedReferenceCode;
	long long _currentConnMessageId;
	FBMQTTNetworkStatusMonitor* _networkMonitor;
	id<FBMQTTNetworkStatusChangedListening> _networkEventListener;
	FBMQTTClientByteAggregator* _byteAggregator;
	BOOL _inBackground;
	FBMQTTClientConnectLogger* _connectAnalyticLogger;
	BOOL _reachable;
	int _mqttPort;
	int _totalReconnectTimes;
	int _fastReconnectTimes;
	int _totalBgPingSentSinceConnected;
	int _totalDisconnectOnBgPing;
	NSString* _mqttHostName_MAIN_THREAD_ONLY;
	id<FBMQTTClientManagerDelegate> _delegate;
	FBMQTTChannelEndpointCapabilities* _endpointCapabilities;
	FBMQTTConfigurations* _config;
	FBMQTTSocketConfig* _socketConfig;
	NSString* _networkSessionId;
	NSString* _mqttSessionId;
	/*^block*/id _credentialsAvailableBlock;
	/*^block*/id _credentialsFetcherBlock;
	/*^block*/id _userAgentFormatterBlock;
	/*^block*/id _clientCreationBlock;
	NSString* _clientID;
	NSString* _username;
	NSString* _password;
	NSMutableDictionary* _usernameKeyValueDictionary;
	id<FBMQTTClient> _client;
	NSTimer* _connectTimer;
	NSTimer* _reconnectTimer;
	long long _clientState;
	FBMQTTClientCapabilities* _clientCapabilities;
	NSMutableDictionary* _patternListeners;
	NSMutableSet* _suspendedListeners;
	NSMutableSet* _publishers;
	NSMutableSet* _queuedPublishers;
	NSDictionary* _connectCombinedPublishers;
	NSDate* _connectStartDate;
	double _reconnectDelay;
	long long _reconnectMode;
	long long _bgPingState;
	NSDate* _reconnectBgBackoffStartDate;
	NSMutableSet* _subscribedTopicsOnConnect;
	/*^block*/id _getDiffProviderBlock;
	/*^block*/id _showOnlineBlock;

}

@property (copy) id credentialsAvailableBlock;                                                      //@synthesize credentialsAvailableBlock=_credentialsAvailableBlock - In the implementation block
@property (copy) id credentialsFetcherBlock;                                                        //@synthesize credentialsFetcherBlock=_credentialsFetcherBlock - In the implementation block
@property (copy) id userAgentFormatterBlock;                                                        //@synthesize userAgentFormatterBlock=_userAgentFormatterBlock - In the implementation block
@property (nonatomic,copy) id clientCreationBlock;                                                  //@synthesize clientCreationBlock=_clientCreationBlock - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                                     //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * username;                                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                     //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * usernameKeyValueDictionary;                      //@synthesize usernameKeyValueDictionary=_usernameKeyValueDictionary - In the implementation block
@property (nonatomic,retain) id<FBMQTTClient> client;                                               //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSTimer * connectTimer;                                                //@synthesize connectTimer=_connectTimer - In the implementation block
@property (nonatomic,retain) NSTimer * reconnectTimer;                                              //@synthesize reconnectTimer=_reconnectTimer - In the implementation block
@property (assign) long long clientState;                                                           //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,retain) FBMQTTChannelEndpointCapabilities * endpointCapabilities;              //@synthesize endpointCapabilities=_endpointCapabilities - In the implementation block
@property (nonatomic,retain) FBMQTTClientCapabilities * clientCapabilities;                         //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * patternListeners;                                //@synthesize patternListeners=_patternListeners - In the implementation block
@property (nonatomic,retain) NSMutableSet * suspendedListeners;                                     //@synthesize suspendedListeners=_suspendedListeners - In the implementation block
@property (nonatomic,retain) NSMutableSet * publishers;                                             //@synthesize publishers=_publishers - In the implementation block
@property (nonatomic,retain) NSMutableSet * queuedPublishers;                                       //@synthesize queuedPublishers=_queuedPublishers - In the implementation block
@property (nonatomic,copy) NSDictionary * connectCombinedPublishers;                                //@synthesize connectCombinedPublishers=_connectCombinedPublishers - In the implementation block
@property (assign) BOOL reachable;                                                                  //@synthesize reachable=_reachable - In the implementation block
@property (retain) NSDate * connectStartDate;                                                       //@synthesize connectStartDate=_connectStartDate - In the implementation block
@property (assign,nonatomic) double reconnectDelay;                                                 //@synthesize reconnectDelay=_reconnectDelay - In the implementation block
@property (assign,nonatomic) long long reconnectMode;                                               //@synthesize reconnectMode=_reconnectMode - In the implementation block
@property (assign,nonatomic) int totalReconnectTimes;                                               //@synthesize totalReconnectTimes=_totalReconnectTimes - In the implementation block
@property (assign,nonatomic) int fastReconnectTimes;                                                //@synthesize fastReconnectTimes=_fastReconnectTimes - In the implementation block
@property (assign,nonatomic) long long bgPingState;                                                 //@synthesize bgPingState=_bgPingState - In the implementation block
@property (assign,nonatomic) int totalBgPingSentSinceConnected;                                     //@synthesize totalBgPingSentSinceConnected=_totalBgPingSentSinceConnected - In the implementation block
@property (assign,nonatomic) int totalDisconnectOnBgPing;                                           //@synthesize totalDisconnectOnBgPing=_totalDisconnectOnBgPing - In the implementation block
@property (nonatomic,retain) NSDate * reconnectBgBackoffStartDate;                                  //@synthesize reconnectBgBackoffStartDate=_reconnectBgBackoffStartDate - In the implementation block
@property (retain) NSMutableSet * subscribedTopicsOnConnect;                                        //@synthesize subscribedTopicsOnConnect=_subscribedTopicsOnConnect - In the implementation block
@property (nonatomic,copy) id getDiffProviderBlock;                                                 //@synthesize getDiffProviderBlock=_getDiffProviderBlock - In the implementation block
@property (nonatomic,copy) id showOnlineBlock;                                                      //@synthesize showOnlineBlock=_showOnlineBlock - In the implementation block
@property (assign,nonatomic,__weak) id<FBMQTTClientManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL started; 
@property (nonatomic,readonly) long long networkStatus; 
@property (readonly) FBMQTTConfigurations * config;                                                 //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) FBMQTTSocketConfig * socketConfig;                                     //@synthesize socketConfig=_socketConfig - In the implementation block
@property (nonatomic,copy) NSString * mqttHostName;                                                 //@synthesize mqttHostName_MAIN_THREAD_ONLY=_mqttHostName_MAIN_THREAD_ONLY - In the implementation block
@property (assign,nonatomic) int mqttPort;                                                          //@synthesize mqttPort=_mqttPort - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkSessionId;                                    //@synthesize networkSessionId=_networkSessionId - In the implementation block
@property (nonatomic,copy) NSString * mqttSessionId;                                                //@synthesize mqttSessionId=_mqttSessionId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long state; 
-(BOOL)isPatternCurrentlySubscribed:(id)arg1 ;
-(void)addPublisher:(id)arg1 ;
-(NSString *)mqttSessionId;
-(id)connectionDebugInfo;
-(id)initWithExperiments:(id)arg1 ;
-(void)setMqttHostName:(NSString *)arg1 ;
-(FBMQTTChannelEndpointCapabilities *)endpointCapabilities;
-(void)configureWithClientID:(id)arg1 clientCapabilities:(unsigned long long)arg2 endpointCapabilities:(unsigned long long)arg3 showOnLineOnForegroundBlock:(/*^block*/id)arg4 credentialsAvailableBlock:(/*^block*/id)arg5 credentialsFetcherBlock:(/*^block*/id)arg6 userAgentFormatterBlock:(/*^block*/id)arg7 regionPreference:(id)arg8 getdiffProviderBlock:(/*^block*/id)arg9 ;
-(void)startClientManager;
-(void)setSSLDisabled:(BOOL)arg1 ;
-(void)setMqttPort:(int)arg1 ;
-(void)setEncodingDisabled:(BOOL)arg1 ;
-(void)setSocketConfig:(FBMQTTSocketConfig *)arg1 ;
-(void)stopClientManager;
-(long long)networkStatus;
-(void)sendMQTTKeepAlive;
-(void)setInBackground:(BOOL)arg1 ;
-(void)subscribeListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)suspendListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)credentialsDidBecomeAvailable;
-(void)addListeners:(id)arg1 ;
-(void)removeListeners:(id)arg1 ;
-(void)updateOnlineStatus:(BOOL)arg1 ;
-(NSString *)mqttHostName;
-(int)mqttPort;
-(NSString *)networkSessionId;
-(void)mqttClientReconnectNow:(id)arg1 ;
-(void)mqttClientDidSendPingRequest:(id)arg1 ;
-(void)mqttClientDidSendSubscribeMessage:(id)arg1 ;
-(void)mqttClientDidSendUnsubscribeMessage:(id)arg1 ;
-(void)mqttClient:(id)arg1 didSendMessage:(id)arg2 ;
-(void)mqttClient:(id)arg1 didConnectWithPayload:(id)arg2 ;
-(void)mqttClient:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)mqttClient:(id)arg1 didPublishMessage:(id)arg2 ;
-(void)mqttClientCouldNotConnect:(id)arg1 error:(id)arg2 ;
-(void)mqttClientDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)mqttClient:(id)arg1 couldNotPublishMessage:(id)arg2 error:(id)arg3 ;
-(void)mqttClient:(id)arg1 didSendConnectWithPayloadSize:(unsigned long long)arg2 ;
-(void)mqttClientDidSendDisconnect:(id)arg1 ;
-(void)mqttClientDidReceiveDisconnect:(id)arg1 ;
-(void)mqttClientDidReceivePingResponse:(id)arg1 ;
-(void)mqttClientDidSubscribe:(id)arg1 ;
-(void)resumeForegroundKeepAlive;
-(void)networkStatusChangedFrom:(long long)arg1 to:(long long)arg2 ;
-(id)initWithMQTTClientCreationBlock:(/*^block*/id)arg1 notificationCenter:(id)arg2 experiments:(id)arg3 ;
-(void)createNewNetworkSessionId;
-(void)setUsernameKeyValueDictionary:(NSMutableDictionary *)arg1 ;
-(void)setPatternListeners:(NSMutableDictionary *)arg1 ;
-(void)setSuspendedListeners:(NSMutableSet *)arg1 ;
-(void)setQueuedPublishers:(NSMutableSet *)arg1 ;
-(void)setConnectCombinedPublishers:(NSDictionary *)arg1 ;
-(id)getClientSettings;
-(id)_getEncodingFormatString;
-(void)_setupMQTTPayloadFormat;
-(void)setCredentialsAvailableBlock:(id)arg1 ;
-(void)setCredentialsFetcherBlock:(id)arg1 ;
-(void)setUserAgentFormatterBlock:(id)arg1 ;
-(void)setGetDiffProviderBlock:(id)arg1 ;
-(void)setShowOnlineBlock:(id)arg1 ;
-(void)_fetchCredentialsAndUserAgentThenStartClientIfCredentialsAvailableWithHostName:(id)arg1 caller:(id)arg2 ;
-(void)_postConnectivityNotification:(long long)arg1 ;
-(id)_allTopics;
-(id)getDiffProviderBlock;
-(id)_pendingSendMessagePublishsers;
-(id)_constructPublishMessagesForConnect:(id)arg1 ;
-(int)_getEncodingFormat;
-(FBMQTTSocketConfig *)socketConfig;
-(void)setClientKeepAliveTimes;
-(void)onConnectTimeoutFired:(id)arg1 ;
-(void)setConnectTimer:(NSTimer *)arg1 ;
-(void)setConnectStartDate:(NSDate *)arg1 ;
-(void)setBgPingState:(long long)arg1 ;
-(void)triggerFastReconnect:(BOOL)arg1 resetReconnectDelay:(BOOL)arg2 ;
-(void)setTotalBgPingSentSinceConnected:(int)arg1 ;
-(void)setTotalDisconnectOnBgPing:(int)arg1 ;
-(void)pauseForegroundKeepAliveIfNeeded;
-(id)_removeListenerWithBackgroundPolicy:(unsigned long long)arg1 ;
-(id)_addListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)publishForegroundState:(BOOL)arg1 subscribeTopics:(id)arg2 unsubscribeTopics:(id)arg3 ;
-(long long)bgPingState;
-(void)setReconnectBgBackoffStartDate:(NSDate *)arg1 ;
-(void)_logConnect:(id)arg1 error:(id)arg2 ;
-(void)_refreshDNSCacheIfNeeded:(id)arg1 ;
-(void)resetClient:(id)arg1 ;
-(BOOL)_hasShouldRetryMessage;
-(void)triggerBackOffReconnect;
-(void)cancelPublishers:(id)arg1 error:(id)arg2 ;
-(BOOL)_doesListener:(id)arg1 haveBackgroundPolicy:(unsigned long long)arg2 ;
-(BOOL)_shouldAddListener:(id)arg1 ;
-(void)subscribeListeners:(id)arg1 ;
-(BOOL)_addToPatternListeners:(id)arg1 ;
-(void)_subscribeToPatternsAndPostNotification:(id)arg1 topicSubscribedByConnect:(id)arg2 ;
-(BOOL)_removeFromPatternListeners:(id)arg1 ;
-(void)_unsubscribeFromPatterns:(id)arg1 ;
-(void)_logPublish:(id)arg1 publisher:(id)arg2 error:(id)arg3 ;
-(void)addPublisherToQueue:(id)arg1 ;
-(void)onPublishFirstTimeout:(id)arg1 ;
-(void)onPublishTimeout:(id)arg1 ;
-(void)_encodePublisherMessageThenDispatchToClient:(id)arg1 ;
-(void)_updateMessagePayloadIfNeeded:(id)arg1 ;
-(void)_convertPublisherToUseEnumTopicIfNeeded:(id)arg1 ;
-(BOOL)_supportEnumTopic;
-(id)_createEncodedMessage:(id)arg1 payload:(id)arg2 qos:(int)arg3 ;
-(void)setReconnectTimer:(NSTimer *)arg1 ;
-(void)setReconnectMode:(long long)arg1 ;
-(void)setReconnectDelay:(double)arg1 ;
-(void)setTotalReconnectTimes:(int)arg1 ;
-(void)setFastReconnectTimes:(int)arg1 ;
-(long long)reconnectMode;
-(void)initializeClient;
-(void)onReconnectTimerFired:(id)arg1 ;
-(BOOL)_isAuthenticationFailure:(id)arg1 ;
-(void)_publishCombinedForegroundState:(BOOL)arg1 subscribeTopics:(id)arg2 unsubscribeTopics:(id)arg3 ;
-(void)_postPatternSubscribedNotification:(id)arg1 topicsSubscribedByConnect:(id)arg2 ;
-(id)_parseConnAckPayload:(id)arg1 ;
-(void)_processPubAcksFromConnAck:(id)arg1 ;
-(BOOL)triggerKeepAliveBackOffOnDisconnect;
-(void)_handleEligibilityCheckMessage:(id)arg1 ;
-(void)_logAnalyticsError:(/*^block*/id)arg1 ;
-(void)_publishNetworkOutgoingEvent:(long long)arg1 topic:(id)arg2 ;
-(int)_keepAliveTimeoutForForegroundState:(BOOL)arg1 ;
-(id)credentialsAvailableBlock;
-(id)credentialsFetcherBlock;
-(id)userAgentFormatterBlock;
-(id)_formatInvalidCredentialForLogging:(id)arg1 ;
-(void)_startWithCredentials:(id)arg1 userAgent:(id)arg2 ;
-(long long)_getNextConnMsgId;
-(NSDate *)connectStartDate;
-(id)initWithMQTTClientCreationBlock:(/*^block*/id)arg1 notificationCenter:(id)arg2 ;
-(BOOL)sSLDisabled;
-(BOOL)encodingDisabled;
-(id)currentlySuspendedListeners;
-(id)currentlySubscribedListeners;
-(void)testingMQTTClient:(id)arg1 didReceiveJSONMessage:(id)arg2 ;
-(void)setEndpointCapabilities:(FBMQTTChannelEndpointCapabilities *)arg1 ;
-(void)setMqttSessionId:(NSString *)arg1 ;
-(id)clientCreationBlock;
-(void)setClientCreationBlock:(id)arg1 ;
-(NSMutableDictionary *)usernameKeyValueDictionary;
-(NSTimer *)connectTimer;
-(NSTimer *)reconnectTimer;
-(NSMutableDictionary *)patternListeners;
-(NSMutableSet *)suspendedListeners;
-(NSMutableSet *)queuedPublishers;
-(NSDictionary *)connectCombinedPublishers;
-(double)reconnectDelay;
-(int)totalReconnectTimes;
-(int)fastReconnectTimes;
-(int)totalBgPingSentSinceConnected;
-(int)totalDisconnectOnBgPing;
-(NSDate *)reconnectBgBackoffStartDate;
-(NSMutableSet *)subscribedTopicsOnConnect;
-(void)setSubscribedTopicsOnConnect:(NSMutableSet *)arg1 ;
-(id)showOnlineBlock;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDelegate:(id<FBMQTTClientManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBMQTTClientManagerDelegate>)delegate;
-(long long)state;
-(FBMQTTConfigurations *)config;
-(FBMQTTClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(FBMQTTClientCapabilities *)arg1 ;
-(void)setPublishers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)publishers;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setClient:(id<FBMQTTClient>)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)scheduleReconnect;
-(BOOL)isConnected;
-(BOOL)started;
-(BOOL)reachable;
-(void)setReachable:(BOOL)arg1 ;
-(id<FBMQTTClient>)client;
-(long long)clientState;
-(void)setClientState:(long long)arg1 ;
@end

