/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFPlayerRenderer.h>
#import <Messenger/FNF360RendererProtocol.h>

@class FNFGLProgram, FNF360VertexArrayObject, NSString;

@interface FNF360Renderer : NSObject <FNFPlayerRenderer, FNF360RendererProtocol> {

	FNFGLProgram* _glProgram;
	FNFGLProgram* _glDebugProgram;
	double _fovY;
	unsigned long long _projectionType;
	double _videoWidth;
	FNF360VertexArrayObject* _VAO[3];
	int _uniforms[6];
	int _backingWidth;
	int _backingHeight;
	const float* _colorConversion;
	/*^block*/id _drawFrameCallback;
	BOOL _supportOpenGLTextureRg;
	BOOL _shouldRender360CubeGeometry;
	double _zNear;
	double _zFar;
	GLKMatrix4 _pMatrix;
	GLKMatrix4 _mvMatrix;

}

@property (assign,nonatomic) GLKMatrix4 pMatrix;                            //@synthesize pMatrix=_pMatrix - In the implementation block
@property (assign,nonatomic) GLKMatrix4 mvMatrix;                           //@synthesize mvMatrix=_mvMatrix - In the implementation block
@property (assign,nonatomic) double zNear;                                  //@synthesize zNear=_zNear - In the implementation block
@property (assign,nonatomic) double zFar;                                   //@synthesize zFar=_zFar - In the implementation block
@property (assign,nonatomic) BOOL shouldRender360CubeGeometry;              //@synthesize shouldRender360CubeGeometry=_shouldRender360CubeGeometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldRender360CubeGeometry:(BOOL)arg1 ;
-(void)setDrawFrameCallback:(/*^block*/id)arg1 ;
-(void)setProjectionType:(unsigned long long)arg1 videoWidth:(double)arg2 ;
-(void)setViewMatrix:(GLKMatrix4)arg1 fovY:(double)arg2 ;
-(BOOL)shouldRender360CubeGeometry;
-(BOOL)_loadShaders;
-(void)beginDrawFrame;
-(void)drawFrameWithBackingWidth:(int)arg1 backingHeight:(int)arg2 colorConversion:(const float*)arg3 ;
-(BOOL)shouldRenderWhilePlaybackPaused;
-(BOOL)setupGLState;
-(BOOL)drawFrame:(BOOL)arg1 presentationRect:(CGSize)arg2 backingWidth:(int)arg3 backingHeight:(int)arg4 frameBuffer:(unsigned)arg5 videoGravity:(id)arg6 rotation:(double)arg7 layerBounds:(CGRect)arg8 transform:(CGAffineTransform)arg9 colorConversion:(const float*)arg10 ;
-(void)restoreGLState;
-(void)processPixelBuffer:(CVBufferRef)arg1 ;
-(GLKMatrix4)pMatrix;
-(void)setPMatrix:(GLKMatrix4)arg1 ;
-(GLKMatrix4)mvMatrix;
-(void)setMvMatrix:(GLKMatrix4)arg1 ;
-(id)init;
-(void)invalidate;
-(double)zFar;
-(void)setZFar:(double)arg1 ;
-(double)zNear;
-(void)setZNear:(double)arg1 ;
-(BOOL)_setupBuffers;
@end
