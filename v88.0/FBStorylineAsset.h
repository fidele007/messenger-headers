/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
