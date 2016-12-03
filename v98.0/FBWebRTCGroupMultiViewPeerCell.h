/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCGroupMultiViewCell.h>

@protocol VideoRenderInfo;
@class FBWebRTCPeerView, UIImageView, FBWebRTCPinLockView, UIView;

@interface FBWebRTCGroupMultiViewPeerCell : FBWebRTCGroupMultiViewCell {

	FBWebRTCPeerView* _peerView;
	UIImageView* _imageView;
	FBWebRTCPinLockView* _pinLockView;
	UIView* _dimmerView;
	BOOL _pinned;
	UIView*<VideoRenderInfo> _renderer;

}

@property (nonatomic,readonly) UIView*<VideoRenderInfo> renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                      //@synthesize pinned=_pinned - In the implementation block
-(void)setProfilePicture:(id)arg1 ;
-(void)makeRendererActive;
-(void)makeRendererInactive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(UIView*<VideoRenderInfo>)renderer;
@end
