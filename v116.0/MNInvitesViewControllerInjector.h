/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBProviderMapData, NSMutableDictionary, MNInvitesViewControllerConfiguration;

@interface MNInvitesViewControllerInjector : NSObject {

	FBProviderMapData* _mapData;
	NSMutableDictionary* _instances;
	MNInvitesViewControllerConfiguration* _invitesViewControllerConfiguration;
	unsigned long long _source;

}
-(id)inviteEligibilityChecker;
-(id)multiPeoplePickerViewController;
-(id)combinedSuggestedContactsRetrieverFactory;
-(id)initWithProviderMapData:(id)arg1 invitesViewControllerConfiguration:(id)arg2 source:(unsigned long long)arg3 ;
-(id)inviteListAddressBookContactsRetriever;
-(id)inviteListFacebookContactsRetriever;
-(id)inviteListRemoteRankedContactsRetriever;
-(id)invitesCooldownController;
-(id)invitesViewControllerConfiguration;
-(id)mobileConfigContextManager;
-(id)analytics;
-(unsigned long long)source;
-(id)session;
@end

