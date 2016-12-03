/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBMessageMediaAttachmentPreparationListener.h>
#import <Messenger/FBMessageVideoAttachmentPreparationListener.h>

@class NSString;

@interface FBMessageVideoAttachmentPreparationListenerAnnouncer : FBAnnouncerBase <FBMessageMediaAttachmentPreparationListener, FBMessageVideoAttachmentPreparationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)willPrepareVideoContent:(id)arg1 forMessageOfflineId:(id)arg2 ;
-(void)willExport;
-(void)didExportData:(id)arg1 toLocalURL:(id)arg2 ;
-(void)didFailToExportWithError:(id)arg1 ;
-(void)didEstimateFileSize:(long long)arg1 ;
-(void)didProgressExportTo:(float)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

