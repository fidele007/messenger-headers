/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface ImageWithICloudInfo : NSObject {

	BOOL _imageWasDownloadedFromICloud;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageWasDownloadedFromICloud;              //@synthesize imageWasDownloadedFromICloud=_imageWasDownloadedFromICloud - In the implementation block
-(BOOL)imageWasDownloadedFromICloud;
-(void)setImageWasDownloadedFromICloud:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end
