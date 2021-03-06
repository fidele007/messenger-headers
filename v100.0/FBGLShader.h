/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGLContext;

@interface FBGLShader : NSObject {

	unsigned _shaderId;
	FBGLContext* _context;

}

@property (assign,nonatomic,__weak) FBGLContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned shaderId;                       //@synthesize shaderId=_shaderId - In the implementation block
-(id)initVertexShaderWithSource:(id)arg1 ;
-(id)initFragmentShaderWithSource:(id)arg1 ;
-(id)initShaderWithSource:(id)arg1 type:(long long)arg2 ;
-(unsigned)shaderId;
-(void)dealloc;
-(FBGLContext *)context;
-(void)setContext:(FBGLContext *)arg1 ;
@end

