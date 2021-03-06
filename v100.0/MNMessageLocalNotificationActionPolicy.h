/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, FBAnalytics, NSObject;

@interface MNMessageLocalNotificationActionPolicy : NSObject {

	NSArray* _identifiedMessageRuleCheckers;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_logIdentifiedActionRuleResult:(id)arg1 forMessageWithId:(id)arg2 ;
-(id)initWithIdentifiedMessageRuleCheckers:(id)arg1 analytics:(id)arg2 queue:(id)arg3 ;
-(long long)actionForMessage:(id)arg1 threadSummary:(id)arg2 sender:(id)arg3 ;
@end

