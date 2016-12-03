/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoTagSamplerDelegate.h>
#import <Messenger/FBVideoTagFaceDetectorDelegate.h>
#import <Messenger/FBVideoTagFaceRecognizerDelegate.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableDictionary, FBVideoTagSuggestionManagerUpdateListenerAnnouncer, NSObject, FBVideoTagSampler, FBVideoTagFaceDetector, FBVideoTagFaceRecognizer, FBVideoTagConfiguration, NSString;

@interface FBVideoTagSuggestionManager : NSObject <FBVideoTagSamplerDelegate, FBVideoTagFaceDetectorDelegate, FBVideoTagFaceRecognizerDelegate> {

	FBUserSession* _session;
	NSMutableDictionary* _videoIDsToScenePath;
	NSMutableDictionary* _videoIDToAsset;
	FBVideoTagSuggestionManagerUpdateListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _queue;
	FBVideoTagSampler* _sampler;
	FBVideoTagFaceDetector* _detector;
	FBVideoTagFaceRecognizer* _recognizer;
	FBVideoTagConfiguration* _configuration;
	NSMutableDictionary* _videoIDsToVideoTagItems;

}

@property (copy) NSMutableDictionary * videoIDsToVideoTagItems;              //@synthesize videoIDsToVideoTagItems=_videoIDsToVideoTagItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recognizeFacesForVideoAssetID:(id)arg1 scenePath:(id)arg2 ;
-(id)getTagSuggestionItemsForVideoAssetID:(id)arg1 ;
-(void)videoSampler:(id)arg1 didGetImage:(id)arg2 forVideoAsset:(id)arg3 atTimestamp:(SCD_Struct_FB25)arg4 error:(id)arg5 ;
-(void)videoSampler:(id)arg1 didFinishForVideoAsset:(id)arg2 cancellable:(id)arg3 ;
-(void)faceDetector:(id)arg1 didCompleteWithFaceBoxes:(id)arg2 inImage:(id)arg3 inVideoAsset:(id)arg4 atTimestamp:(SCD_Struct_FB25)arg5 framesPerSecond:(double)arg6 ;
-(void)faceRecognizer:(id)arg1 didProcessFaceBoxes:(id)arg2 inVideoAsset:(id)arg3 atTimestamp:(SCD_Struct_FB25)arg4 ;
-(id)_getVideoIDForAsset:(id)arg1 ;
-(NSMutableDictionary *)videoIDsToVideoTagItems;
-(void)setVideoIDsToVideoTagItems:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

