/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaUploadItemDelegate <NSObject>
@required
-(void)mediaUploadItemDidStart:(id)arg1;
-(void)mediaUploadItemDidStartProcessingStep:(id)arg1;
-(void)mediaUploadItemDidFinishProcessingStep:(id)arg1;
-(void)mediaUploadItemDidFinish:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didFailWithError:(id)arg2 allowBackgroundTask:(BOOL)arg3;
-(void)mediaUploadItemDidSendCancelRequest:(id)arg1;
-(void)mediaUploadItemDidCancel:(id)arg1;
-(void)mediaUploadItemRestart:(id)arg1;
-(void)mediaUploadItem:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;

@end

