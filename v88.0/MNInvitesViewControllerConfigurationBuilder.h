/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNInvitesViewControllerConfigurationBuilder : NSObject {

	NSArray* _pickedContacts;
	unsigned long long _selectedInviteContactsType;
	unsigned long long _source;
	BOOL _shouldEnableSMSInvites;
	BOOL _shouldShowTransparentNavigationBar;
	BOOL _shouldShowNavigationBarTitle;
	BOOL _shouldAllowSkip;
	BOOL _shouldDisableDoneButtonUntilInvite;
	BOOL _shouldShowHeaderView;
	BOOL _shouldRotate;
	BOOL _shouldShowBottomBar;
	BOOL _shouldShowSkipInHeader;
	BOOL _shouldShowSkipUntilInvite;
	BOOL _shouldShowSearchBar;
	BOOL _shouldShowSegments;

}
+(id)invitesViewControllerConfigurationFromExistingInvitesViewControllerConfiguration:(id)arg1 ;
+(id)invitesViewControllerConfiguration;
-(id)withPickedContacts:(id)arg1 ;
-(id)withShouldEnableSMSInvites:(BOOL)arg1 ;
-(id)withSelectedInviteContactsType:(unsigned long long)arg1 ;
-(id)withSource:(unsigned long long)arg1 ;
-(id)withShouldShowTransparentNavigationBar:(BOOL)arg1 ;
-(id)withShouldShowNavigationBarTitle:(BOOL)arg1 ;
-(id)withShouldAllowSkip:(BOOL)arg1 ;
-(id)withShouldDisableDoneButtonUntilInvite:(BOOL)arg1 ;
-(id)withShouldShowHeaderView:(BOOL)arg1 ;
-(id)withShouldRotate:(BOOL)arg1 ;
-(id)withShouldShowBottomBar:(BOOL)arg1 ;
-(id)withShouldShowSkipInHeader:(BOOL)arg1 ;
-(id)withShouldShowSkipUntilInvite:(BOOL)arg1 ;
-(id)withShouldShowSearchBar:(BOOL)arg1 ;
-(id)withShouldShowSegments:(BOOL)arg1 ;
-(id)build;
@end

