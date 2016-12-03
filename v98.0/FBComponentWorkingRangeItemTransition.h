/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWorkingRangeItemTimedTransition.h>

@class NSString;

@interface FBComponentWorkingRangeItemTransition : NSObject <FBWorkingRangeItemTimedTransition> {

	long long _state;
	double _timestamp;
	CGSize _visibleSize;

}

@property (nonatomic,readonly) CGSize visibleSize;                  //@synthesize visibleSize=_visibleSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithNewState:(long long)arg1 visibleSize:(CGSize)arg2 timestamp:(double)arg3 ;
-(BOOL)isEquivalentToTransition:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(long long)state;
-(CGSize)visibleSize;
@end
