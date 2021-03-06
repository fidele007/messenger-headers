/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPhotoAssetEdits, UIImage, NSString;

@interface FBThree60PhotoAndEdits : NSObject {

	BOOL _hasFullAsset;
	FBPhotoAssetEdits* _edits;
	UIImage* _image;
	NSString* _assetID;

}

@property (nonatomic,readonly) FBPhotoAssetEdits * edits;              //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) BOOL hasFullAsset;                      //@synthesize hasFullAsset=_hasFullAsset - In the implementation block
-(id)initWithImage:(id)arg1 edits:(id)arg2 assetID:(id)arg3 hasFullAsset:(BOOL)arg4 ;
-(BOOL)hasFullAsset;
-(FBPhotoAssetEdits *)edits;
-(UIImage *)image;
-(NSString *)assetID;
@end

