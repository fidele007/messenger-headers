/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowSessionDelegate
@required
-(void)mediaItemUploadFlowSession:(id)arg1 didFailWithError:(id)arg2 processingFinished:(BOOL)arg3;
-(void)mediaItemUploadFlowSession:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;
-(void)mediaItemUploadFlowSessionDidFinish:(id)arg1 fbid:(id)arg2;
-(void)mediaItemUploadFlowSessionDidCancel:(id)arg1 processingFinished:(BOOL)arg2;
-(void)mediaItemUploadFlowSessionDidStartProcessing:(id)arg1;
-(void)mediaItemUploadFlowSessionDidFinishProcessing:(id)arg1;
-(void)mediaItemUploadFlowSessionRestart:(id)arg1 newSession:(id)arg2;
-(void)mediaItemUploadFlowSessionDidStart:(id)arg1;

@end

