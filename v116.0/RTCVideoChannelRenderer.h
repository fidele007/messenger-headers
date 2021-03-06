/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSCondition, VideoRenderIosView;

@interface RTCVideoChannelRenderer : NSObject {

	unsigned long long _renderingState;
	BOOL _backgrounding;
	BOOL _rendering;
	BOOL _contextCreated;
	NSCondition* _renderingCondition;
	VideoRenderIosView* _view;

}

@property (nonatomic,retain) VideoRenderIosView * view;              //@synthesize view=_view - In the implementation block
-(void)_waitUntilRenderingPaused;
-(void)_restartVideoIfNeeded;
-(void)uninitialize;
-(void)_setRenderingState:(unsigned long long)arg1 ;
-(BOOL)_startRenderingFrame;
-(void)renderFrame:(const VideoFrame*)arg1 ;
-(void)_stopRenderingFrame;
-(id)initWithView:(id)arg1 WithRenderCallback:(FrameRenderCallback*)arg2 ;
-(BOOL)isRenderingActive;
-(void)startRendering;
-(void)stopRendering;
-(void)dealloc;
-(VideoRenderIosView *)view;
-(void)setView:(VideoRenderIosView *)arg1 ;
@end

