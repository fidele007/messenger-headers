/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FB360PhotoRendererProtocol.h>

@protocol FB360PhotoRendererLoggerTextureDataProvider;
@class FB360ViewParams, FB360TiledCubemapRenderObject, FNFGLProgram, FB360PhotoRendererLogger, GLKTextureInfo, NSString;

@interface FB360PhotoCubemapRenderer : NSObject <FB360PhotoRendererProtocol> {

	FB360TiledCubemapRenderObject* _renderObject;
	FNFGLProgram* _glProgram;
	int _uniforms[3];
	FB360PhotoRendererLogger* _rendererLogger;
	FB360ViewParams* _viewParams;
	id<FB360PhotoRendererLoggerTextureDataProvider> _textureLogProvider;
	GLKTextureInfo* _textureInfo;

}

@property (nonatomic,readonly) FB360ViewParams * viewParams;                                                         //@synthesize viewParams=_viewParams - In the implementation block
@property (nonatomic,readonly) FB360PhotoRendererLogger * rendererLogger;                                            //@synthesize rendererLogger=_rendererLogger - In the implementation block
@property (assign,nonatomic,__weak) id<FB360PhotoRendererLoggerTextureDataProvider> textureLogProvider;              //@synthesize textureLogProvider=_textureLogProvider - In the implementation block
@property (nonatomic,retain) GLKTextureInfo * textureInfo;                                                           //@synthesize textureInfo=_textureInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gatherLogResults;
-(FB360ViewParams *)viewParams;
-(void)renderWithSize:(CGSize)arg1 ;
-(id)initWithViewParams:(id)arg1 ;
-(BOOL)_setupShader;
-(void)_setupUniformMatrixWithSize:(CGSize)arg1 ;
-(id<FB360PhotoRendererLoggerTextureDataProvider>)textureLogProvider;
-(void)setTextureLogProvider:(id<FB360PhotoRendererLoggerTextureDataProvider>)arg1 ;
-(FB360PhotoRendererLogger *)rendererLogger;
-(void)setTextureInfo:(GLKTextureInfo *)arg1 ;
-(void)invalidate;
-(GLKTextureInfo *)textureInfo;
@end

