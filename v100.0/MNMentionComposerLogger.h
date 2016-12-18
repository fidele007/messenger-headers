/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalytics;

@interface MNMentionComposerLogger : NSObject {

	FBAnalytics* _analytics;
	unsigned long long _numTrigger;
	unsigned long long _numSelect;
	unsigned long long _numEdit;

}
-(void)resetAllCounters;
-(void)recordMentionsAffectedWithNumber:(unsigned long long)arg1 ;
-(void)logMessageSentWithNumberOfMentions:(unsigned long long)arg1 offlineThreadId:(id)arg2 threadSummary:(id)arg3 ;
-(void)recordMentionTrigger;
-(void)recordMentionSelect;
-(id)init;
@end
