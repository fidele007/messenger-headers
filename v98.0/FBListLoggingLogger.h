/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBQuickPerformanceLogger, NSString;

@interface FBListLoggingLogger : NSObject {

	FBQuickPerformanceLogger* _quickLogger;
	int _instanceKey;
	NSString* _analyticsModuleTag;

}
-(id)initWithAnalyticsModule:(id)arg1 instanceKey:(int)arg2 qpLogger:(id)arg3 ;
-(void)logTTIStart;
-(void)logTTICancel;
-(void)cancelLoggingTTI;
-(void)logTTIEndWithSuccess:(BOOL)arg1 ;
-(void)logInitializeAsyncActionWithLoggableTag:(id)arg1 instanceKey:(int)arg2 ;
-(void)logFinishAsyncActionWithSuccess:(BOOL)arg1 instanceKey:(int)arg2 loggableTag:(id)arg3 ;
-(void)logCancelAsyncActionWithInstanceKey:(int)arg1 ;
-(void)logEndDataSourceUpdateWithInstanceKey:(int)arg1 ;
-(void)logStartLoadingWithInstanceKey:(int)arg1 asyncActionNameTag:(id)arg2 fetchTypeTag:(id)arg3 ;
-(void)logSuccessfullyFinishLoadingDataWithInstanceKey:(int)arg1 fetchTypeTag:(id)arg2 ;
-(void)logFailInLoadingDataWithInstanceKey:(int)arg1 fetchTypeTag:(id)arg2 ;
-(void)logCancelLoadingDataWithInstanceKey:(int)arg1 fetchTypeTag:(id)arg2 ;
@end

