/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMMessageVideoDownloadListenerAnnouncer, MNVideoExporter, NSDictionary, NSString;

@interface MNMessageVideoDownloaderManager : NSObject <FBViewerContextClassProvidable> {

	FBMMessageVideoDownloadListenerAnnouncer* _announcer;
	MNVideoExporter* _exporter;
	NSDictionary* _cancelHandles;
	mutex _cancelHandlesLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)cancelVideoDownloadForMessage:(id)arg1 ;
-(void)downloadVideoForMessage:(id)arg1 videoAttachment:(id)arg2 contentURL:(id)arg3 writeToFile:(BOOL)arg4 ;
-(void)_unmapCancelHandleForMessageKey:(id)arg1 ;
-(void)_handleDownloadSuccessForMessageKey:(id)arg1 sourceURL:(id)arg2 ;
-(void)_handleDownloadFailureForMessageKey:(id)arg1 error:(id)arg2 ;
-(void)_handleDownloadProgressForMessageKey:(id)arg1 progress:(double)arg2 ;
-(void)_mapCancelHandle:(id)arg1 forMessageKey:(id)arg2 ;
-(void)_cancelAndUnmapMessageForKey:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

