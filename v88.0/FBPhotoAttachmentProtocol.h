/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSArray, FBPhotoAssetEdits;


@protocol FBPhotoAttachmentProtocol <FBMediaAttachmentProtocol,NSCoding>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,copy,readonly) NSArray * publishedPhotoTags; 
@property (nonatomic,copy) NSArray * tagsEdges; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits; 
@property (assign,nonatomic) BOOL livePhotoHasPlayed; 
@required
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5;
-(FBPhotoAssetEdits *)edits;
-(void)setEdits:(id)arg1;
-(BOOL)supportsQualitySampling;
-(BOOL)isPhotoCropped;
-(NSArray *)publishedPhotoTags;
-(NSArray *)tagsEdges;
-(void)setTagsEdges:(id)arg1;
-(BOOL)livePhotoHasPlayed;
-(void)setLivePhotoHasPlayed:(BOOL)arg1;
-(CGSize)imageSize;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;

@end

