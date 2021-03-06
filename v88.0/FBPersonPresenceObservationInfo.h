/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableDictionary, FBSyncPresence;

@interface FBPersonPresenceObservationInfo : NSObject {

	NSHashTable* _observers;
	NSMutableDictionary* _blockObservers;
	FBSyncPresence* _currentPresence;

}

@property (nonatomic,retain) NSHashTable * observers;                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blockObservers;              //@synthesize blockObservers=_blockObservers - In the implementation block
@property (nonatomic,copy) FBSyncPresence * currentPresence;                    //@synthesize currentPresence=_currentPresence - In the implementation block
-(NSMutableDictionary *)blockObservers;
-(void)setBlockObservers:(NSMutableDictionary *)arg1 ;
-(FBSyncPresence *)currentPresence;
-(void)setCurrentPresence:(FBSyncPresence *)arg1 ;
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end

