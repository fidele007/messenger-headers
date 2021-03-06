/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class CALayer, CAShapeLayer, NSArray;

@interface FBSpeakerNode : ASDisplayNode {

	double _strikethroughState;
	double _soundWavesState;
	CALayer* _speakerSoundWavesLayer;
	CAShapeLayer* _speakerNegativeStrikethroughMaskShapeLayer;
	CAShapeLayer* _strikethroughShapeLayer;
	CAShapeLayer* _speakerShapeLayer;
	CALayer* _soundWavesLayer;
	NSArray* _soundWaveshapeLayers;
	CAShapeLayer* _soundWavesMaskShapeLayer;
	unsigned long long _soundWaves;
	BOOL _strikethrough;

}

@property (assign,nonatomic) BOOL strikethrough;                         //@synthesize strikethrough=_strikethrough - In the implementation block
@property (assign,nonatomic) unsigned long long soundWaves;              //@synthesize soundWaves=_soundWaves - In the implementation block
-(void)_staticInitialize;
-(void)didLoad;
-(void)setStrikethrough:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSoundWaves:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)soundWaves;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)willEnterHierarchy;
-(id)_soundWavesAnimatableProperty;
-(void)didExitHierarchy;
-(void)_layoutSpeakerStrikethrough;
-(void)_layoutSoundWaves;
-(void)_layoutsoundWaveShape:(id)arg1 withState:(double)arg2 ;
-(void)setStrikethrough:(BOOL)arg1 ;
-(void)setSoundWaves:(unsigned long long)arg1 ;
-(BOOL)strikethrough;
-(id)init;
-(void)layout;
@end

