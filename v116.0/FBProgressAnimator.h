/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBProgressAnimator : NSObject {

	/*^block*/id _updateBlock;
	CGPoint _c1;
	CGPoint _c2;
	double _startTime;
	double _previousAnimatedProgressDelta;
	double _currentProgress;

}

@property (nonatomic,readonly) double currentProgress;              //@synthesize currentProgress=_currentProgress - In the implementation block
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)animateToProgress:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)_newProgressAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)reset;
-(double)currentProgress;
@end

