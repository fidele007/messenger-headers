/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserMonitoring.h>

@class FBMessengerSyncEngineManager;

@interface MNSyncEngineUserMonitor : NSObject <MNUserMonitoring> {

	FBMessengerSyncEngineManager* _syncEngineManager;

}
-(void)addPresenceUpdateListener:(id)arg1 ;
-(void)removePresenceUpdateListener:(id)arg1 ;
-(void)addFriendListMonitorListener:(id)arg1 ;
-(void)removeFriendListMonitorListener:(id)arg1 ;
-(void)addFriendChangedMonitorListener:(id)arg1 ;
-(void)removeFriendChangedMonitorListener:(id)arg1 ;
-(void)addFriendListDeltaMonitorListener:(id)arg1 ;
-(void)removeFriendListDeltaMonitorListener:(id)arg1 ;
-(void)addPersonLoadedListener:(id)arg1 ;
-(void)removePersonLoadedListener:(id)arg1 ;
-(id)initWithSyncEngineManager:(id)arg1 ;
@end

