/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPinchGestureRecognizer.h>

@interface FBPinchGestureRecognizer : UIPinchGestureRecognizer {

	unsigned long long _maximumNumberOfTouches;
	BOOL _beginsImmediately;

}

@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;              //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) BOOL beginsImmediately;                                 //@synthesize beginsImmediately=_beginsImmediately - In the implementation block
-(void)setBeginsImmediately:(BOOL)arg1 ;
-(BOOL)beginsImmediately;
-(id)init;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(unsigned long long)maximumNumberOfTouches;
@end

