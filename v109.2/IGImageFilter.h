/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGGLFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGImageFilter : IGGLFilter <NSCopying> {

	BOOL _needsConfigure;
	BOOL _shouldClearBeforeDrawing;
	BOOL _flip;
	double _strength;
	NSString* _fullFragmentShader;
	long long _inputPixelFormat;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (assign,nonatomic) BOOL flip;                                  //@synthesize flip=_flip - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;               //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;               //@synthesize textureTransform=_textureTransform - In the implementation block
@property (assign,nonatomic) double strength;                            //@synthesize strength=_strength - In the implementation block
@property (nonatomic,copy) NSString * fullFragmentShader;                //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
@property (assign,nonatomic) long long inputPixelFormat;                 //@synthesize inputPixelFormat=_inputPixelFormat - In the implementation block
@property (assign,nonatomic) BOOL shouldClearBeforeDrawing;              //@synthesize shouldClearBeforeDrawing=_shouldClearBeforeDrawing - In the implementation block
+(long long)filterType;
+(id)filterName;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)strengthShaderCode;
-(BOOL)shouldClearBeforeDrawing;
-(void)setInputPixelFormat:(long long)arg1 ;
-(void)setShouldClearBeforeDrawing:(BOOL)arg1 ;
-(long long)inputPixelFormat;
-(id)fullVertexShader;
-(NSString *)fullFragmentShader;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)setFlip:(BOOL)arg1 ;
-(void)setFullFragmentShader:(NSString *)arg1 ;
-(id)generateFullFragmentShader;
-(id)fragmentShaderPrecision;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)flip;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)vertexShader;
-(id)fragmentShader;
@end

