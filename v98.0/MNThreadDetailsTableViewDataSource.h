/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadDetailsUserInfoHeaderCellDelegate.h>
#import <Messenger/MNThreadDetailsDescriptionViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNThreadViewModelLoadResultConfigurable.h>

@protocol MNThreadClientSummaryUpdateCreating, MNThreadDetailsSectionProviding, MNAuthenticationManager, MNInviteEligibilityChecking, MNSecureMessagingCapabilityQuerying, MNAvatarImageDecorating, MNThreadDetailsTableViewDataSourceDelegate;
@class MNThreadParticipantNameFormatter, FBUserSession, MNThreadViewModel, MNThreadDetailsSectionProviderController, FBWebRTCCallStarter, FBWebRTCCallButtonImageProvider, MNPlatformThreadDetailsViewModel, MNThreadDetailsViewController, MNThreadDetailsUserInfoHeaderCell, MNThreadDetailsPageConfiguration, FBMobileConfigContextManager, MNPeopleCellFactory, MNEphemeralMessagePolicy, MNBlockFeatureConfiguration, MNThreadDetailsTableViewCellIconsConfiguration, MNThreadImageManager, MNProfileImageViewController, MNThreadDetailsGroupDescriptionView, MNThreadDetailsPageDescriptionView, MNMessageReactionsGating, NSArray, MNThreadDetailsContactInfoViewModel, FBStringWithRedactedDescription, NSString;

@interface MNThreadDetailsTableViewDataSource : NSObject <MNThreadDetailsUserInfoHeaderCellDelegate, MNThreadDetailsDescriptionViewDelegate, UITableViewDataSource, MNThreadViewModelLoadResultConfigurable> {

	MNThreadParticipantNameFormatter* _nameFormatter;
	FBUserSession* _session;
	MNThreadViewModel* _threadViewModel;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;
	MNThreadDetailsSectionProviderController* _sectionProviderController;
	id<MNThreadDetailsSectionProviding> _sectionProvider;
	id<MNAuthenticationManager> _authManager;
	FBWebRTCCallStarter* _callStarter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNPlatformThreadDetailsViewModel* _platformThreadDetailsViewModel;
	BOOL _showHeaderAsCell;
	MNThreadDetailsViewController* _threadDetailsViewController;
	MNThreadDetailsUserInfoHeaderCell* _userInfoHeaderCell;
	BOOL _peopleSectionExpanded;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNThreadDetailsPageConfiguration* _threadDetailsPageConfiguration;
	FBMobileConfigContextManager* _configManager;
	MNPeopleCellFactory* _peopleCellFactory;
	MNEphemeralMessagePolicy* _ephemeralMessagePolicy;
	MNBlockFeatureConfiguration* _blockFeatureConfiguration;
	MNThreadDetailsTableViewCellIconsConfiguration* _tableViewCellIconsConfiguration;
	id<MNSecureMessagingCapabilityQuerying> _secureMessagingCapabilityQuerier;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadDetailsGroupDescriptionView* _groupDescriptionView;
	MNThreadDetailsPageDescriptionView* _pageDescriptionView;
	MNMessageReactionsGating* _reactionsGating;
	BOOL _threadNameCustom;
	id<MNThreadDetailsTableViewDataSourceDelegate> _delegate;
	NSArray* _threadParticipantsIds;
	unsigned long long _numberOfParticipantsShown;
	MNThreadDetailsContactInfoViewModel* _contactInfoViewModel;
	NSArray* _sectionExtensions;
	unsigned long long _bookingRequestCount;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsTableViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threadParticipantsIds;                                      //@synthesize threadParticipantsIds=_threadParticipantsIds - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfParticipantsShown;                                //@synthesize numberOfParticipantsShown=_numberOfParticipantsShown - In the implementation block
@property (nonatomic,copy) MNThreadDetailsContactInfoViewModel * contactInfoViewModel;                    //@synthesize contactInfoViewModel=_contactInfoViewModel - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * textFieldThreadName; 
@property (assign,getter=isThreadNameCustom,nonatomic) BOOL threadNameCustom;                             //@synthesize threadNameCustom=_threadNameCustom - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionExtensions;                                          //@synthesize sectionExtensions=_sectionExtensions - In the implementation block
@property (assign,nonatomic) unsigned long long bookingRequestCount;                                      //@synthesize bookingRequestCount=_bookingRequestCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)summaryUpdateCreator;
-(id)threadViewModel;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWithViewModelLoadResult:(id)arg1 ;
-(FBStringWithRedactedDescription *)textFieldThreadName;
-(unsigned long long)settingsRowWithSettingsRowIndex:(unsigned long long)arg1 ;
-(void)descriptionViewWillShowFullDescription:(id)arg1 ;
-(BOOL)isThreadNameCustom;
-(void)_configureWithThreadViewModelLoadResult:(id)arg1 ;
-(BOOL)_peopleSectionCanBeCollapsed;
-(void)_setPeopleSectionExpanded:(BOOL)arg1 ;
-(id)_rowsForSettingsSection;
-(BOOL)_showPageBookingRequest;
-(BOOL)_showPageResponsivenessSection;
-(BOOL)_showPageDescriptionSection;
-(BOOL)_showPageProfileInfoSection;
-(id)_rowsForCustomizationSection;
-(void)_populateParticipantIdsFromThreadViewModel:(id)arg1 ;
-(long long)_numberOfRowsInSectionIndex:(long long)arg1 ;
-(unsigned long long)sectionWithSectionIndex:(unsigned long long)arg1 ;
-(BOOL)_showAllCellEnabled;
-(id)_groupThreadDescriptionCell:(id)arg1 ;
-(id)_groupThreadShareJoinableLinkCell:(id)arg1 ;
-(unsigned long long)groupThreadApprovalsRowWithRowIndex:(unsigned long long)arg1 ;
-(id)_groupThreadMembersApprovalsSettingsCell:(id)arg1 forGroupThreadApprovalsRow:(unsigned long long)arg2 ;
-(id)_userInfoHeaderCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_pageProfileInfoHeaderCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_pageResponsivenessCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_pageDescriptionCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_settingsCellForRow:(unsigned long long)arg1 tableView:(id)arg2 settingsRow:(unsigned long long)arg3 ;
-(id)_peopleCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_showAllCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_addPeopleCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_otherSectionCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_platformGenericCellForRow:(unsigned long long)arg1 tableView:(id)arg2 text:(id)arg3 ;
-(id)_platformReceiptCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(unsigned long long)customizationRowWithCustomizationRowIndex:(unsigned long long)arg1 ;
-(id)_customizationCellForRow:(unsigned long long)arg1 tableView:(id)arg2 customizationRow:(unsigned long long)arg3 ;
-(id)_pageBookingRequestCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)contactWithIndex:(unsigned long long)arg1 ;
-(void)_updateNumberOfParticipantsShown;
-(void)didChangeGroupThreadMembersApprovalsSetting:(id)arg1 ;
-(BOOL)_rtcAudioButtonEnabled;
-(BOOL)_rtcVideoButtonEnabled;
-(unsigned long long)otherRowWithOtherRowIndex:(unsigned long long)arg1 ;
-(void)_configureBlockCell:(id)arg1 ;
-(void)_configureLeaveGroupCell:(id)arg1 ;
-(void)_configureDeleteThreadCell:(id)arg1 ;
-(void)_configureLeaveFeedbackCell:(id)arg1 ;
-(void)_configureReportPageCell:(id)arg1 ;
-(long long)_accessoryTypeForCustomizationRow:(unsigned long long)arg1 ;
-(void)_updateSectionExtensionsWithThreadViewModel:(id)arg1 ;
-(BOOL)_voipIsEnabled;
-(BOOL)_videoCallEnabled;
-(BOOL)_paymentsButtonEnabled;
-(BOOL)_contactAdditionEnabled;
-(BOOL)_shouldShowEphemeralMessageRow:(id)arg1 ;
-(void)userInfoHeaderCellDidEndEditing:(id)arg1 ;
-(id)initWithSession:(id)arg1 nameFormatter:(id)arg2 sectionProviderController:(id)arg3 callStarter:(id)arg4 callButtonImageProvider:(id)arg5 showHeaderAsCell:(BOOL)arg6 threadDetailsViewController:(id)arg7 inviteEligibilityChecker:(id)arg8 threadDetailsPageConfiguration:(id)arg9 configManager:(id)arg10 peopleCellFactory:(id)arg11 ephemeralMessagePolicy:(id)arg12 blockFeatureConfiguration:(id)arg13 tableViewCellIconsConfiguration:(id)arg14 secureMessagingCapabilityQuerier:(id)arg15 avatarImageDecoration:(id)arg16 profileImageViewController:(id)arg17 threadImageManager:(id)arg18 authManager:(id)arg19 reactionsGating:(id)arg20 ;
-(void)collapsePeopleSectionIfPossible;
-(void)expandPeopleSection;
-(unsigned long long)sectionIndexWithSection:(unsigned long long)arg1 ;
-(unsigned long long)settingsRowIndexWithSettingsRow:(unsigned long long)arg1 ;
-(void)setPlatformThreadDetailsViewModel:(id)arg1 ;
-(void)clearOptimsiticThreadParticipantsIds;
-(unsigned long long)otherRowIndexWithOtherRow:(unsigned long long)arg1 ;
-(void)didChangeGroupThreadJoinableSetting:(id)arg1 ;
-(NSArray *)threadParticipantsIds;
-(unsigned long long)numberOfParticipantsShown;
-(void)setNumberOfParticipantsShown:(unsigned long long)arg1 ;
-(MNThreadDetailsContactInfoViewModel *)contactInfoViewModel;
-(void)setContactInfoViewModel:(MNThreadDetailsContactInfoViewModel *)arg1 ;
-(void)setThreadNameCustom:(BOOL)arg1 ;
-(NSArray *)sectionExtensions;
-(unsigned long long)bookingRequestCount;
-(void)setBookingRequestCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsTableViewDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MNThreadDetailsTableViewDataSourceDelegate>)delegate;
-(long long)_numberOfRowsInSection:(unsigned long long)arg1 ;
@end

