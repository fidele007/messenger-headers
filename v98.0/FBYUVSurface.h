/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSurface.h>

@interface FBYUVSurface : FBSurface {

	CVBufferRef _chromaCVTexture;
	unsigned _chromaTexture;
	unsigned _chromaTextureTarget;
	unsigned _framebufferUV;

}

@property (nonatomic,readonly) unsigned chromaTexture; 
@property (nonatomic,readonly) unsigned chromaTextureTarget; 
@property (nonatomic,readonly) unsigned framebufferUV; 
@property (nonatomic,readonly) unsigned framebufferY; 
-(unsigned)framebufferY;
-(unsigned)framebufferUV;
-(unsigned)chromaTextureTarget;
-(void)bindTextures;
-(unsigned)lumaTextureTarget;
-(void)dealloc;
-(unsigned)texture;
-(unsigned)lumaTexture;
-(unsigned)chromaTexture;
@end
