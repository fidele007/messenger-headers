/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactListModelControllerDelegate.h>
#import <Messenger/MNFriendListModelController.h>

@protocol MNFriendListModelControllerDelegate;
@class FBContactStore, MNPresenceSubscriptionService, MNContactListModelController;

@interface MNContactSyncFriendListModelController : NSObject <MNContactListModelControllerDelegate, MNFriendListModelController> {

	FBContactStore* _contactStore;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	id<MNFriendListModelControllerDelegate> _delegate;
	MNContactListModelController* _modelController;
	BOOL _started;

}
-(void)startRequestWithType:(unsigned long long)arg1 sortField:(unsigned long long)arg2 fetchLimit:(int)arg3 delegate:(id)arg4 ;
-(id)initWithContactStore:(id)arg1 presenceSubscriptionService:(id)arg2 ;
-(void)contactListModelController:(id)arg1 didLoadContactSyncUsers:(id)arg2 ;
-(void)contactListModelControllerDidStartLoading:(id)arg1 ;
-(void)contactListModelControllerdidFinishLoading:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(BOOL)isStarted;
@end

