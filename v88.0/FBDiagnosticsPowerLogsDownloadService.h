/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, FBDiagnosticsPowerLogsDownloadServiceDelegate;
@class NSObject;

@interface FBDiagnosticsPowerLogsDownloadService : NSObject {

	NSObject*<OS_dispatch_source> _src;
	id<FBDiagnosticsPowerLogsDownloadServiceDelegate> _delegate;
	id _mbsDevice;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) id mbsDevice;                                                                   //@synthesize mbsDevice=_mbsDevice - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBDiagnosticsPowerLogsDownloadServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startPowerLogDownload;
-(void)_prepareLogDirectory;
-(id)_loadPowerLogs;
-(id)powerLogDownloadSync;
-(id)_extractGZIPFile:(id)arg1 ;
-(id)mbsDevice;
-(void)setMbsDevice:(id)arg1 ;
-(void)setDelegate:(id<FBDiagnosticsPowerLogsDownloadServiceDelegate>)arg1 ;
-(id<FBDiagnosticsPowerLogsDownloadServiceDelegate>)delegate;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(id)_logPath;
@end

