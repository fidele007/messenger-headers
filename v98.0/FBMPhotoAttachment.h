/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMAttachment.h>

@class MNPlainPhotoViewModel;

@interface FBMPhotoAttachment : FBMAttachment {

	long long _imageType;
	MNPlainPhotoViewModel* _plainPhotoViewModel;

}

@property (assign,nonatomic) long long imageType;                                    //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy) MNPlainPhotoViewModel * plainPhotoViewModel;              //@synthesize plainPhotoViewModel=_plainPhotoViewModel - In the implementation block
-(MNPlainPhotoViewModel *)plainPhotoViewModel;
-(void)setPlainPhotoViewModel:(MNPlainPhotoViewModel *)arg1 ;
-(void)setImageType:(long long)arg1 ;
-(long long)imageType;
@end

