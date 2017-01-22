/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FB360VideoPlayerNodeDelegate <NSObject>
@required
-(void)videoPlayer:(id)arg1 didUpdatePlaybackTime:(double)arg2;
-(void)videoPlayer:(id)arg1 didUpdateLoadedDuration:(double)arg2;
-(void)videoPlayerDidPlayToEnd:(id)arg1;
-(void)videoPlayer:(id)arg1 didUpdateStallState:(BOOL)arg2;
-(void)videoPlayerDidStartPlayback:(id)arg1;
-(void)videoPlayer:(id)arg1 wasTappedAtPoint:(CGPoint)arg2;
-(void)videoPlayerDidRenderFrame:(id)arg1;
-(void)videoPlayerViewDidMoveSignificantly:(id)arg1;
-(void)videoPlayerViewDidMoveWithDrag:(id)arg1;
-(void)videoPlayerDidUpdateZoomLevelWithPinch:(id)arg1;

@end
