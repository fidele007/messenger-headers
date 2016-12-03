/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSampledWorkingRangeControllerDelegate.h>

@protocol FBAggregateWorkingRangeControllerDelegate;
@class NSArray, NSString;

@interface FBAggregateWorkingRangeController : NSObject <FBSampledWorkingRangeControllerDelegate> {

	NSArray* _sampledWorkingRangeControllers;
	id<FBAggregateWorkingRangeControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAggregateWorkingRangeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSampledWorkingRangeControllers:(id)arg1 ;
-(void)sampleSnapshot:(id)arg1 ;
-(void)sampledWorkingRangeController:(id)arg1 itemTransitionedToNewState:(id)arg2 previousTransitions:(id)arg3 itemViewState:(id)arg4 snapshot:(id)arg5 ;
-(void)setDelegate:(id<FBAggregateWorkingRangeControllerDelegate>)arg1 ;
-(id<FBAggregateWorkingRangeControllerDelegate>)delegate;
@end

