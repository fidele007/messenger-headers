/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLiveLocationThreadSummaryUpdateListener <NSObject>
@required
-(void)receivedLiveLocationsForThreadKey:(id)arg1 liveLocations:(id)arg2;
-(void)threadSummaryReplacedForThreadKey:(id)arg1 originalSummary:(id)arg2 withThreadSummary:(id)arg3;
-(void)purgedAllThreadSummaries;

@end
