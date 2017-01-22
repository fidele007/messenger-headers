/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/RTCVideoPreviewContainer.h>

@protocol FBWebRTCVideoViewDelegate;
@class RTCVideoPreviewView, FBSurfaceView, FBVideoProcessor, UIView, UIImageView, NSString;

@interface FBWebRTCVideoView : UIView <RTCVideoPreviewContainer> {

	RTCVideoPreviewView* _previewView;
	FBSurfaceView* _customPreviewView;
	FBVideoProcessor* _copyProcessor;
	UIView* _placeholder;
	UIView* _muteOverlayView;
	UIImageView* _muteOverlayImageView;
	id<FBWebRTCVideoViewDelegate> _delegate;
	unsigned long long _muteIconSizeOption;
	long long _videoOrientation;

}

@property (assign,nonatomic,__weak) id<FBWebRTCVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long muteIconSizeOption;                      //@synthesize muteIconSizeOption=_muteIconSizeOption - In the implementation block
@property (assign,nonatomic) BOOL microphoneMutedOverride; 
@property (assign,nonatomic) long long videoOrientation;                                 //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMuteIconSizeOption:(unsigned long long)arg1 ;
-(void)setMicrophoneMutedOverride:(BOOL)arg1 ;
-(id)copyProcessor;
-(void)previewOnCustomerLayer:(opaqueCMSampleBufferRef)arg1 outputVideoOrientation:(long long)arg2 ;
-(void)makeActiveWithPreviewView:(id)arg1 ;
-(void)makeActiveWithCustomPreviewView;
-(void)makeInactive;
-(BOOL)microphoneMutedOverride;
-(unsigned long long)muteIconSizeOption;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCVideoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCVideoViewDelegate>)delegate;
-(long long)videoOrientation;
-(void)setVideoOrientation:(long long)arg1 ;
@end
