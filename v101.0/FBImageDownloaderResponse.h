/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSError;

@interface FBImageDownloaderResponse : NSObject {

	CGImageRef _image;
	unsigned long long _imageSource;
	NSError* _error;
	id _extraData;

}

@property (nonatomic,retain) id extraData;                                  //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,readonly) CGImageRef image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)newWithError:(id)arg1 ;
+(id)newWithImage:(CGImageRef)arg1 source:(unsigned long long)arg2 error:(id)arg3 ;
+(id)newWithImage:(CGImageRef)arg1 extraData:(id)arg2 source:(unsigned long long)arg3 error:(id)arg4 ;
+(id)newWithCachedImage:(id)arg1 source:(unsigned long long)arg2 error:(id)arg3 ;
+(id)newWithCachedImage:(id)arg1 source:(unsigned long long)arg2 ;
+(id)newWithImage:(CGImageRef)arg1 source:(unsigned long long)arg2 ;
-(unsigned long long)imageSource;
-(id)webP_animatedImage;
-(void)dealloc;
-(CGImageRef)image;
-(BOOL)isCached;
-(NSError *)error;
-(id)animatedImage;
-(void)setExtraData:(id)arg1 ;
-(id)extraData;
@end

