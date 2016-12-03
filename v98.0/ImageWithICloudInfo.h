/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
