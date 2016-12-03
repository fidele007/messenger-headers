/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBReachabilityListener.h>
#import <Messenger/FBRealtimeAnalyticsLogger.h>
#import <Messenger/FBSoftErrorReporter.h>
#import <Messenger/FBAnalyticsProtocol.h>
#import <Messenger/FBAnalyticsTimeSpentDelegate.h>

@protocol FBAnalyticsConfiguration, OS_dispatch_queue, FBBackgroundStateManaging;
@class NSObject, FBAnalyticsContext, NSString, FBTimer, NSMutableDictionary, FBReachabilityAnnouncer, FBRadioTechnologyFetcher, FBAnalyticsLocalStorageSetter, NSMutableArray, FBAnalyticsTimeSpent;

@interface FBAnalytics : NSObject <FBReachabilityListener, FBRealtimeAnalyticsLogger, FBSoftErrorReporter, FBAnalyticsProtocol, FBAnalyticsTimeSpentDelegate> {

	id<FBAnalyticsConfiguration> _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	FBAnalyticsContext* _contextRegular;
	FBAnalyticsContext* _contextLowLatencyLowLoss;
	FBAnalyticsContext* _contextWifiUpload;
	NSString* _userFBID;
	/*^block*/id _requestTimeSpentPingBlock;
	FBTimer* _timer;
	unsigned long long _flushInterval;
	NSMutableDictionary* _navigationObservers;
	NSMutableDictionary* _navigationObserverCount;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	id _reachabilityAnnouncerSubscription;
	unsigned long long _reachabilityState;
	id _radioTechnologyStatusObserver;
	NSString* _radioTechnology;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	FBAnalyticsLocalStorageSetter* _localStorageSetter;
	double _lastActivityTime;
	mutex _sampledLock;
	BOOL _sampled;
	NSMutableArray* _blocksToExecuteWhenSampledSet;
	atomic<bool> _queueSuspended;
	FBAnalyticsModuleStack* _moduleStack;
	id<FBBackgroundStateManaging> _backgroundStateManager;
	unsigned long long _bgTaskId;
	BOOL _testWifiPreferred;
	BOOL _useNewBgLogging;
	BOOL _noTimedUploadInBG;
	BOOL _doNotUseBGTaskInBG;
	BOOL _enableFBA2;
	BOOL _enableDeprecateOldAPI;
	NSString* _logDirectoryPathRegular;
	NSString* _logDirectoryPathLowLatencyLowLoss;
	NSString* _logDirectoryPathWifiUpload;
	BOOL _schemaValidationEnabled;
	BOOL _logForegroundEventInRealtime;
	BOOL _useCurrentTimestampForTouchEvents;
	BOOL _inNavigationLoggingFixHoldout;
	NSString* _lastNavigationTapPoint;
	NSString* _currentNavigationModule;
	FBAnalyticsTimeSpent* _timeSpent;

}

@property (nonatomic,retain) FBAnalyticsTimeSpent * timeSpent;                                                         //@synthesize timeSpent=_timeSpent - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                                               //@synthesize queue=_queue - In the implementation block
@property (getter=isSampled) BOOL sampled; 
@property (nonatomic,copy) NSString * lastNavigationTapPoint;                                                          //@synthesize lastNavigationTapPoint=_lastNavigationTapPoint - In the implementation block
@property (nonatomic,copy) NSString * currentNavigationModule;                                                         //@synthesize currentNavigationModule=_currentNavigationModule - In the implementation block
@property (assign,nonatomic) BOOL schemaValidationEnabled;                                                             //@synthesize schemaValidationEnabled=_schemaValidationEnabled - In the implementation block
@property (assign,getter=shouldLogForegroundEventInRealtime,nonatomic) BOOL logForegroundEventInRealtime;              //@synthesize logForegroundEventInRealtime=_logForegroundEventInRealtime - In the implementation block
@property (assign,nonatomic) BOOL useCurrentTimestampForTouchEvents;                                                   //@synthesize useCurrentTimestampForTouchEvents=_useCurrentTimestampForTouchEvents - In the implementation block
@property (assign,nonatomic) BOOL inNavigationLoggingFixHoldout;                                                       //@synthesize inNavigationLoggingFixHoldout=_inNavigationLoggingFixHoldout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSharedAnalytics:(id)arg1 ;
+(id)_stringForNativeAdBlockClickType:(unsigned long long)arg1 ;
+(BOOL)hasSharedAnalytics;
+(void)resetSharedAnalytics;
+(id)sharedAnalytics;
-(id)initWithConfiguration:(id)arg1 logDirectoryPath:(id)arg2 queueDelay:(unsigned long long)arg3 ;
-(void)observeEverything;
-(void)logEvent:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
-(void)toggleState:(unsigned long long)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)setLastNavigationTapPoint:(NSString *)arg1 ;
-(void)logCounter:(id)arg1 ;
-(NSString *)lastNavigationTapPoint;
-(void)suspendQueueForSeconds:(unsigned long long)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 ;
-(void)logPerfRequest:(id)arg1 withURL:(id)arg2 requestBeginTime:(double)arg3 responseEndTime:(double)arg4 requestType:(id)arg5 requestComponent:(id)arg6 bytesUp:(long long)arg7 bytesDown:(long long)arg8 expectedBytesDownOnWire:(long long)arg9 success:(BOOL)arg10 ;
-(void)setUserFBID:(id)arg1 application:(id)arg2 analyticsConfiguration:(id)arg3 ;
-(void)logRealtimeEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)observeNavigationController:(id)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extraObjectsAndKeys:(id)arg3 ;
-(void)logNavigationEventFromViewController:(id)arg1 toViewController:(id)arg2 depth:(unsigned long long)arg3 ;
-(void)unobserveNavigationController:(id)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 value:(double)arg3 ;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraBlock:(/*^block*/id)arg4 ;
-(void)enableDeprecateOldAPI:(BOOL)arg1 ;
-(void)testWifiPreferredWithTimeout:(long long)arg1 ;
-(void)switchOnNewBackgroundLogging:(BOOL)arg1 ;
-(void)recordBundleID;
-(void)switchOnMultiBatchWithMaxEventCount:(BOOL)arg1 enableWiFiChannel:(BOOL)arg2 maxEventCount:(long long)arg3 maxBatchFileSize:(long long)arg4 ;
-(void)enableFBAnalytics2withFBACore;
-(void)enableFBACoreMultiBatchUpload:(long long)arg1 ;
-(void)setBiggerBatchLimit:(unsigned long long)arg1 flushInterval:(unsigned long long)arg2 enabled:(BOOL)arg3 ;
-(void)avoidUploadInBG:(BOOL)arg1 noBGTask:(BOOL)arg2 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 ;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraBlock:(/*^block*/id)arg4 timestamp:(double)arg5 ;
-(void)pauseNonRealtimeLogUploadTTL:(double)arg1 ;
-(void)resumeNonRealtimeLogUpload;
-(void)notifyTimeSpentInNoninteractiveEvent:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 ;
-(BOOL)isSampled;
-(void)logEventTestWifiPreferred:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)logRealtimeEvent:(id)arg1 analyticsInfo:(id)arg2 extra:(id)arg3 ;
-(void)logNativeArticleNativeAdImpressionWithBlockID:(id)arg1 analyticsInfo:(id)arg2 ;
-(void)logNativeArticleNativeAdClickWithClickType:(unsigned long long)arg1 blockID:(id)arg2 analyticsInfo:(id)arg3 ;
-(void)logNativeArticleNativeAdPerfWithBlockID:(id)arg1 analyticsInfo:(id)arg2 ;
-(void)logNativeArticleNativeAdInvalidationWithReason:(id)arg1 blockID:(id)arg2 analyticsInfo:(id)arg3 ;
-(void)send360AnalyticsEvent:(id)arg1 forSurface:(id)arg2 photoId:(id)arg3 ;
-(double)currentAnalyticsTimeStamp;
-(void)processTouchEvent:(double)arg1 ;
-(void)send360AnalyticsEvent:(id)arg1 forSurface:(id)arg2 composerSessionId:(id)arg3 ;
-(void)logCounter:(id)arg1 value:(id)arg2 ;
-(void)userAttemptedLogOut;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 value:(double)arg4 extraBlock:(/*^block*/id)arg5 ;
-(FBAnalyticsTimeSpent *)timeSpent;
-(void)logEvent:(id)arg1 module:(id)arg2 value:(double)arg3 extraBlock:(/*^block*/id)arg4 ;
-(void)flushPendingLogs:(BOOL)arg1 ;
-(void)logNetworkRequestWithURL:(id)arg1 queueAddTime:(double)arg2 requestBeginTime:(double)arg3 requestEndTime:(double)arg4 responseBeginTime:(double)arg5 responseEndTime:(double)arg6 bytesUp:(long long)arg7 bytesDown:(long long)arg8 expectedBytesDownOnWire:(long long)arg9 success:(BOOL)arg10 ;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned long long)arg4 extraBlock:(/*^block*/id)arg5 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4 ;
-(void)processNow:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(BOOL)shouldLogForegroundEventInRealtime;
-(id)radioTechnologyFetcher;
-(void)syncFBAnalyticsQueue;
-(void)logEventForFunnel:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
-(unsigned long long)samplingFrequencyForEvent:(id)arg1 tag:(id)arg2 ;
-(void)logEvent:(id)arg1 analyticsInfo:(id)arg2 extra:(id)arg3 ;
-(BOOL)createDirectoryAtPath:(id)arg1 fileManager:(id)arg2 ;
-(id)newContextWithConfiguration:(id)arg1 logDirectoryPath:(id)arg2 networkPriority:(unsigned long long)arg3 processingQueue:(id)arg4 batchLogCountThreshold:(unsigned long long)arg5 maxNetworkErrorRetryCount:(unsigned long long)arg6 channelDescription:(id)arg7 useWifiUpload:(BOOL)arg8 ;
-(void)startTimers;
-(void)_bugReportSnapshot:(id)arg1 ;
-(void)systemClockDidChangeNotification:(id)arg1 ;
-(void)willHandleException:(id)arg1 ;
-(void)executeOnEveryContext:(/*^block*/id)arg1 ;
-(void)_unobserveReachabilityStatus;
-(void)_unobserveRadioTechnologyStatus;
-(void)_recordBugStateForCollector:(id)arg1 ;
-(void)setUseBinaryUpload:(BOOL)arg1 ;
-(void)_flushPendingLogsAsynchronouslyWithCompleter:(id)arg1 ;
-(void)addWillSavePendingDelegate:(id)arg1 ;
-(void)removeWillSavePendingDelegate:(id)arg1 ;
-(void)_logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4 contextType:(unsigned long long)arg5 ;
-(void)_logEventInBackground:(id)arg1 eventName:(id)arg2 module:(id)arg3 objectType:(id)arg4 objectID:(id)arg5 uuid:(id)arg6 extra:(id)arg7 timestamp:(double)arg8 ;
-(void)_logEventInBackgroundWithoutTask:(id)arg1 eventName:(id)arg2 module:(id)arg3 objectType:(id)arg4 objectID:(id)arg5 uuid:(id)arg6 extra:(id)arg7 timestamp:(double)arg8 ;
-(void)_logEventInBackgroundTask:(id)arg1 eventName:(id)arg2 module:(id)arg3 objectType:(id)arg4 objectID:(id)arg5 uuid:(id)arg6 extra:(id)arg7 timestamp:(double)arg8 ;
-(void)_saveToDiskAndEndTask:(id)arg1 ;
-(void)logEventWifiPreferred:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 timestamp:(double)arg4 ;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned long long)arg4 value:(id)arg5 extraBlock:(/*^block*/id)arg6 timestamp:(double)arg7 wifiPreferred:(BOOL)arg8 ;
-(void)logEventWifiPreferred:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4 ;
-(void)logEventWifiPreferred:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)logRealtimeEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4 ;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned long long)arg4 value:(id)arg5 extraBlock:(/*^block*/id)arg6 timestamp:(double)arg7 ;
-(unsigned long long)_wrapArc4RandomUniform:(unsigned long long)arg1 ;
-(void)_logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 uuid:(id)arg4 ;
-(void)logBinaryEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraData:(id)arg4 ;
-(void)_observeReachabilityStatus;
-(void)_observeRadioTechnologyStatus;
-(void)_updateExceptionShownModule:(id)arg1 ;
-(void)_radioTechnologyStatusDidChange;
-(void)_logReachabilityState:(unsigned long long)arg1 radioTechnology:(id)arg2 ;
-(void)logNavigationEventFromViewController:(id)arg1 toViewController:(id)arg2 depth:(unsigned long long)arg3 animationDuration:(double)arg4 ;
-(BOOL)inNavigationLoggingFixHoldout;
-(void)_updateExceptionTopViewController:(id)arg1 moduleName:(id)arg2 ;
-(void)setCurrentNavigationModule:(NSString *)arg1 ;
-(void)_willShowViewControllerWithNotification:(id)arg1 ;
-(void)_didShowViewControllerWithNotification:(id)arg1 ;
-(id)contextForChannel:(int)arg1 ;
-(void)logEventWifiPreferred:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
-(void)analyticsTimeSpent:(id)arg1 didProduceBitArray:(id)arg2 ;
-(void)analyticsTimeSpent:(id)arg1 didProduceImmediateActiveSecondsData:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 logDirectoryPath:(id)arg2 ;
-(BOOL)getQueueSuspended;
-(void)setUserFBID:(id)arg1 application:(id)arg2 ;
-(void)setSampled:(BOOL)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned long long)arg4 value:(double)arg5 extraBlock:(/*^block*/id)arg6 ;
-(void)logModuleVisibility:(id)arg1 moduleViewController:(id)arg2 className:(id)arg3 otherModule:(id)arg4 otherClassName:(id)arg5 uuid:(id)arg6 show:(BOOL)arg7 extra:(id)arg8 ;
-(void)logContent:(id)arg1 className:(id)arg2 uuid:(id)arg3 state:(unsigned long long)arg4 extra:(id)arg5 ;
-(void)logManualRefresh:(id)arg1 className:(id)arg2 uuid:(id)arg3 ;
-(void)usePigeonSharedPhoneID:(BOOL)arg1 ;
-(NSString *)currentNavigationModule;
-(BOOL)schemaValidationEnabled;
-(void)setSchemaValidationEnabled:(BOOL)arg1 ;
-(void)setLogForegroundEventInRealtime:(BOOL)arg1 ;
-(BOOL)useCurrentTimestampForTouchEvents;
-(void)setUseCurrentTimestampForTouchEvents:(BOOL)arg1 ;
-(void)setInNavigationLoggingFixHoldout:(BOOL)arg1 ;
-(void)setTimeSpent:(FBAnalyticsTimeSpent *)arg1 ;
-(void)cancelTimers;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setExceptionHandler:(id)arg1 ;
@end

