/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, FBStorylineImage, NSArray, NSDictionary, NSDate;


@protocol FBStorylineAsset <NSObject>
@property (nonatomic,copy,readonly) NSString * assetId; 
@property (nonatomic,copy,readonly) NSString * originalAssetId; 
@property (nonatomic,readonly) BOOL isLocalAsset; 
@property (nonatomic,copy,readonly) NSNumber * width; 
@property (nonatomic,copy,readonly) NSNumber * height; 
@property (nonatomic,copy,readonly) FBStorylineImage * image; 
@property (nonatomic,copy,readonly) FBStorylineImage * lowResImage; 
@property (nonatomic,copy,readonly) FBStorylineImage * highResImage; 
@property (nonatomic,copy,readonly) NSArray * faceboxes; 
@property (nonatomic,copy,readonly) NSDictionary * faceboxRect; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * thumbnailURL; 
@required
-(NSString *)assetId;
-(BOOL)isEqualToStorylineAsset:(id)arg1;
-(NSString *)originalAssetId;
-(BOOL)isLocalAsset;
-(FBStorylineImage *)lowResImage;
-(FBStorylineImage *)highResImage;
-(NSArray *)faceboxes;
-(NSDictionary *)faceboxRect;
-(NSDate *)date;
-(FBStorylineImage *)image;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSString *)thumbnailURL;

@end

