/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGSurfaceInputType.h>

@class IGSurface, NSString;

@interface IGYUVSurface : NSObject <IGSurfaceInputType> {

	CVBufferRef _pixelBuffer;
	IGSurface* _lumaSurface;
	IGSurface* _chromaSurface;

}

@property (nonatomic,retain) IGSurface * lumaSurface;                               //@synthesize lumaSurface=_lumaSurface - In the implementation block
@property (nonatomic,retain) IGSurface * chromaSurface;                             //@synthesize chromaSurface=_chromaSurface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped; 
@property (nonatomic,readonly) BOOL isConsumable; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)isConsumable;
-(IGSurface *)lumaSurface;
-(IGSurface *)chromaSurface;
-(void)setLumaSurface:(IGSurface *)arg1 ;
-(void)setChromaSurface:(IGSurface *)arg1 ;
-(CVBufferRef)pixelBuffer;
-(CGSize)size;
-(void)dealloc;
-(unsigned char)isFlipped;
@end

