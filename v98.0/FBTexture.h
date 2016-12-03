/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class GLKTextureInfo, EAGLContext;

@interface FBTexture : NSObject {

	GLKTextureInfo* _textureInfo;
	long long _wrapSMode;
	long long _wrapTMode;
	long long _minFilter;
	long long _magFilter;
	EAGLContext* _context;

}

@property (nonatomic,retain) EAGLContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) GLKTextureInfo * textureInfo;              //@synthesize textureInfo=_textureInfo - In the implementation block
@property (assign,nonatomic) long long wrapSMode;                         //@synthesize wrapSMode=_wrapSMode - In the implementation block
@property (assign,nonatomic) long long wrapTMode;                         //@synthesize wrapTMode=_wrapTMode - In the implementation block
@property (assign,nonatomic) long long minFilter;                         //@synthesize minFilter=_minFilter - In the implementation block
@property (assign,nonatomic) long long magFilter;                         //@synthesize magFilter=_magFilter - In the implementation block
-(id)initWithContext:(id)arg1 contentsOfCGImage:(CGImageRef)arg2 options:(id)arg3 error:(id*)arg4 ;
-(GLKTextureInfo *)textureInfo;
-(id)initWithContext:(id)arg1 contentsOfData:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithContext:(id)arg1 contentsOfFile:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithContext:(id)arg1 textureInfo:(id)arg2 ;
-(int)convertWrapMode:(long long)arg1 ;
-(int)convertMinFilter:(long long)arg1 ;
-(int)convertMagFilter:(long long)arg1 ;
-(id)initWithContext:(id)arg1 width:(int)arg2 height:(int)arg3 data:(void*)arg4 ;
-(void)setWrapSMode:(long long)arg1 ;
-(void)setWrapTMode:(long long)arg1 ;
-(long long)wrapSMode;
-(long long)wrapTMode;
-(long long)minFilter;
-(long long)magFilter;
-(void)dealloc;
-(EAGLContext *)context;
-(void)setContext:(EAGLContext *)arg1 ;
-(void)setMinFilter:(long long)arg1 ;
-(void)setMagFilter:(long long)arg1 ;
-(void)setDefaults;
@end

