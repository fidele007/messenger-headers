/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGDrawBrushGLAbstract.h>

@protocol IGDrawBrushGL;
@class NSString, IGDrawBacking;

@interface IGDrawBackedBrush : IGDrawBrushGLAbstract {

	NSString* _name;
	IGDrawBacking* _backing;
	id<IGDrawBrushGL> _brush;
	GLKVector4 _backingColor;

}

@property (nonatomic,retain) IGDrawBacking * backing;                //@synthesize backing=_backing - In the implementation block
@property (nonatomic,readonly) id<IGDrawBrushGL> brush;              //@synthesize brush=_brush - In the implementation block
@property (assign,nonatomic) _GLKVector4 backingColor;               //@synthesize backingColor=_backingColor - In the implementation block
+(id)createForModel:(id)arg1 context:(id)arg2 backingSize:(CGSize)arg3 ;
-(id)initWithBrush:(id)arg1 ;
-(void)setBackingSize:(CGSize)arg1 ;
-(void)setBacking:(IGDrawBacking *)arg1 ;
-(id)createMark;
-(IGDrawBacking *)backing;
-(id)name;
-(void)setColor:(id)arg1 ;
-(void)setSize:(double)arg1 ;
-(id)context;
-(void)prepareToDraw;
-(void)setBackingColor:(_GLKVector4)arg1 ;
-(_GLKVector4)backingColor;
-(id<IGDrawBrushGL>)brush;
@end

