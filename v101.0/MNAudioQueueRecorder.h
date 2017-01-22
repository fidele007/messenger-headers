/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAudioRecording.h>
#import <Messenger/MNAudioQueueRecorderDelegate.h>

@protocol MNAudioQueueRecorder, MNAudioRecordingDelegate;
@class NSURL, NSString;

@interface MNAudioQueueRecorder : NSObject <MNAudioRecording, MNAudioQueueRecorderDelegate> {

	id<MNAudioQueueRecorder> _recorder;
	BOOL _meteringEnabled;
	BOOL _recording;
	double _currentTime;
	NSURL* _url;
	id<MNAudioRecordingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMeteringEnabled,nonatomic) BOOL meteringEnabled;              //@synthesize meteringEnabled=_meteringEnabled - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording;                        //@synthesize recording=_recording - In the implementation block
@property (nonatomic,readonly) double currentTime;                                       //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) id<MNAudioRecordingDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSString * fileMimeType; 
+(void)setImplementation:(Class)arg1 ;
+(id)audioQueueRecorderWithURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)fileMimeType;
-(void)audioQueueRecorderDidFail:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 usingAacExtension:(BOOL)arg3 ;
-(void)setDelegate:(id<MNAudioRecordingDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAudioRecordingDelegate>)delegate;
-(NSURL *)url;
-(void)stop;
-(BOOL)isMeteringEnabled;
-(BOOL)prepareToRecord;
-(NSString *)fileExtension;
-(double)currentTime;
-(BOOL)record;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
@end
