/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBPhotoAssetEdits, NSString, UIImage;


@protocol FBEditableIdentifiablePhoto <NSObject>
@property (nonatomic,retain) FBPhotoAssetEdits * edits; 
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) UIImage * displayThumbnailImage; 
@required
-(NSString *)assetID;
-(FBPhotoAssetEdits *)edits;
-(void)setDisplayImage:(id)arg1;
-(void)setEdits:(id)arg1;
-(void)setDisplayThumbnailImage:(id)arg1;
-(UIImage *)displayThumbnailImage;
-(UIImage *)displayImage;

@end
