/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBRealtimeAnalyticsLogger;
#import <Messenger/Messenger-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary, FBAnalyticsDiagnosticInfo, NSObject, FBExceptionHandler, FBAnalyticsLoggingPolicy, NSArray, FBAnalyticsLogFileHelper, FBAnalyticsContextThriftLogger, FBAnalyticsWifiUploadingHelper;

@interface FBAnalyticsContext : NSObject {

	NSString* _applicationID;
	unsigned long long _batchLogCountThreshold;
	unsigned long long _networkErrorRetryCount;
	unsigned long long _serverErrorRetryCount;
	unsigned long long _POSIXErrorRetryCount;
	NSString* _channelDescription;
	NSString* _deviceID;
	NSString* _userFBID;
	BOOL _isUserIDSet;
	NSMutableArray* _tempLogsWithoutUserIDSet;
	BOOL _enabled;
	unsigned long long _globalBeaconCount;
	unsigned long long _globalBeaconSessionId;
	unsigned long long _globalRealtimeBeaconCount;
	unsigned long long _globalBatchCount;
	unsigned long long _globalEventCountSinceLastBeacon;
	unsigned long long _globalRealtimeEventCountSinceLastBeacon;
	NSString* _logDirectoryPath;
	NSString* _logBeaconFilePath;
	NSMutableDictionary* _pendingCounters;
	NSMutableArray* _pendingLogs;
	NSMutableArray* _processingCompletionBlocks;
	BOOL _processingLogFiles;
	unsigned long long _maxNumberOfLogFilesOnDisk;
	FBAnalyticsDiagnosticInfo* _diagnosticInfo;
	/*^block*/id _requestBlock;
	/*^block*/id _binaryUploadRequestBlock;
	/*^block*/id _requestBlockWifiNoRetry;
	/*^block*/id _overwriteMetadataBlock;
	NSString* _sessionID;
	unsigned long long _sessionSequence;
	NSObject*<OS_dispatch_queue> _processingQueue;
	FBExceptionHandler* _exceptionHandler;
	FBAnalyticsLoggingPolicy* _loggingPolicy;
	unsigned long long _networkPriority;
	NSArray* _objectsThatAddMetadataToLogs;
	long long _savedPendingLogsCount;
	FBAnalyticsLogFileHelper* _logFileHelper;
	atomic<double> _logUploadPauseTimeout;
	NSMutableArray* _batchWorkersList;
	FBAnalyticsContextThriftLogger* _binaryLogger;
	FBAnalyticsWifiUploadingHelper* _wifiUpHelper;
	BOOL _enableAutomaticSending;
	BOOL _systemClockDidChange;
	BOOL _useBinaryUpload;
	BOOL _useWifiUpload;
	BOOL _useMultiBatch;
	id<FBRealtimeAnalyticsLogger> _realtimeAnalytics;
	NSString* _analyticsID;
	NSString* _bundleID;
	unsigned long long _maxNetworkErrorCount;
	unsigned long long _maxPOSIXErrorCount;
	unsigned long long _multiBatchFileSizeThreshold;
	unsigned long long _multiBatchEventCountThreshold;

}

@property (assign,nonatomic) unsigned long long networkErrorRetryCount;                           //@synthesize networkErrorRetryCount=_networkErrorRetryCount - In the implementation block
@property (assign,nonatomic) unsigned long long serverErrorRetryCount;                            //@synthesize serverErrorRetryCount=_serverErrorRetryCount - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned long long sessionSequence;                                  //@synthesize sessionSequence=_sessionSequence - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingLogs;                                      //@synthesize pendingLogs=_pendingLogs - In the implementation block
@property (nonatomic,copy,readonly) NSString * logDirectoryPath;                                  //@synthesize logDirectoryPath=_logDirectoryPath - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL enableAutomaticSending;                                                   //@synthesize enableAutomaticSending=_enableAutomaticSending - In the implementation block
@property (assign,nonatomic) BOOL systemClockDidChange;                                           //@synthesize systemClockDidChange=_systemClockDidChange - In the implementation block
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler;                               //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBRealtimeAnalyticsLogger> realtimeAnalytics;              //@synthesize realtimeAnalytics=_realtimeAnalytics - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsID;                                       //@synthesize analyticsID=_analyticsID - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                                   //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * userFBID;                                                   //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,readonly) double currentTimestamp; 
@property (assign,nonatomic) unsigned long long batchLogCountThreshold;                           //@synthesize batchLogCountThreshold=_batchLogCountThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long maxNetworkErrorCount;                             //@synthesize maxNetworkErrorCount=_maxNetworkErrorCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxPOSIXErrorCount;                               //@synthesize maxPOSIXErrorCount=_maxPOSIXErrorCount - In the implementation block
@property (assign,nonatomic) BOOL useBinaryUpload;                                                //@synthesize useBinaryUpload=_useBinaryUpload - In the implementation block
@property (assign,nonatomic) BOOL useWifiUpload;                                                  //@synthesize useWifiUpload=_useWifiUpload - In the implementation block
@property (assign,nonatomic) BOOL useMultiBatch;                                                  //@synthesize useMultiBatch=_useMultiBatch - In the implementation block
@property (assign,nonatomic) unsigned long long multiBatchFileSizeThreshold;                      //@synthesize multiBatchFileSizeThreshold=_multiBatchFileSizeThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long multiBatchEventCountThreshold;                    //@synthesize multiBatchEventCountThreshold=_multiBatchEventCountThreshold - In the implementation block
+(id)_applicationVersion;
+(id)_osBuildNumber;
-(NSString *)userFBID;
-(void)pauseNonRealtimeLogUploadTTL:(double)arg1 ;
-(void)resumeNonRealtimeLogUpload;
-(void)setUserFBID:(NSString *)arg1 ;
-(void)setAnalyticsConfiguration:(id)arg1 ;
-(unsigned long long)samplingFrequencyForEvent:(id)arg1 tag:(id)arg2 ;
-(id)getRegularChannelDiagnosticInfo;
-(id)getAdsChannelDiagnosticInfo;
-(void)setUseBinaryUpload:(BOOL)arg1 ;
-(void)setEnableAutomaticSending:(BOOL)arg1 ;
-(long long)savePendingLogs;
-(BOOL)enableAutomaticSending;
-(BOOL)processLogFiles:(/*^block*/id)arg1 ;
-(void)savePendingCounters;
-(void)addWillSavePendingDelegate:(id)arg1 ;
-(void)removeWillSavePendingDelegate:(id)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 objectType:(id)arg3 objectID:(id)arg4 uuid:(id)arg5 extra:(id)arg6 timestamp:(double)arg7 ;
-(void)logEventBGWithBatchSize:(id)arg1 module:(id)arg2 objectType:(id)arg3 objectID:(id)arg4 uuid:(id)arg5 extra:(id)arg6 timestamp:(double)arg7 batchEventCountLimit:(unsigned long long)arg8 ;
-(void)logEventBG:(id)arg1 module:(id)arg2 objectType:(id)arg3 objectID:(id)arg4 uuid:(id)arg5 extra:(id)arg6 timestamp:(double)arg7 ;
-(unsigned long long)samplingFrequencyForEvent:(id)arg1 ;
-(void)changeWifiPreferredDelayUploadTimeout:(double)arg1 ;
-(BOOL)willLogEvent:(id)arg1 ;
-(void)addCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 uuid:(id)arg4 ;
-(void)logBinaryEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraData:(id)arg4 ;
-(void)setUseMultiBatch:(BOOL)arg1 ;
-(void)setMultiBatchEventCountThreshold:(unsigned long long)arg1 ;
-(void)setMultiBatchFileSizeThreshold:(unsigned long long)arg1 ;
-(void)setBatchLogCountThreshold:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 userFBID:(id)arg2 logDirectoryPath:(id)arg3 networkPriority:(unsigned long long)arg4 processingQueue:(id)arg5 batchLogCountThreshold:(unsigned long long)arg6 maxNetworkErrorRetryCount:(unsigned long long)arg7 channelDescription:(id)arg8 useWifiUpload:(BOOL)arg9 ;
-(void)setRealtimeAnalytics:(id<FBRealtimeAnalyticsLogger>)arg1 ;
-(void)connectionTypeChangedToWifi;
-(id)initWithConfiguration:(id)arg1 userFBID:(id)arg2 logDirectoryPath:(id)arg3 networkPriority:(unsigned long long)arg4 processingQueue:(id)arg5 batchLogCountThreshold:(unsigned long long)arg6 maxNetworkErrorRetryCount:(unsigned long long)arg7 channelDescription:(id)arg8 useWifiUpload:(BOOL)arg9 userDefaults:(id)arg10 ;
-(id)_convertEventToDictionary:(id)arg1 module:(id)arg2 objectType:(id)arg3 objectID:(id)arg4 uuid:(id)arg5 extra:(id)arg6 timestamp:(double)arg7 ;
-(void)_logEventInMemory:(id)arg1 module:(id)arg2 objectType:(id)arg3 objectID:(id)arg4 uuid:(id)arg5 extra:(id)arg6 timestamp:(double)arg7 ;
-(BOOL)_saveEventsToDiskInBatch;
-(void)_sendEventsToNetwork;
-(void)addPendingEvent:(id)arg1 module:(id)arg2 objectType:(id)arg3 objectID:(id)arg4 uuid:(id)arg5 extra:(id)arg6 timestamp:(double)arg7 ;
-(void)_incrementGlobalEventCount;
-(unsigned long long)batchLogCountThreshold;
-(BOOL)_saveEventsToDiskInBatchWithEventCountLimit:(unsigned long long)arg1 ;
-(BOOL)useBinaryUpload;
-(BOOL)_processLogFiles:(/*^block*/id)arg1 mayPreferWifi:(BOOL)arg2 ;
-(BOOL)_processNextLogFileAnyConnType;
-(BOOL)processNextLogFile;
-(BOOL)_processNextLogFile:(/*^block*/id)arg1 ;
-(id)_combineSmallBatches:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(BOOL)_sendAnalyticsLogsInFile:(id)arg1 binary:(BOOL)arg2 wifiRequestBlock:(/*^block*/id)arg3 ;
-(void)_decrementSavedPendingLogsCount;
-(void)setNetworkErrorRetryCount:(unsigned long long)arg1 ;
-(void)setServerErrorRetryCount:(unsigned long long)arg1 ;
-(void)scheduleRetryWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)networkErrorRetryCount;
-(unsigned long long)serverErrorRetryCount;
-(void)resetRetryCounters;
-(void)removePendingLogAtPath:(id)arg1 ;
-(void)_prepareToSendNextLogFile;
-(void)_trashPendingLogsInFiles:(id)arg1 withFileManager:(id)arg2 withReason:(id)arg3 withErrorMessage:(id)arg4 ;
-(unsigned long long)maxNetworkErrorCount;
-(void)_prepareToResendCurrentLogFile;
-(void)scheduleRetry;
-(void)_sendLogsInFileTrashUnprocessedLogFile:(id)arg1 withFileName:(id)arg2 ;
-(void)_sendLogsInFileFailureBlock:(id)arg1 withFileName:(id)arg2 ;
-(void)_sendLogsInFileFinishProcessingLogFile:(id)arg1 ;
-(void)_updateFDIDwithAnalyticsResponse:(id)arg1 ;
-(void)_sendLogsInFileSuccessBlock:(id)arg1 withFileName:(id)arg2 isBinaryFile:(BOOL)arg3 ;
-(void)_sendLogsInFileFailureBlockDispatch:(id)arg1 withFileName:(id)arg2 ;
-(void)_sendLogsInFileSuccessBlockDispatch:(id)arg1 withFileName:(id)arg2 isBinaryFile:(BOOL)arg3 ;
-(BOOL)_sendAnalyticsJSONLog:(id)arg1 isMultiBatch:(BOOL)arg2 wifiRequestBlock:(/*^block*/id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(BOOL)_sendAnalyticsBinaryLog:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_deleteTrashedLogs;
-(void)_initializeSavedPendingLogCount;
-(void)executeBatchWorkers;
-(id)newJSONDictionaryForPendingLogs:(id)arg1 sessionSequence:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(void)_incrementSavedPendingLogsCount;
-(void)_incrementGlobalBatchCount;
-(void)beginSessionWithoutBeaconEventLog;
-(void)_endBeaconSession;
-(void)_initBeacon;
-(NSString *)analyticsID;
-(BOOL)_processLogFilesAnyConnType:(/*^block*/id)arg1 ;
-(void)_zeroUserFBIDFromLogFiles:(id)arg1 ;
-(void)_movePendingLogsOutOfTempTable;
-(void)_readBeaconFromDisk;
-(void)_incrementGlobalBeaconCount;
-(void)_logMarauderBeaconEvent;
-(unsigned long long)_generateRandomSessionId;
-(void)_synchronizeBeaconToDisk;
-(id)_getAdsChannelDiagnosticDictionary;
-(id)_getRegularChannelDiagnosticDictionary;
-(void)addCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 ;
-(void)resetBeaconIds;
-(BOOL)systemClockDidChange;
-(void)setSystemClockDidChange:(BOOL)arg1 ;
-(id<FBRealtimeAnalyticsLogger>)realtimeAnalytics;
-(void)setMaxNetworkErrorCount:(unsigned long long)arg1 ;
-(unsigned long long)maxPOSIXErrorCount;
-(void)setMaxPOSIXErrorCount:(unsigned long long)arg1 ;
-(BOOL)useWifiUpload;
-(void)setUseWifiUpload:(BOOL)arg1 ;
-(BOOL)useMultiBatch;
-(unsigned long long)multiBatchFileSizeThreshold;
-(unsigned long long)multiBatchEventCountThreshold;
-(unsigned long long)sessionSequence;
-(void)setSessionSequence:(unsigned long long)arg1 ;
-(NSMutableArray *)pendingLogs;
-(FBExceptionHandler *)exceptionHandler;
-(NSString *)logDirectoryPath;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(double)currentTimestamp;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(double)timeDelta;
-(void)beginSession;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

