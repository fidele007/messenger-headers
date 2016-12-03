/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class CADisplayLink, GLKView, NSArray, NSString;

@interface FBFXCoordinator : NSObject <GLKViewDelegate> {

	CADisplayLink* _displayLink;
	GLKView* _glView;
	NSArray* _effects;
	BOOL _didSetup;
	BOOL _useSetNeedsDisplay;
	CVOpenGLESTextureCacheRef _cvOpenGLESTextureCache;

}

@property (nonatomic,readonly) CVOpenGLESTextureCacheRef cvOpenGLESTextureCache;              //@synthesize cvOpenGLESTextureCache=_cvOpenGLESTextureCache - In the implementation block
@property (assign,nonatomic) BOOL useSetNeedsDisplay;                                         //@synthesize useSetNeedsDisplay=_useSetNeedsDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_glView;
-(void)_createGLViewIfNeeded;
-(void)_ensureDisplayLink;
-(id)_createGLContextIfNeededAndPossible;
-(void)setUseSetNeedsDisplay:(BOOL)arg1 ;
-(void)removeEffect:(id)arg1 ;
-(CGSize)framebufferSize;
-(CVOpenGLESTextureCacheRef)cvOpenGLESTextureCache;
-(BOOL)useSetNeedsDisplay;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)tick:(id)arg1 ;
-(void)_invalidateDisplayLink;
-(void)setup;
-(void)teardown;
-(void)addEffect:(id)arg1 ;
@end

