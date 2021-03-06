/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/VideoRenderInfoDelegate.h>
#import <Messenger/VideoRenderInfo.h>

@protocol VideoRenderInfo, VideoRenderInfoDelegate;
@class UIView, NSString;

@interface FBWebRTCPeerVideoView : UIView <VideoRenderInfoDelegate, VideoRenderInfo> {

	UIView*<VideoRenderInfo> _peerView;
	UIView* _placeholderView;
	id<VideoRenderInfoDelegate> _renderInfoDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VideoRenderInfoDelegate> renderInfoDelegate;              //@synthesize renderInfoDelegate=_renderInfoDelegate - In the implementation block
@property (nonatomic,readonly) CGSize videoSize; 
@property (nonatomic,readonly) double timeIntervalSinceLastFrame; 
@property (nonatomic,readonly) BOOL hasVideoStarted; 
@property (assign,nonatomic) unsigned long long videoScaleType; 
@property (nonatomic,readonly) BOOL shouldResizeView; 
-(void)setRenderInfoDelegate:(id<VideoRenderInfoDelegate>)arg1 ;
-(void)videoSizeChangedForInfo:(id)arg1 ;
-(void)clearPlaceholder;
-(void)makeInactivePeerView;
-(void)setVideoScaleType:(unsigned long long)arg1 ;
-(void)makeActivePeerView:(id)arg1 ;
-(BOOL)shouldResizeView;
-(void)videoStreamRestarted;
-(BOOL)hasVideoStarted;
-(double)timeIntervalSinceLastFrame;
-(void)_updateViewToBounds:(CGRect)arg1 ;
-(void)_setPeerView:(id)arg1 ;
-(unsigned long long)videoScaleType;
-(id<VideoRenderInfoDelegate>)renderInfoDelegate;
-(void)captureSnapshotWithTimeout:(double)arg1 callbackQueue:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)videoSize;
@end

