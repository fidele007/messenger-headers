/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoAttachmentProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBVideoAssetExporterWrapper, NSURL, FBVideoAssetEdits, NSArray, FBAssetMetadata, UIImage, NSDate, FBVideoAsset, NSDictionary;

@interface FBSyncObjectVideoAttachment : NSObject <FBVideoAttachmentProtocol, NSCoding, NSCopying> {

	NSString* _presetName;
	NSString* _outputFileType;
	FBVideoAssetExporterWrapper* _videoAssetExporterWrapper;
	long long _estimatedOutputFileLength;
	unsigned long long _assetFileSize;
	SCD_Struct_FB25 _duration;
	NSURL* _trimmedURL;
	FBVideoAssetEdits* _edits;
	BOOL _notifyWhenProcessed;
	BOOL _allowEditing;
	BOOL _allowRemoval;
	BOOL _isAnimatedGIF;
	NSString* _caption;
	NSArray* _mentions;
	NSString* _syncObjectUUID;
	FBAssetMetadata* _metadata;
	UIImage* _thumbnailImage;
	NSDate* _creationDate;
	NSString* _dataSourceID;
	NSString* _assetID;
	NSURL* _videoURL;
	double _bitrateKbps;
	FBVideoAsset* _videoAsset;
	unsigned long long _indexHint;
	NSDictionary* _extraUploadParameters;
	long long _frameOffsetInMillisecond;
	FBMediaUploadQualityPolicy _qualityPolicy;

}

@property (nonatomic,copy,readonly) NSString * syncObjectUUID;                                         //@synthesize syncObjectUUID=_syncObjectUUID - In the implementation block
@property (nonatomic,readonly) FBAssetMetadata * metadata;                                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSourceID;                                           //@synthesize dataSourceID=_dataSourceID - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                        //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowRemoval;                                                        //@synthesize allowRemoval=_allowRemoval - In the implementation block
@property (nonatomic,copy) NSString * assetID;                                                         //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                                         //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * presetName;                                             //@synthesize presetName=_presetName - In the implementation block
@property (nonatomic,readonly) double bitrateKbps;                                                     //@synthesize bitrateKbps=_bitrateKbps - In the implementation block
@property (nonatomic,readonly) FBVideoAsset * videoAsset;                                              //@synthesize videoAsset=_videoAsset - In the implementation block
@property (assign,nonatomic) unsigned long long indexHint;                                             //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,readonly) NSURL * trimmedURL;                                                     //@synthesize trimmedURL=_trimmedURL - In the implementation block
@property (nonatomic,copy) NSDictionary * extraUploadParameters;                                       //@synthesize extraUploadParameters=_extraUploadParameters - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatedGIF;                                                     //@synthesize isAnimatedGIF=_isAnimatedGIF - In the implementation block
@property (assign,nonatomic) long long frameOffsetInMillisecond;                                       //@synthesize frameOffsetInMillisecond=_frameOffsetInMillisecond - In the implementation block
@property (nonatomic,copy,readonly) FBVideoAssetEdits * edits;                                         //@synthesize edits=_edits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * caption;                                                         //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * mentions;                                                         //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB25 duration; 
@property (nonatomic,readonly) BOOL requiresProcessing; 
@property (nonatomic,readonly) FBMediaUploadQualityPolicy qualityPolicy;                               //@synthesize qualityPolicy=_qualityPolicy - In the implementation block
@property (assign,nonatomic) BOOL notifyWhenProcessed;                                                 //@synthesize notifyWhenProcessed=_notifyWhenProcessed - In the implementation block
+(id)propertiesToSkipForCoding;
-(NSString *)assetID;
-(FBVideoAssetEdits *)edits;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 ;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB26)arg6 ;
-(void)removeTemporaryExportFile;
-(void)cancelExportVideoDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)bitrateKbps;
-(BOOL)requiresProcessing;
-(long long)frameOffsetInMillisecond;
-(void)setFrameOffsetInMillisecond:(long long)arg1 ;
-(NSDictionary *)extraUploadParameters;
-(void)setExtraUploadParameters:(NSDictionary *)arg1 ;
-(unsigned long long)indexHint;
-(void)setIndexHint:(unsigned long long)arg1 ;
-(FBMediaUploadQualityPolicy)qualityPolicy;
-(BOOL)isAnimatedGIF;
-(BOOL)notifyWhenProcessed;
-(void)setNotifyWhenProcessed:(BOOL)arg1 ;
-(id)visualDedupRepresentation;
-(BOOL)allowRemoval;
-(void)setAllowRemoval:(BOOL)arg1 ;
-(BOOL)requiresUpload;
-(BOOL)selectedFromMultiPicker;
-(NSString *)existingFBID;
-(NSString *)nameOfServerAssetIDFieldOverridingFileURL;
-(unsigned long long)assetFileSize;
-(void)setAssetID:(NSString *)arg1 ;
-(NSString *)syncObjectUUID;
-(NSURL *)trimmedURL;
-(id)initWithSyncObjectUUID:(id)arg1 thumbnailImage:(id)arg2 duration:(SCD_Struct_FB25)arg3 metadata:(id)arg4 ;
-(void)encodeDuration:(id)arg1 ;
-(void)decodeDuration:(id)arg1 ;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_FB25)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)dataSourceID;
-(NSString *)outputFileType;
-(long long)estimatedOutputFileLength;
-(FBAssetMetadata *)metadata;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)presetName;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)allowEditing;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(NSDate *)creationDate;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(void)setCreationDate:(NSDate *)arg1 ;
-(FBVideoAsset *)videoAsset;
-(BOOL)isLivePhoto;
@end

