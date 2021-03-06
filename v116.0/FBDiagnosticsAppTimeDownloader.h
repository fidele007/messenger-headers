/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPowerLogsDownloadServiceDelegate.h>

@class FBPowerLogsDownloadService, FBDiagnosticsPerformanceMetricsTimedLogger, NSString;

@interface FBDiagnosticsAppTimeDownloader : NSObject <FBPowerLogsDownloadServiceDelegate> {

	FBPowerLogsDownloadService* _downloadService;
	/*^block*/id _completionBlock;
	FBDiagnosticsPerformanceMetricsTimedLogger* _performanceTimedLogger;
	BOOL _allApps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadAppTimeIntervalsForAllApps:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)powerLogDownloadService:(id)arg1 didFinishWithSQLLogFiles:(id)arg2 ;
-(void)powerLogDownloadService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_completeAndClearCompletionBlockWithResults:(id)arg1 ;
-(id)init;
@end

