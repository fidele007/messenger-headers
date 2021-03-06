/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowSessionDelegate
@required
-(void)mediaItemUploadFlowSessionRestart:(id)arg1 newSession:(id)arg2;
-(void)mediaItemUploadFlowSessionDidStart:(id)arg1;
-(void)mediaItemUploadFlowSessionDidFinish:(id)arg1 fbid:(id)arg2;
-(void)mediaItemUploadFlowSessionDidFinishProcessing:(id)arg1;
-(void)mediaItemUploadFlowSessionDidCancel:(id)arg1 processingFinished:(BOOL)arg2;
-(void)mediaItemUploadFlowSession:(id)arg1 didFailWithError:(id)arg2 processingFinished:(BOOL)arg3;
-(void)mediaItemUploadFlowSession:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;
-(void)mediaItemUploadFlowSessionDidStartProcessing:(id)arg1;

@end

