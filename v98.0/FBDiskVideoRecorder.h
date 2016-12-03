/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSURL, NSObject, NSError, NSArray, NSFileManager;

@interface FBDiskVideoRecorder : NSObject {

	SCD_Struct_FB818 _config;
	NSURL* _tempDirectory;
	shared_ptr<facebook::videostreaming::SimpleVideoRecorder>* _currentRecorder;
	NSObject*<OS_dispatch_queue> _encodingQueue;
	vector<std::__1::shared_ptr<facebook::videostreaming::SimpleVideoRecorder>, std::__1::allocator<std::__1::shared_ptr<facebook::videostreaming::SimpleVideoRecorder> > >* _recorders;
	vector<FB::Functional::PromiseEither<NSError *, FBManagedFileURL *>, std::__1::allocator<FB::Functional::PromiseEither<NSError *, FBManagedFileURL *> > >* _recordFinishPromises;
	SCD_Struct_FB25 _durationUntilThresholdReached;
	SCD_Struct_FB25 _recordingDuration;
	SCD_Struct_FB25 _nextAvailableSpaceCheck;
	NSError* _processingError;
	NSArray* _metadata;
	BOOL _paused;
	BOOL _discontinuity;
	SCD_Struct_FB25 _lastVideoSampleEndTimestamp;
	SCD_Struct_FB25 _lastAudioSampleEndTimestamp;
	SCD_Struct_FB25 _timeOffset;
	NSFileManager* _fm;

}
-(void)onInterruption;
-(void)processAudio:(opaqueCMSampleBufferRef)arg1 ;
-(void)processVideo:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithTempDirectory:(id)arg1 metadata:(id)arg2 encodingQueue:(id)arg3 config:(SCD_Struct_FB832)arg4 ;
-(void)onBackground:(id)arg1 ;
-(shared_ptr<facebook::videostreaming::SimpleVideoRecorder>*)currentRecorder;
-(void)cleanupImpl;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 audio:(BOOL)arg2 ;
-(void)pauseRecordingImpl;
-(void)onInterruptionImpl;
-(void)updateLastPTS:(CMSampleBufferSmartPtr*)arg1 isAudio:(BOOL)arg2 ;
-(void)checkAvailableDiskSpaceIfNeeded;
-(void)processBufferImpl:(CMSampleBufferSmartPtr*)arg1 audio:(BOOL)arg2 ;
-(void)checkAvailableDiskSpace;
-(shared_ptr<facebook::videostreaming::SimpleVideoRecorder>*)createNewRecorder;
-(id)generateRecorderOutputPath:(unsigned long long)arg1 ;
-(id)initWithTempDirectory:(id)arg1 metadata:(id)arg2 config:(SCD_Struct_FB832)arg3 ;
-(PromiseEither<NSError *, NSArray<FBManagedFileURL *> *>*)finishRecording;
-(void)dealloc;
-(void)cleanup;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)_handleSessionRuntimeError:(id)arg1 ;
@end

