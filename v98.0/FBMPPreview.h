/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBMPOutput.h>

@protocol OS_dispatch_queue;
@class FBMPBaseConsumerPort, FBSurfaceView, FBVideoProcessor, UIImageView, NSObject, NSString;

@interface FBMPPreview : UIView <FBMPOutput> {

	FBMPBaseConsumerPort* _port;
	FBSurfaceView* _surfaceView;
	FBVideoProcessor* _videoProcessor;
	UIImageView* _placeholder;
	unsigned long long _scalingMode;
	NSObject*<OS_dispatch_queue> _renderQueue;
	CMSampleBufferSmartPtr* _lastRenderedBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_videoProcessor;
-(id)consumerPorts;
-(void)_render:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(void)setScalingMode:(unsigned long long)arg1 ;
-(void)render:(opaqueCMSampleBufferRef)arg1 ;
@end

