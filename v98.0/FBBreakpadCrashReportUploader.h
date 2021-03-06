/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBreakpadCrashReportProcessor.h>

@class FileUploadAttachment, NSString, NSDictionary;

@interface FBBreakpadCrashReportUploader : NSObject <FBBreakpadCrashReportProcessor> {

	/*^block*/id _uploadAttachmentBlock;
	FileUploadAttachment* _uploadAttachment;
	/*^block*/id _criticalLogDataBlock;
	NSString* _criticalLogData;
	/*^block*/id _corruptionTrapLogsBlock;
	NSDictionary* _corruptionTrapLogs;
	BOOL _userIsEmployee;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)process:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithUploadAttachmentBlock:(/*^block*/id)arg1 criticalLogDataBlock:(/*^block*/id)arg2 corruptionTrapLogs:(/*^block*/id)arg3 userIsEmployee:(BOOL)arg4 ;
@end

