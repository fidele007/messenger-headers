/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class MNAlohaViewModelFactory, MNPYMMViewModelFactory, MNBYMMViewModelFactory, MNBusinessCTAFactory, MNThreadImageManager, MNThreadParticipantNameFormatter, FBDateFormatter, FBMobileConfigContextManager, MNGroupsRoomNUXStateController;

@interface MNInboxRowFactory : NSObject {

	MNAlohaViewModelFactory* _alohaViewModelFactory;
	MNPYMMViewModelFactory* _pymmViewModelFactory;
	MNBYMMViewModelFactory* _bymmViewModelFactory;
	MNBusinessCTAFactory* _businessCTAFactory;
	MNThreadImageManager* _threadImageManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBDateFormatter* _dateFormatter;
	FBMobileConfigContextManager* _configManager;
	MNGroupsRoomNUXStateController* _roomNUXStateController;
	SCD_Struct_MN14 _ckRenderOptions;
	MNBadgeOptions _badgeOptions;

}
-(id)initWithPymmViewModelFactory:(id)arg1 bymmViewModelFactory:(id)arg2 alohaViewModelFactory:(id)arg3 businessCTAFactory:(id)arg4 threadImageManager:(id)arg5 participantNameFormatter:(id)arg6 configManager:(id)arg7 roomNUXStateController:(id)arg8 ;
-(id)inboxRowsForInboxUnitsMetadata:(id)arg1 inboxUnits:(id)arg2 secondaryThreadRowsUnit:(id)arg3 recentThreadRowsViewModel:(id)arg4 secondaryThreadRowsViewModel:(id)arg5 messageRequestsUnitViewModel:(id)arg6 collectionViewSize:(CGSize)arg7 userIdToUserMap:(id)arg8 threadKeyToThreadSummaryMap:(id)arg9 pymmOrder:(id)arg10 presenceValue:(id)arg11 additionalInboxThreadRows:(id)arg12 activeNowUsers:(id)arg13 seeMoreButtonPressCount:(unsigned long long)arg14 threadCellLayout:(id)arg15 unreadMessagesViewModel:(id)arg16 recentVideosUnitExpanded:(BOOL)arg17 recentlyClickedLinksUnitExpanded:(BOOL)arg18 truncationViewModel:(id)arg19 inboxMontageViewModel:(id)arg20 inboxMontageAttachmentGenerationPlaceholder:(id)arg21 shouldShowInboxMontageUnit:(BOOL)arg22 shouldCollapseSecondaryThreadRows:(BOOL)arg23 montageNuxSeenState:(id)arg24 loggedInUser:(id)arg25 montageLoadingStateViewModel:(id)arg26 montageHiddenAuthorsState:(id)arg27 cymkViewModel:(id)arg28 montageUserRankData:(id)arg29 ;
@end

