/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFXGeometryEffect.h>

@interface FBFXConfettiEffect : FBFXGeometryEffect {

	int _rows;
	int _columns;
	CGSize _correctedFragmentSize;
	FBFXConfettiEffectFragment* _fragments;

}
-(void)update:(FBFXConfettiEffectUpdate*)arg1 forFragment:(const FBFXConfettiEffectFragment*)arg2 atColumn:(int)arg3 row:(int)arg4 ;
-(void)eachFragment:(/*^block*/id)arg1 ;
-(void)subdivide:(CGSize)arg1 columns:(int*)arg2 rows:(int*)arg3 ;
-(unsigned)buildGeometryWithRect:(CGRect)arg1 texCoordExtent:(TexCoordExtent)arg2 requestVertexBuffer:(/*^block*/id)arg3 requestIndexBuffer:(/*^block*/id)arg4 ;
-(void)configureFragment:(FBFXConfettiEffectFragment*)arg1 atColumn:(int)arg2 row:(int)arg3 ;
-(void)animate:(float)arg1 finished:(BOOL*)arg2 ;
-(BOOL)supportsEdgeAntialiasing;
-(void)dealloc;
@end
