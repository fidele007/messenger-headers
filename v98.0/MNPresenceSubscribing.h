/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPresenceSubscribing <NSObject>
@required
-(void)addPresenceUpdateListenerForAllPeople:(id)arg1;
-(void)removePresenceUpdateListenerForAllPeople:(id)arg1;
-(void)removePresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2;
-(void)addPresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2;
-(void)removeAllPresenceUpdateSubscriptionsForListener:(id)arg1;

@end

