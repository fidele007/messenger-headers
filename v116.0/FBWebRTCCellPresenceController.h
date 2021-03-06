/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNPresenceUpdateListening.h>

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
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)dealloc;
@end

