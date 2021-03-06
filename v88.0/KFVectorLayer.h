/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer, KFVector;

@interface KFVectorLayer : CALayer {

	CALayer* _containerLayer;
	KFVector* _faceModel;

}

@property (nonatomic,retain) KFVector * faceModel;              //@synthesize faceModel=_faceModel - In the implementation block
-(void)_setupFace:(id)arg1 ;
-(void)setFaceModel:(KFVector *)arg1 ;
-(void)seekToProgress:(double)arg1 ;
-(KFVector *)faceModel;
-(void)startAnimation;
-(void)layoutSublayers;
-(void)pauseAnimation;
@end

