/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MQFilter <NSObject>
@property (assign,nonatomic,__weak) id<MQFilterDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MQFilterLogger> logger; 
@property (assign,nonatomic) CVOpenGLESTextureCacheRef textureCache; 
@property (assign,nonatomic) BOOL shouldShowDebugOverlay; 
@property (nonatomic,readonly) BOOL isFaceTrackerConfigured; 
@required
-(void)setShouldShowDebugOverlay:(BOOL)arg1;
-(BOOL)isFaceTrackerConfigured;
-(CVOpenGLESTextureCacheRef)textureCache;
-(void)setTextureCache:(CVOpenGLESTextureCacheRef)arg1;
-(void)renderWithInputBuffer:(CVBufferRef)arg1 outputSize:(CGSize)arg2;
-(void)setEffectAssetsPath:(id)arg1;
-(void)setEffectConstructor:(/*^block*/id)arg1;
-(void)setStillImageCapture:(BOOL)arg1;
-(BOOL)currentEffectNeedsFaceTracker;
-(void)suppressRandomFaceTrackingSampling;
-(BOOL)shouldShowDebugOverlay;
-(void)setDelegate:(id)arg1;
-(id<MQFilterDelegate>)delegate;
-(id<MQFilterLogger>)logger;
-(void)setLogger:(id)arg1;

@end

