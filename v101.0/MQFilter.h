/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MQFilter <NSObject>
@property (assign,nonatomic,__weak) id<MQFilterDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MQFilterLogger> logger; 
@property (assign,nonatomic,__weak) id<MQFilterLogger> scriptLogger; 
@property (assign,nonatomic) CVOpenGLESTextureCacheRef textureCache; 
@property (assign,nonatomic) BOOL shouldShowDebugOverlay; 
@property (nonatomic,readonly) BOOL isFaceTrackerConfigured; 
@property (assign,nonatomic) unsigned long long activeCamera; 
@required
-(void)setShouldShowDebugOverlay:(BOOL)arg1;
-(BOOL)isFaceTrackerConfigured;
-(CVOpenGLESTextureCacheRef)textureCache;
-(void)setTextureCache:(CVOpenGLESTextureCacheRef)arg1;
-(void)renderWithInputBuffer:(CVBufferRef)arg1 outputSize:(CGSize)arg2;
-(void)setEffectAssetsPath:(id)arg1;
-(void)setStillImageCapture:(BOOL)arg1;
-(BOOL)currentEffectNeedsFaceTracker;
-(unsigned long long)activeCamera;
-(void)suppressRandomFaceTrackingSampling;
-(id<MQFilterLogger>)scriptLogger;
-(void)setScriptLogger:(id)arg1;
-(BOOL)shouldShowDebugOverlay;
-(void)setActiveCamera:(unsigned long long)arg1;
-(void)setDelegate:(id)arg1;
-(id<MQFilterDelegate>)delegate;
-(id<MQFilterLogger>)logger;
-(void)setLogger:(id)arg1;

@end

