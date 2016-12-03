/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class MNPYMMViewModelFactory, MNBYMMViewModelFactory, MNBusinessCTAFactory, MNThreadImageManager, MNThreadParticipantNameFormatter, FBDateFormatter, FBMobileConfigContextManager, MNGroupsRoomNUXStateController;

@interface MNInboxRowFactory : NSObject {

	MNPYMMViewModelFactory* _pymmViewModelFactory;
	MNBYMMViewModelFactory* _bymmViewModelFactory;
	MNBusinessCTAFactory* _businessCTAFactory;
	MNThreadImageManager* _threadImageManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBDateFormatter* _dateFormatter;
	FBMobileConfigContextManager* _configManager;
	MNGroupsRoomNUXStateController* _roomNUXStateController;

}
-(id)initWithPymmViewModelFactory:(id)arg1 bymmViewModelFactory:(id)arg2 businessCTAFactory:(id)arg3 threadImageManager:(id)arg4 participantNameFormatter:(id)arg5 configManager:(id)arg6 roomNUXStateController:(id)arg7 ;
-(id)inboxRowsForInboxUnitsMetadata:(id)arg1 inboxUnits:(id)arg2 secondaryThreadRowsUnit:(id)arg3 recentThreadRowsViewModel:(id)arg4 secondaryThreadRowsViewModel:(id)arg5 messageRequestsUnitViewModel:(id)arg6 collectionViewSize:(CGSize)arg7 userIdToUserMap:(id)arg8 threadKeyToThreadSummaryMap:(id)arg9 pymmOrder:(id)arg10 presenceValue:(id)arg11 additionalInboxThreadRows:(id)arg12 activeNowUsers:(id)arg13 seeMoreButtonPressCount:(unsigned long long)arg14 threadCellLayout:(id)arg15 unreadMessagesViewModel:(id)arg16 recentVideosUnitExpanded:(BOOL)arg17 recentlyClickedLinksUnitExpanded:(BOOL)arg18 truncationViewModel:(id)arg19 inboxMontageViewModel:(id)arg20 inboxMontageAttachmentGenerationPlaceholder:(id)arg21 shouldShowInboxMontageUnit:(BOOL)arg22 shouldCollapseSecondaryThreadRows:(BOOL)arg23 montageNuxSeenState:(id)arg24 loggedInUser:(id)arg25 montageLoadingStateViewModel:(id)arg26 montageHiddenAuthorsState:(id)arg27 ;
@end

