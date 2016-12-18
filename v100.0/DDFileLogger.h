/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/DDAbstractLogger.h>
#import <Messenger/DDLogger.h>

@protocol DDLogFileManager;
@class DDLogFileInfo, NSFileHandle, NSTimer, NSString;

@interface DDFileLogger : DDAbstractLogger <DDLogger> {

	id<DDLogFileManager> logFileManager;
	DDLogFileInfo* currentLogFileInfo;
	NSFileHandle* currentLogFileHandle;
	NSTimer* rollingTimer;
	unsigned long long maximumFileSize;
	double rollingFrequency;

}

@property (assign) unsigned long long maximumFileSize; 
@property (assign) double rollingFrequency; 
@property (nonatomic,readonly) id<DDLogFileManager> logFileManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loggerName;
-(id)initWithLogFileManager:(id)arg1 ;
-(void)maybeRollLogFileDueToSize;
-(void)maybeRollLogFileDueToAge:(id)arg1 ;
-(void)rollLogFileNow;
-(void)scheduleTimerToRollLogFileDueToAge;
-(id)currentLogFileInfo;
-(id)currentLogFileHandle;
-(unsigned long long)maximumFileSize;
-(void)setMaximumFileSize:(unsigned long long)arg1 ;
-(double)rollingFrequency;
-(void)setRollingFrequency:(double)arg1 ;
-(void)rollLogFile;
-(id<DDLogFileManager>)logFileManager;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)logMessage:(id)arg1 ;
@end
