/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFreehandDrawingFilterCommand.h>

@interface FBFreehandDrawingFilterMoveCommand : FBFreehandDrawingFilterCommand {

	CGPoint _startPoint;
	CGPoint _endPoint;
	CGSize _drawingSurfaceSize;
	GLKVector4 _color;
	float _size;

}

@property (nonatomic,readonly) CGPoint startPoint;                     //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                       //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) _GLKVector4 color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) float size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) CGSize drawingSurfaceSize;              //@synthesize drawingSurfaceSize=_drawingSurfaceSize - In the implementation block
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 drawingSurfaceSize:(CGSize)arg3 color:(_GLKVector4)arg4 size:(float)arg5 ;
-(CGSize)drawingSurfaceSize;
-(float)size;
-(CGPoint)startPoint;
-(_GLKVector4)color;
-(CGPoint)endPoint;
@end
