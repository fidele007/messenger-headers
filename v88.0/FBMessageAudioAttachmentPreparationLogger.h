/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageAudioAttachmentStreamingPreprationListener.h>
#import <Messenger/FBMessageAttachmentPreparationLoggingExtras.h>

@class FBAnalytics, NSMutableDictionary, NSString;

@interface FBMessageAudioAttachmentPreparationLogger : NSObject <FBMessageAudioAttachmentStreamingPreprationListener, FBMessageAttachmentPreparationLoggingExtras> {

	FBAnalytics* _analytics;
	unsigned long long _startTime;
	NSMutableDictionary* _loggingExtras;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loggingExtras;
-(void)_willBeginUploadWithContentSize:(unsigned long long)arg1 isResumed:(BOOL)arg2 ;
-(void)_markCompletionWithStatus:(id)arg1 ;
-(void)_markUploadFinishWithMetrics:(id)arg1 ;
-(void)willPrepareAudioContent:(id)arg1 forMessageOfflineId:(id)arg2 ;
-(void)willComputeHash;
-(void)didComputeHash:(id)arg1 ;
-(void)willQueryFbId;
-(void)didQueryFbId:(id)arg1 ;
-(void)willResumeWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)willUploadWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)didProgressUploadTo:(float)arg1 ;
-(void)didFailToUploadWithError:(id)arg1 metrics:(id)arg2 ;
-(void)didCompleteUploadWithFbId:(id)arg1 metrics:(id)arg2 ;
-(void)didCancelUploadWithMetrics:(id)arg1 ;
-(void)didPrepare;
-(void)didFailToPrepareWithError:(id)arg1 ;
-(void)didCancelPreparation;
-(id)initWithAnalytics:(id)arg1 initialLoggingData:(id)arg2 ;
@end

