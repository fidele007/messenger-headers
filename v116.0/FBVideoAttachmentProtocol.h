/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSDictionary, FBVideoAsset, FBVideoAssetEdits;


@protocol FBVideoAttachmentProtocol <FBMediaAttachmentProtocol,NSCoding>
@property (nonatomic,retain) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSString * presetName; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB180 duration; 
@property (nonatomic,readonly) double bitrateKbps; 
@property (nonatomic,readonly) BOOL requiresProcessing; 
@property (assign,nonatomic) long long frameOffsetInMillisecond; 
@property (nonatomic,copy) NSDictionary * extraUploadParameters; 
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
@property (assign,nonatomic) unsigned long long indexHint; 
@property (nonatomic,readonly) FBVideoAsset * videoAsset; 
@property (nonatomic,readonly) FBMediaUploadQualityPolicy qualityPolicy; 
@property (nonatomic,readonly) BOOL isAnimatedGIF; 
@property (assign,nonatomic) BOOL notifyWhenProcessed; 
@property (nonatomic,copy,readonly) FBVideoAssetEdits * edits; 
@required
-(void)removeTemporaryExportFile;
-(void)cancelExportVideoDataWithCompletionBlock:(/*^block*/id)arg1;
-(BOOL)requiresProcessing;
-(long long)frameOffsetInMillisecond;
-(void)setFrameOffsetInMillisecond:(long long)arg1;
-(NSDictionary *)extraUploadParameters;
-(void)setIndexHint:(unsigned long long)arg1;
-(BOOL)isAnimatedGIF;
-(FBMediaUploadQualityPolicy)qualityPolicy;
-(FBVideoAssetEdits *)edits;
-(BOOL)notifyWhenProcessed;
-(void)setNotifyWhenProcessed:(BOOL)arg1;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB181)arg6;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5;
-(void)setExtraUploadParameters:(id)arg1;
-(unsigned long long)indexHint;
-(SCD_Struct_FB180)duration;
-(NSString *)outputFileType;
-(NSString *)presetName;
-(FBVideoAsset *)videoAsset;
-(NSURL *)videoURL;
-(void)setVideoURL:(id)arg1;
-(double)bitrateKbps;
-(long long)estimatedOutputFileLength;
-(NSString *)dataSourceID;

@end

