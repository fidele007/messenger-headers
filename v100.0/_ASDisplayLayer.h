/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol _ASDisplayLayerDelegate;
@class ASSentinel;

@interface _ASDisplayLayer : CALayer {

	Mutex _asyncDelegateLock;
	RecursiveMutex _displaySuspendedLock;
	BOOL _displaySuspended;
	id<_ASDisplayLayerDelegate> _asyncDelegate;
	ASSentinel* _displaySentinel;

}

@property (assign) BOOL displaysAsynchronously; 
@property (nonatomic,readonly) ASSentinel * displaySentinel;               //@synthesize displaySentinel=_displaySentinel - In the implementation block
@property (__weak) id<_ASDisplayLayerDelegate> asyncDelegate; 
@property (getter=isDisplaySuspended) BOOL displaySuspended; 
+(id)displayQueue;
+(id)defaultValueForKey:(id)arg1 ;
-(BOOL)displaysAsynchronously;
-(void)setDisplaySuspended:(BOOL)arg1 ;
-(void)cancelAsyncDisplay;
-(void)setAsyncDelegate:(id<_ASDisplayLayerDelegate>)arg1 ;
-(void)displayImmediately;
-(void)_hackResetNeedsDisplay;
-(BOOL)isDisplaySuspended;
-(id<_ASDisplayLayerDelegate>)asyncDelegate;
-(ASSentinel *)displaySentinel;
-(void)setNeedsDisplay;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(void)display;
-(void)display:(BOOL)arg1 ;
-(void)layoutSublayers;
@end

