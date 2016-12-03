/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoUploadSessionLogger.h>
#import <Messenger/FBVideoSegmentUploadSessionLogger.h>

@class NSDictionary, NSString;

@interface FBVideoUploadLogger : NSObject <FBVideoUploadSessionLogger, FBVideoSegmentUploadSessionLogger> {

	NSDictionary* _extras;
	NSString* _moduleName;
	double _initRequestStartTime;
	double _transferRequestStartTime;
	double _postRequestStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logEvent:(id)arg1 ;
-(void)_logEvent:(id)arg1 error:(id)arg2 ;
-(void)logUploadInitStart;
-(void)logUploadInitDequeue;
-(void)logUploadTransferSuccess;
-(id)initWithModuleName:(id)arg1 extras:(id)arg2 ;
-(void)_logEvent:(id)arg1 extras:(id)arg2 ;
-(void)logUploadChunkTransferStart;
-(void)logUploadChunkTransferDequeue;
-(void)logUploadChunkTransferSuccess;
-(void)logUploadChunkTransferFailure:(id)arg1 ;
-(void)logUploadPostStart;
-(void)logUploadTransferStartIfFirstSegment;
-(void)logUploadPostSuccess;
-(void)logUploadInitSuccess;
-(void)logUploadPostDequeue;
-(void)logUploadInitFailure:(id)arg1 ;
-(void)logUploadPostFailure:(id)arg1 ;
-(void)logUploadTransferFailure:(id)arg1 ;
-(void)_logEvent:(id)arg1 elapsedTime:(double)arg2 ;
-(void)_logEvent:(id)arg1 elapsedTime:(double)arg2 error:(id)arg3 ;
-(void)_logEvent:(id)arg1 elapsedTime:(double)arg2 extras:(id)arg3 ;
-(void)logUploadChunkTransferResponse;
@end

