/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGDrawBrushGLMark.h>

@protocol IGDrawBrushGL, IGDrawDynamics;
@class IGDrawMappedBufferRange, IGGLBlendMode, NSString;

@interface IGDrawBrushGLPointMark : NSObject <IGDrawBrushGLMark> {

	id<IGDrawBrushGL> _brush;
	GLKVector4 _color;
	double _touchViewDelta;
	unsigned _vertexArrayObject;
	double _remainder;
	double _totalDistance;
	IGDrawMappedBufferRange* _vertexRange;
	BOOL _hadToStopDueToFullBuffer;
	id<IGDrawDynamics> _dynamics;
	double _size;
	double _spacing;
	IGGLBlendMode* _blendMode;

}

@property (assign,nonatomic) double size;                                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double alpha; 
@property (nonatomic,readonly) id<IGDrawDynamics> dynamics;                  //@synthesize dynamics=_dynamics - In the implementation block
@property (assign,nonatomic) double spacing;                                 //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,retain) IGGLBlendMode * blendMode;                      //@synthesize blendMode=_blendMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsIncrementalDrawing; 
@property (nonatomic,readonly) id<IGDrawBrushGL> brush;                      //@synthesize brush=_brush - In the implementation block
@property (assign,nonatomic) BOOL hadToStopDueToFullBuffer;                  //@synthesize hadToStopDueToFullBuffer=_hadToStopDueToFullBuffer - In the implementation block
-(id)initWithBrush:(id)arg1 ;
-(void)drawIncremental;
-(BOOL)hadToStopDueToFullBuffer;
-(void)setHadToStopDueToFullBuffer:(BOOL)arg1 ;
-(void)endWith:(IGTouchSample)arg1 ;
-(BOOL)supportsIncrementalDrawing;
-(void)associateAttributesWithCurrentVertexRange;
-(void)auxDraw:(NSRange)arg1 ;
-(id<IGDrawDynamics>)dynamics;
-(void)idleUntil:(double)arg1 endingStroke:(BOOL)arg2 ;
-(void)addLastPoint;
-(double)size;
-(void)setAlpha:(double)arg1 ;
-(void)setColor:(id)arg1 ;
-(double)alpha;
-(void)setSize:(double)arg1 ;
-(void)draw;
-(void)addSample:(IGTouchSample)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(IGGLBlendMode *)blendMode;
-(void)setBlendMode:(IGGLBlendMode *)arg1 ;
-(void)prepareToDraw;
-(void)startWith:(IGTouchSample)arg1 ;
-(void)idle;
-(id<IGDrawBrushGL>)brush;
@end

