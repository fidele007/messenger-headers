/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURL;

@interface FBCachedImage : NSObject {

	int _state;
	/*^block*/id _imageDecoder;
	CGImageRef _image;
	id _extraData;
	unsigned long long _fileSize;
	NSURL* _fileURL;
	NSRange _imageSize;

}

@property (assign) int state;                                            //@synthesize state=_state - In the implementation block
@property (retain) CGImageRef image;                                     //@synthesize image=_image - In the implementation block
@property (retain,readonly) id extraData;                                //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSRange imageSize;                        //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long cost; 
-(id)initWithImage:(CGImageRef)arg1 fileSize:(unsigned long long)arg2 fileURL:(id)arg3 imageDecoder:(/*^block*/id)arg4 ;
-(id)initWithImageSize:(NSRange)arg1 fileSize:(unsigned long long)arg2 fileURL:(id)arg3 ;
-(void)decodeIfNeeded;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(CGImageRef)image;
-(NSRange)imageSize;
-(NSURL *)fileURL;
-(unsigned long long)fileSize;
-(unsigned long long)cost;
-(id)extraData;
@end
