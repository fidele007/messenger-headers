/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <FBSharedFramework/MNFriendListModelControllerDelegate.h>
#import <Messenger/MNActiveNowForegroundNotificationUserProvider.h>

@protocol MNActiveNowForegroundNotificationUserProviderDelegate;
@class MNActiveNowTopFriendsListenerInjector, MNInboxViewModelSubscriptionService, NSNumber, NSSet, MNUserSortRankPolicy, NSString;

@interface MNActiveNowTopFriendsListener : NSObject <FBClassInjectable, MNFriendListModelControllerDelegate, MNActiveNowForegroundNotificationUserProvider> {

	MNActiveNowTopFriendsListenerInjector* _injector;
	MNInboxViewModelSubscriptionService* _inboxViewModelSubscriptionService;
	NSNumber* _currentSubscriptionId;
	NSSet* _topActiveNowContactUsers;
	MNUserSortRankPolicy* _userSortRankPolicy;
	NSSet* _topFriendUserIds;
	id<MNActiveNowForegroundNotificationUserProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActiveNowForegroundNotificationUserProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(void)startSubscription;
-(void)_startLoggingFunnel;
-(void)_updateWithViewModel:(id)arg1 fromCache:(BOOL)arg2 ;
-(BOOL)_shouldContinueEnumeratingFromUser:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(void)friendListModelControllerDidStartLoading:(id)arg1 ;
-(void)friendListModelControllerdidFinishLoading:(id)arg1 ;
-(void)setDelegate:(id<MNActiveNowForegroundNotificationUserProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNActiveNowForegroundNotificationUserProviderDelegate>)delegate;
@end

