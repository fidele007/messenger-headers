/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCachedImage.h>

@class NSData, FLAnimatedImage;

@interface FBCachedAnimatedWebP : FBCachedImage {

	NSData* _data;
	CGImageRef _image;
	unsigned long long _frameCount;
	FLAnimatedImage* _animatedImage;

}
-(id)initWithData:(id)arg1 fileURL:(id)arg2 ;
-(void)decodeIfNeeded;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(unsigned long long)cost;
-(id)extraData;
@end
