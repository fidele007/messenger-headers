/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@class MNAccountNotificationsRequestController, MNAccountNotificationsAccessTokenStore, MNAccountSettings, MNAccountNotificationsFetcherListenerAnnouncer, NSString;

@interface MNAccountNotificationsFetcher : NSObject <FBViewerContextClassProvidable> {

	MNAccountNotificationsRequestController* _notificationsRequestController;
	MNAccountNotificationsAccessTokenStore* _notificationsAccessTokenStore;
	MNAccountSettings* _accountSettings;
	MNAccountNotificationsFetcherListenerAnnouncer* _accountNotificationsFetcherListenerAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccountNotificationsRequestController:(id)arg1 notificationsAccessTokenStore:(id)arg2 accountSettings:(id)arg3 ;
-(void)fetchAllNotificationsWithDidFetchNotificationsBlock:(/*^block*/id)arg1 didFailWithErrorBlock:(/*^block*/id)arg2 ;
-(void)_announceDidFetchNotifications:(id)arg1 ;
-(void)fetchAllNotifications;
-(void)addAccountNotificationsFetcherListener:(id)arg1 ;
-(void)removeAccountNotificationsFetcherListener:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

