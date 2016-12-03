/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNIncomingVideoAttachmentExporting.h>
#import <Messenger/MNOutgoingVideoAttachmentExporting.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMVideoStorageManager, MNCDNVideoDownloader, NSString;

@interface MNVideoExporter : NSObject <MNIncomingVideoAttachmentExporting, MNOutgoingVideoAttachmentExporting, FBViewerContextClassProvidable> {

	FBMVideoStorageManager* _videoStorageManager;
	MNCDNVideoDownloader* _cdnVideoDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)exportVideoFromIncomingVideoAttachment:(id)arg1 writeToFile:(BOOL)arg2 callbackQueue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 progress:(/*^block*/id)arg6 ;
-(id)exportVideoFromOutgoingWrapperAttachment:(id)arg1 callbackQueue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 progress:(/*^block*/id)arg5 ;
-(id)_runExportJob:(id)arg1 withCallbackQueue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 progress:(/*^block*/id)arg5 ;
-(id)exportVideoFromOutgoingVideoAttachment:(id)arg1 writeToFile:(BOOL)arg2 callbackQueue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 progress:(/*^block*/id)arg6 ;
@end

