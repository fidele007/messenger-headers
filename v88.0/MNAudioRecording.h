/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol MNAudioRecording <NSObject>
@property (assign,getter=isMeteringEnabled,nonatomic) BOOL meteringEnabled; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) NSURL * url; 
@property (assign,nonatomic) id<MNAudioRecordingDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSString * fileMimeType; 
@required
-(NSString *)fileMimeType;
-(id)initWithURL:(id)arg1 error:(id*)arg2 usingAacExtension:(BOOL)arg3;
-(void)setDelegate:(id)arg1;
-(id<MNAudioRecordingDelegate>)delegate;
-(NSURL *)url;
-(void)stop;
-(BOOL)isMeteringEnabled;
-(BOOL)prepareToRecord;
-(NSString *)fileExtension;
-(double)currentTime;
-(BOOL)record;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1;

@end

