/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFXEffect.h>

@interface FBFXIdentityEffect : FBFXEffect {

	TextureShader _shader;
	unsigned _geometry;

}
-(void)renderWithRect:(CGRect)arg1 transform:(tmat4x4<float>)arg2 texture:(unsigned)arg3 texCoordExtent:(TexCoordExtent)arg4 alpha:(float)arg5 ;
-(void)teardown;
@end
