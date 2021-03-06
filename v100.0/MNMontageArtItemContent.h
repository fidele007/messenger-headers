/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, FBMemMessengerMontageTextAsset, UIImage, FBMemMessengerMontageImageAsset;

@interface MNMontageArtItemContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _text_text;
	UIColor* _text_backgroundColor;
	FBMemMessengerMontageTextAsset* _text_textAsset;
	UIImage* _image_image;
	FBMemMessengerMontageImageAsset* _image_imageAsset;

}
+(id)imageWithImage:(id)arg1 imageAsset:(id)arg2 ;
+(id)textWithText:(id)arg1 backgroundColor:(id)arg2 textAsset:(id)arg3 ;
-(void)matchText:(/*^block*/id)arg1 image:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

