/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, MNProfileImageModel, NSString;

@interface MNPaymentsNuxViewModel : FBValueObject <NSCopying> {

	UIImage* _image;
	MNProfileImageModel* _profileImageModel;
	UIImage* _maskImage;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _primaryButtonTitle;
	NSString* _secondaryButtonTitle;

}

@property (nonatomic,copy,readonly) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;              //@synthesize profileImageModel=_profileImageModel - In the implementation block
@property (nonatomic,copy,readonly) UIImage * maskImage;                                  //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                           //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryButtonTitle;                        //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryButtonTitle;                      //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
-(id)initWithImage:(id)arg1 profileImageModel:(id)arg2 maskImage:(id)arg3 titleText:(id)arg4 descriptionText:(id)arg5 primaryButtonTitle:(id)arg6 secondaryButtonTitle:(id)arg7 ;
-(MNProfileImageModel *)profileImageModel;
-(UIImage *)image;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(NSString *)secondaryButtonTitle;
-(NSString *)primaryButtonTitle;
-(UIImage *)maskImage;
@end

