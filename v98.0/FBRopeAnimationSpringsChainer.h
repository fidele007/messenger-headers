/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/POPAnimationDelegate.h>

@class POPCustomAnimation, NSArray, NSString;

@interface FBRopeAnimationSpringsChainer : NSObject <POPAnimationDelegate> {

	unsigned long long _springNodesCount;
	POPCustomAnimation* _aggregationAnimation;
	NSArray* _springNodeAnimations;
	double* _springNodeAnimationValues;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;
	BOOL _animating;

}

@property (nonatomic,readonly) BOOL animating;                      //@synthesize animating=_animating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(FBRopeAnimationSpringsChainerOptions)defaultChainerOptions;
-(void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)pop_animationDidApply:(id)arg1 ;
-(BOOL)_updateFromCustomAnimation:(id)arg1 ;
-(void)_setupSpringNodeAnimations:(const FBRopeAnimationSpringsChainerOptions*)arg1 ;
-(void)_initializeSpringNodeAnimationValues;
-(id)initWithSpringNodeCount:(unsigned long long)arg1 options:(const FBRopeAnimationSpringsChainerOptions*)arg2 ;
-(void)animateRope:(unsigned long long)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(BOOL)animating;
@end

