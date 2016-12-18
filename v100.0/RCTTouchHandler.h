/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class RCTEventDispatcher, NSMutableOrderedSet, NSMutableArray;

@interface RCTTouchHandler : UIGestureRecognizer {

	RCTEventDispatcher* _eventDispatcher;
	NSMutableOrderedSet* _nativeTouches;
	NSMutableArray* _reactTouches;
	NSMutableArray* _touchViews;
	BOOL _dispatchedInitialTouches;
	BOOL _recordingInteractionTiming;
	double _mostRecentEnqueueJS;
	unsigned short _coalescingKey;

}
-(id)initWithBridge:(id)arg1 ;
-(void)handleGestureUpdate:(id)arg1 ;
-(void)_updateReactTouchAtIndex:(long long)arg1 ;
-(void)_updateAndDispatchTouches:(id)arg1 eventName:(id)arg2 originatingTime:(double)arg3 ;
-(void)_recordNewTouches:(id)arg1 ;
-(void)_recordRemovedTouches:(id)arg1 ;
-(void)cancel;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
@end
