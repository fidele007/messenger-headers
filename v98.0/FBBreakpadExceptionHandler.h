/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString;

@interface FBBreakpadExceptionHandler : NSObject {

	NSMutableSet* _breakpadExtraParameters;
	long long _currentSessionGeneratedStackTracesCount;
	void* _breakpad;
	NSString* _exceptionDirectory;

}

@property (nonatomic,copy,readonly) NSString * exceptionDirectory;              //@synthesize exceptionDirectory=_exceptionDirectory - In the implementation block
-(void)setExceptionInfoString:(id)arg1 forKey:(id)arg2 ;
-(void)tearDownExceptionHandlers;
-(void)setBreakpadFilterCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(id)latestBreakpadCrashReport;
-(NSString *)exceptionDirectory;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6 ;
-(id)_exceptionFilename:(id)arg1 ;
-(void)breakpadGenerateReportWithParams:(id)arg1 isQuickReport:(BOOL)arg2 ;
-(id)latestBreakpadCrashReportWithErrorHandler:(/*^block*/id)arg1 ;
-(int)_enterDealloct13491955:(const char*)arg1 ;
-(void)_exitDealloct13491955:(int)arg1 ;
-(int)crashReportCount;
-(BOOL)checkForCrashWhileExceptionHandlingInLastSession;
-(void)setReportUrl:(id)arg1 ;
-(int)crashReportCountExcludingExplicitlyGeneratedStacktraces;
-(void)process:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 ;
-(id)generateExtraFileName;
-(void)genericSetBreakpadParamValue:(id)arg1 forKey:(id)arg2 ;
-(void)genericSetBreakpadUploadParamValue:(id)arg1 forKey:(id)arg2 ;
-(void)processReports:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(long long)compareFileByCreationDate:(id)arg1 withFile:(id)arg2 inDirectory:(id)arg3 ;
-(id)genericGetBreakpadParamForKey:(id)arg1 ;
-(void)breakpadCleanExtra:(id)arg1 ;
-(id)breakpadCopyLargeParamsToNewExtraFile;
-(void)incrementGeneratedStackTracesCounter;
-(void)resetGeneratedStackTracesCountFromUserDefaults;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 ;
-(void)dealloc;
-(void)send;
-(void)process:(id)arg1 ;
@end

