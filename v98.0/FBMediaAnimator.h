/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaAnimatorDelegate;
#import <Messenger/Messenger-Structs.h>
@interface FBMediaAnimator : NSObject {

	int _state;
	id<FBMediaAnimatorDelegate> _delegate;
	CGSize _mediaSize;
	CGSize _viewportSize;

}

@property (assign,nonatomic,__weak) id<FBMediaAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGSize mediaSize;                                         //@synthesize mediaSize=_mediaSize - In the implementation block
@property (assign,nonatomic) CGSize viewportSize;                                      //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) CGPoint targetMediaCoordinate; 
@property (nonatomic,readonly) double targetZoomScale; 
@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) BOOL isConfigured; 
-(CGSize)mediaSize;
-(id)initWithMediaSize:(CGSize)arg1 viewportSize:(CGSize)arg2 ;
-(void)setMediaSize:(CGSize)arg1 ;
-(CGPoint)targetMediaCoordinate;
-(double)targetZoomScale;
-(void)tick;
-(void)updateForTargetMediaCoordinate:(CGPoint)arg1 targetZoomScale:(double)arg2 ;
-(void)setDelegate:(id<FBMediaAnimatorDelegate>)arg1 ;
-(id<FBMediaAnimatorDelegate>)delegate;
-(int)state;
-(void)suspend;
-(void)stop;
-(void)start;
-(double)progress;
-(void)pause;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
-(BOOL)isConfigured;
@end

