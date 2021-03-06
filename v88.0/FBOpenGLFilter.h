/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFilter.h>

@class FBGLContext, NSBundle;

@interface FBOpenGLFilter : FBFilter {

	FBGLContext* _context;
	int _inputPixelFormat;
	NSBundle* _assetBundle;

}

@property (nonatomic,retain) NSBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
@property (assign,nonatomic) int inputPixelFormat;                //@synthesize inputPixelFormat=_inputPixelFormat - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)shaderConstsForSplineSamplers;
-(int)inputPixelFormat;
-(void)setInputPixelFormat:(int)arg1 ;
-(id)textureWithContentsOfData:(id)arg1 ;
-(id)programForContext:(id)arg1 ;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(id)init;
-(void)setParameters:(id)arg1 ;
-(id)textureNamed:(id)arg1 ;
-(id)samplers;
@end

