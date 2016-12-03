/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExceptionHandlerStackRecording.h>

@protocol FBDidSendExceptionsHandlerProtocol;
@class FBExceptionHandlerAppSpecificConfiguration, NSFileManager, FBBuild, NSString, NSURL, NSMutableDictionary, NSArray, FBExceptionHandlerListenerAnnouncer, FBBreakpadExceptionHandler, FBWatchdogTimer;

@interface FBExceptionHandler : NSObject <FBExceptionHandlerStackRecording> {

	FBExceptionHandlerAppSpecificConfiguration* _appSpecificConfiguration;
	id _appDidBecomeActiveObserver;
	NSFileManager* _fileManager;
	FBBuild* _build;
	NSString* _deviceID;
	NSURL* _exceptionURL;
	int _exceptionPid;
	NSString* _userID;
	NSString* _sessionID;
	double _reportPercentage;
	BOOL _isProductionBuild;
	BOOL _isQuickAssertEnabled;
	BOOL _isCrashReportProcessingComplete;
	NSMutableDictionary* _appSessionExceptionHandlers;
	NSArray* _logFilePathsToUpload;
	FBExceptionHandlerListenerAnnouncer* _announcer;
	int _breakpadCrashCountOnStartup;
	FBBreakpadExceptionHandler* _breakpadExceptionHandler;
	Class _diskCleanupClass;
	FBWatchdogTimer* _watchdog;
	id<FBDidSendExceptionsHandlerProtocol> _didSendExceptionsHandler;
	NSString* _exceptionDirectory;

}

@property (nonatomic,copy,readonly) NSString * exceptionDirectory;                                         //@synthesize exceptionDirectory=_exceptionDirectory - In the implementation block
@property (nonatomic,readonly) FBWatchdogTimer * watchdog;                                                 //@synthesize watchdog=_watchdog - In the implementation block
@property (assign,nonatomic) double reportPercentage;                                                      //@synthesize reportPercentage=_reportPercentage - In the implementation block
@property (nonatomic,retain) NSURL * exceptionURL;                                                         //@synthesize exceptionURL=_exceptionURL - In the implementation block
@property (assign,nonatomic) BOOL userIsEmployee; 
@property (nonatomic,retain) id<FBDidSendExceptionsHandlerProtocol> didSendExceptionsHandler;              //@synthesize didSendExceptionsHandler=_didSendExceptionsHandler - In the implementation block
+(id)currentExceptionHandler;
-(id)initWithBuild:(id)arg1 appSpecificConfiguration:(id)arg2 application:(id)arg3 isProductionBuild:(BOOL)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6 diskCleanupClass:(Class)arg7 ;
-(void)setExceptionInfoString:(id)arg1 forKey:(id)arg2 ;
-(void)setUserIsEmployee:(BOOL)arg1 ;
-(void)setDidSendExceptionsHandler:(id<FBDidSendExceptionsHandlerProtocol>)arg1 ;
-(int)sendExceptionToServerWithLogFilePathsToUpload:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id<FBDidSendExceptionsHandlerProtocol>)didSendExceptionsHandler;
-(void)setupExceptionHandlers;
-(void)tearDownExceptionHandlers;
-(void)setAppSessionExceptionHandlerWithKey:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)clearAppSessionExceptionHandlerWithKey:(id)arg1 ;
-(void)setBreakpadFilterCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(BOOL)isCrashReportingEnabled;
-(BOOL)isCrashReportProcessingComplete;
-(id)latestBreakpadCrashReport;
-(BOOL)hadCrashesOnStartup;
-(void)willRecordStackBacktraces;
-(NSString *)exceptionDirectory;
-(BOOL)isExceptionDirectoryDebuggingEnabled;
-(double)reportPercentage;
-(id)initWithBuild:(id)arg1 appSpecificConfiguration:(id)arg2 application:(id)arg3 isProductionBuild:(BOOL)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6 ;
-(void)_cleanupExceptionTimestampFile;
-(id)_exceptionFilename:(id)arg1 ;
-(BOOL)_hasAppCrashedTooMuchRecently;
-(void)_updateExceptionPreamble;
-(BOOL)userIsEmployee;
-(id)latestBreakpadCrashReportWithErrorHandler:(/*^block*/id)arg1 ;
-(int)_enterDealloct13491955:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)_exitDealloct13491955:(int)arg1 ;
-(int)sendExceptionToServerWithLogFilePathsToUpload:(id)arg1 completion:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(int)_sendExceptionToServerWithErrorHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)checkForCrashWhileExceptionHandlingInLastSession;
-(BOOL)_shouldSendException;
-(id)getAssertFilenames;
-(void)setIsUploading:(BOOL)arg1 ;
-(unsigned long long)numLogsToUpload;
-(BOOL)didRecordBacktracesWithOriginFile:(const char*)arg1 originLine:(int)arg2 msg:(id)arg3 additionalInfo:(id)arg4 reportType:(long long)arg5 ;
-(id)initWithBuild:(id)arg1 appSpecificConfiguration:(id)arg2 ;
-(void)_setupAppDidBecomeActiveHandler;
-(void)_checkPreviousExceptionsAndExitIfNecessary;
-(void)generateStackTraceWithParams:(id)arg1 isQuick:(BOOL)arg2 ;
-(void)setQuickAssertEnabled:(BOOL)arg1 ;
-(void)setEnableCrashReportCompression:(BOOL)arg1 ;
-(void)setExceptionDirectoryDebuggingEnabled:(BOOL)arg1 ;
-(int)sendExceptionToServerWithLogFilePathsToUpload:(id)arg1 ;
-(int)getCrashReportCount;
-(BOOL)isAssertLoggingSupported;
-(void)setReportPercentage:(double)arg1 ;
-(NSURL *)exceptionURL;
-(void)setExceptionURL:(NSURL *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setSessionID:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(FBWatchdogTimer *)watchdog;
-(void)setDeviceID:(id)arg1 ;
-(void)setUserID:(id)arg1 ;
@end

