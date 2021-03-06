/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoNodeDelegate <NSObject>
@optional
-(void)videoNode:(id)arg1 didUpdatePlaybackTime:(double)arg2;
-(void)videoNode:(id)arg1 didUpdateLoadedDuration:(double)arg2;
-(void)videoNodeDidPlayToEnd:(id)arg1;
-(void)videoNode:(id)arg1 didUpdateStallState:(BOOL)arg2;
-(void)videoNode:(id)arg1 didUpdatePausedState:(BOOL)arg2;
-(void)videoNode:(id)arg1 willUpdateVolume:(double)arg2;
-(void)videoNodeDidStartPlayback:(id)arg1;
-(BOOL)videoNodeShouldUseStateDispatchQueue;

@required
-(void)videoNodeDidDisplayPreviewImage:(id)arg1;

@end

