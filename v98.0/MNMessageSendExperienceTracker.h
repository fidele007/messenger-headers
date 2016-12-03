/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnimationPerformanceTrackerDelegate.h>
#import <Messenger/MNMessageSendMarking.h>

@class FBAnimationPerformanceTracker, FBQuickPerformanceLogger, MNMessageSendAnimationRecord, FBAnalytics, NSString;

@interface MNMessageSendExperienceTracker : NSObject <FBAnimationPerformanceTrackerDelegate, MNMessageSendMarking> {

	FBAnimationPerformanceTracker* _animationPerformanceTracker;
	FBQuickPerformanceLogger* _quickLogger;
	unsigned long long _sendExperienceStartTime;
	MNMessageSendAnimationRecord* _currentAnimationRecord;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didQueueMessageSend;
-(void)didDequeueMessageSend;
-(void)userDidPressSend;
-(void)messagesCollectionViewDidCompleteDrawing;
-(id)initWithQuickPerformanceLogger:(id)arg1 analytics:(id)arg2 ;
-(void)_markStartOfMessageSend;
-(void)_markEndOfMessageSend;
-(unsigned long long)_currentMonotonicDuration;
-(void)_logMessageSendEventWithDuration:(unsigned long long)arg1 animationRecord:(id)arg2 ;
-(void)reportDurationInMS:(long long)arg1 smallDropEvents:(double)arg2 largeDropEvents:(double)arg3 totalStallTimeInMS:(long long)arg4 ;
-(void)reportStackTrace:(id)arg1 ;
-(void)willReportStackTraces;
-(void)didReportStackTraces;
-(void)_cancel;
@end
