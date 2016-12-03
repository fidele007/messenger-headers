/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFXGridMeshEffect.h>

@interface FBFXRippleEffect : FBFXGridMeshEffect {

	float _time;
	double _duration;
	double _wavelength;
	double _speed;
	CGPoint _source;

}

@property (assign,nonatomic) CGPoint source;                 //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) double duration;                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double wavelength;              //@synthesize wavelength=_wavelength - In the implementation block
@property (assign,nonatomic) double speed;                   //@synthesize speed=_speed - In the implementation block
-(void)animate:(float)arg1 finished:(BOOL*)arg2 ;
-(void)configureVertex:(FBFXGeometryEffectVertex*)arg1 forNormalizedPoint:(CGPoint)arg2 withRect:(CGRect)arg3 texCoordExtent:(TexCoordExtent)arg4 ;
-(double)wavelength;
-(void)setWavelength:(double)arg1 ;
-(id)init;
-(void)setSpeed:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setSource:(CGPoint)arg1 ;
-(CGPoint)source;
-(double)speed;
@end
