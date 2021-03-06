/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class GLKSkyboxEffect, GLKView, GLKTextureInfo, FB360ViewParams, NSString;

@interface FB360PhotoRenderer : NSObject <GLKViewDelegate> {

	GLKSkyboxEffect* _skyboxEffect;
	GLKView* _glView;
	GLKTextureInfo* _texture;
	FB360ViewParams* _viewParams;

}

@property (nonatomic,retain) GLKView * glView;                             //@synthesize glView=_glView - In the implementation block
@property (nonatomic,retain) GLKTextureInfo * texture;                     //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) FB360ViewParams * viewParams;               //@synthesize viewParams=_viewParams - In the implementation block
@property (nonatomic,readonly) double effectiveVerticalFoV; 
@property (nonatomic,readonly) double effectiveHorizontalFoV; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(_GLKMatrix4)_projectionMatrixWithViewFovYDegrees:(float)arg1 viewSize:(CGSize)arg2 ;
-(void)updateEffectFromViewParams:(id)arg1 ;
-(double)effectiveVerticalFoV;
-(GLKView *)glView;
-(void)setGlView:(GLKView *)arg1 ;
-(double)effectiveHorizontalFoV;
-(FB360ViewParams *)viewParams;
-(void)dealloc;
-(id)init;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(GLKTextureInfo *)texture;
-(void)setTexture:(GLKTextureInfo *)arg1 ;
@end

