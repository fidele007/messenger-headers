/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFilterCommand.h>

@class NSURL, UIImage, NSString;

@interface FBImageOverlayFilterCommand : NSObject <FBFilterCommand> {

	NSURL* _imageUrl;
	UIImage* _image;
	CGPoint _location;

}

@property (nonatomic,copy,readonly) NSURL * imageUrl;                    //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * filterClass; 
-(NSURL *)imageUrl;
-(NSString *)filterClass;
-(id)initWithImageUrl:(id)arg1 image:(id)arg2 location:(CGPoint)arg3 ;
-(UIImage *)image;
-(CGPoint)location;
@end
