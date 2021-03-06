/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelUpdateBackfeeding.h>

@class MNPYMMStore, MNPresenceValueCollection, MNInboxViewModelViewStateStore, NSArray, NSString;

@interface MNInboxViewModelElementUpdateBackfeeder : NSObject <MNViewModelUpdateBackfeeding> {

	MNPYMMStore* _pymmStore;
	MNPresenceValueCollection* _presenceValueCollection;
	MNInboxViewModelViewStateStore* _inboxViewStateStore;
	NSArray* _presenceSubscribingUserIdsForConversationStarter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updatePYMMOrderFromPYMMViewModel:(id)arg1 ;
-(void)_subscribeToPresenceForConversationStarterUserIds:(id)arg1 ;
-(void)performBackfeedingUpdateForNewVersionOfViewModel:(id)arg1 ;
-(id)initWithPYMMStore:(id)arg1 presenceValueCollection:(id)arg2 inboxViewStateStore:(id)arg3 ;
@end

