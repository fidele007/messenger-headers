/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGDrawBrushGLTriangleStripMark.h>

@class IGDrawBrushGLTriangleStripMark;

@interface IGDrawBrushNeonGLStripMark : IGDrawBrushGLTriangleStripMark {

	IGDrawBrushGLTriangleStripMark* _underMark;

}

@property (nonatomic,retain) IGDrawBrushGLTriangleStripMark * underMark;              //@synthesize underMark=_underMark - In the implementation block
-(void)endWith:(IGTouchSample)arg1 ;
-(void)setUnderMark:(IGDrawBrushGLTriangleStripMark *)arg1 ;
-(IGDrawBrushGLTriangleStripMark *)underMark;
-(void)draw;
-(void)addSample:(IGTouchSample)arg1 ;
-(void)startWith:(IGTouchSample)arg1 ;
@end

