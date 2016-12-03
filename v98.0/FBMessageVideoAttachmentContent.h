/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <Messenger/FBMessageSingleAttachmentContentDedupable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBMessageVideoTranscodeConfiguration, FBVideoAssetEdits, NSURL, FBMessageSinglePhotoAttachmentContent;

@interface FBMessageVideoAttachmentContent : FBValueObject <FBMessageSingleAttachmentContentDedupable, NSCopying, NSCoding> {

	NSString* _offlineVideoId;
	unsigned long long _quality;
	double _bitrateKbps;
	FBMessageVideoTranscodeConfiguration* _transcodeConfiguration;
	unsigned long long _originalFileSize;
	long long _attachmentType;
	double _duration;
	FBVideoAssetEdits* _videoAssetEdits;
	NSURL* _localVideoURL;
	NSString* _assetID;
	FBMessageSinglePhotoAttachmentContent* _thumbnailContent;
	CGSize _videoSize;

}

@property (nonatomic,copy,readonly) NSString * offlineVideoId;                                                  //@synthesize offlineVideoId=_offlineVideoId - In the implementation block
@property (nonatomic,readonly) unsigned long long quality;                                                      //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) double bitrateKbps;                                                              //@synthesize bitrateKbps=_bitrateKbps - In the implementation block
@property (nonatomic,copy,readonly) FBMessageVideoTranscodeConfiguration * transcodeConfiguration;              //@synthesize transcodeConfiguration=_transcodeConfiguration - In the implementation block
@property (nonatomic,readonly) unsigned long long originalFileSize;                                             //@synthesize originalFileSize=_originalFileSize - In the implementation block
@property (nonatomic,readonly) long long attachmentType;                                                        //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                                                                //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,readonly) double duration;                                                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) FBVideoAssetEdits * videoAssetEdits;                                        //@synthesize videoAssetEdits=_videoAssetEdits - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localVideoURL;                                                      //@synthesize localVideoURL=_localVideoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                                                         //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) FBMessageSinglePhotoAttachmentContent * thumbnailContent;                   //@synthesize thumbnailContent=_thumbnailContent - In the implementation block
-(NSString *)assetID;
-(NSString *)offlineVideoId;
-(FBMessageSinglePhotoAttachmentContent *)thumbnailContent;
-(id)initWithOfflineVideoId:(id)arg1 quality:(unsigned long long)arg2 bitrateKbps:(double)arg3 transcodeConfiguration:(id)arg4 originalFileSize:(unsigned long long)arg5 attachmentType:(long long)arg6 videoSize:(CGSize)arg7 duration:(double)arg8 videoAssetEdits:(id)arg9 localVideoURL:(id)arg10 assetID:(id)arg11 thumbnailContent:(id)arg12 ;
-(double)bitrateKbps;
-(FBMessageVideoTranscodeConfiguration *)transcodeConfiguration;
-(unsigned long long)originalFileSize;
-(FBVideoAssetEdits *)videoAssetEdits;
-(NSURL *)localVideoURL;
-(id)dedupeKey;
-(long long)attachmentType;
-(double)duration;
-(unsigned long long)quality;
-(CGSize)videoSize;
@end

