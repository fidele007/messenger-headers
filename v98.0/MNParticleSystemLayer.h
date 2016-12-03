/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol MNParticleSystemLayerDelegate;
@class NSMutableArray, MNParticleLayer, UITouch, MNSoundController;

@interface MNParticleSystemLayer : CALayer {

	NSMutableArray* _queuedEvents;
	NSMutableArray* _deadParticles;
	BOOL _isRunningSpawns;
	double _nextBirthTime;
	MNParticleLayer* _touchedParticle;
	UITouch* _trackedTouch;
	CGPoint _lastTouchPoint;
	MNSoundController* _soundController;
	id<MNParticleSystemLayerDelegate> _particleSystemLayerDelegate;

}

@property (assign,nonatomic,__weak) id<MNParticleSystemLayerDelegate> particleSystemLayerDelegate;              //@synthesize particleSystemLayerDelegate=_particleSystemLayerDelegate - In the implementation block
-(void)queueParticleWithStyle:(id)arg1 ;
-(void)queueSoundName:(long long)arg1 ;
-(void)_queueEvent:(id)arg1 ;
-(void)_runSpawns:(double)arg1 ;
-(void)_updateParticles:(double)arg1 ;
-(void)_spawnParticleWithStyle:(id)arg1 withBirthTime:(double)arg2 ;
-(BOOL)_isParticleLayerFinished:(id)arg1 ;
-(id)_obtainParticleWithStyle:(id)arg1 ;
-(float)_calculateInitialParticleY:(id)arg1 ;
-(void)touchEnded:(id)arg1 atPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)touchBegan:(id)arg1 atPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)touchMoved:(id)arg1 toPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)touchFlingedWithVelocity:(CGPoint)arg1 ;
-(void)touchCanceled:(id)arg1 atPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(id<MNParticleSystemLayerDelegate>)particleSystemLayerDelegate;
-(void)setParticleSystemLayerDelegate:(id<MNParticleSystemLayerDelegate>)arg1 ;
-(id)init;
-(void)reset;
-(void)update:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setSoundController:(id)arg1 ;
-(void)clearQueue;
@end

