/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPresenceUpdateListening.h>

@protocol MNPresenceSubscribing;
@class NSMutableDictionary, NSString;

@interface FBWebRTCCellPresenceController : NSObject <MNPresenceUpdateListening> {

	id<MNPresenceSubscribing> _presenceSubscriptionService;
	NSMutableDictionary* _indexToCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)removePresenceCellByIndex:(id)arg1 ;
-(void)addPresenceCell:(id)arg1 index:(id)arg2 ;
-(id)initWithPresenceService:(id)arg1 ;
-(void)clearPresenceForAllPersons;
-(void)_addPresenceCell:(id)arg1 index:(id)arg2 ;
-(void)_removePresenceCellByIndex:(id)arg1 ;
-(void)_clearPresenceForAllPersons;
-(void)_didReceivePresenceUpdate:(id)arg1 ;
-(id)_keyFromIndex:(id)arg1 ;
-(void)_removePresenceId:(id)arg1 ;
-(void)dealloc;
@end

