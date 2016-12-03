/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTopResultCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNPeopleSearchTableViewDataProvider.h>

@protocol MNPeopleSearchResultsDataSourceDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, MNPeopleSearchResultsDataSourceActionButtonDataSource, FBContactsSearch;
@class FBMobileConfigContextManager, MNPeopleCellActionButtonsStateCoordinator, MNThreadParticipantNameFormatter, FBMThreadParticipantFilter, NSArray, NSString;

@interface MNPeopleSearchResultsDataSource : NSObject <MNTopResultCellDelegate, UITableViewDataSource, MNPeopleSearchTableViewDataProvider> {

	FBMobileConfigContextManager* _configManager;
	BOOL _shouldHideHeaderForFirstSectionIfNecessary;
	BOOL _showsSectionHeaders;
	BOOL _shouldShowUsernames;
	id<MNPeopleSearchResultsDataSourceDelegate> _delegate;
	id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource> _rtcCallButtonDataSource;
	id<MNPeopleSearchResultsDataSourceActionButtonDataSource> _actionButtonDataSource;
	MNPeopleCellActionButtonsStateCoordinator* _peopleCellActionButtonsStateCoordinator;
	id<FBContactsSearch> _contactsSearch;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	/*^block*/id _peopleCellCreationBlock;
	/*^block*/id _topResultCellCreationBlock;
	NSArray* _capturedSearchResultsSections;

}

@property (nonatomic,retain) id<FBContactsSearch> contactsSearch;                                                                    //@synthesize contactsSearch=_contactsSearch - In the implementation block
@property (nonatomic,retain) MNThreadParticipantNameFormatter * nameFormatter;                                                       //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) FBMThreadParticipantFilter * threadParticipantFilter;                                                   //@synthesize threadParticipantFilter=_threadParticipantFilter - In the implementation block
@property (nonatomic,copy) id peopleCellCreationBlock;                                                                               //@synthesize peopleCellCreationBlock=_peopleCellCreationBlock - In the implementation block
@property (nonatomic,copy) id topResultCellCreationBlock;                                                                            //@synthesize topResultCellCreationBlock=_topResultCellCreationBlock - In the implementation block
@property (nonatomic,copy) NSArray * capturedSearchResultsSections;                                                                  //@synthesize capturedSearchResultsSections=_capturedSearchResultsSections - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUsernames;                                                                             //@synthesize shouldShowUsernames=_shouldShowUsernames - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchResultsDataSourceDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource> rtcCallButtonDataSource;              //@synthesize rtcCallButtonDataSource=_rtcCallButtonDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchResultsDataSourceActionButtonDataSource> actionButtonDataSource;                //@synthesize actionButtonDataSource=_actionButtonDataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldHideHeaderForFirstSectionIfNecessary;                                                        //@synthesize shouldHideHeaderForFirstSectionIfNecessary=_shouldHideHeaderForFirstSectionIfNecessary - In the implementation block
@property (assign,nonatomic) BOOL showsSectionHeaders;                                                                               //@synthesize showsSectionHeaders=_showsSectionHeaders - In the implementation block
@property (nonatomic,retain) MNPeopleCellActionButtonsStateCoordinator * peopleCellActionButtonsStateCoordinator;                    //@synthesize peopleCellActionButtonsStateCoordinator=_peopleCellActionButtonsStateCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContactSearch:(id)arg1 shouldShowUsernames:(BOOL)arg2 nameFormatter:(id)arg3 threadParticipantFilter:(id)arg4 configManager:(id)arg5 peopleCellCreationBlock:(/*^block*/id)arg6 topResultCellCreationBlock:(/*^block*/id)arg7 ;
-(void)captureSearchResults;
-(void)setNameFormatter:(MNThreadParticipantNameFormatter *)arg1 ;
-(long long)absoluteRowIndexForIndexPath:(id)arg1 ;
-(unsigned long long)peopleCount;
-(id)conversationInitiatorIdentifier:(long long)arg1 ;
-(void)setCountsInAccessibilityController:(id)arg1 ;
-(void)setRtcCallButtonDataSource:(id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource>)arg1 ;
-(void)updateActionButtonEnabledStateForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setActionButtonDataSource:(id<MNPeopleSearchResultsDataSourceActionButtonDataSource>)arg1 ;
-(void)setShouldHideHeaderForFirstSectionIfNecessary:(BOOL)arg1 ;
-(BOOL)canShowContextInTwoLines;
-(void)setPeopleCellActionButtonsStateCoordinator:(MNPeopleCellActionButtonsStateCoordinator *)arg1 ;
-(void)updateAccessoryTypeForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)getFBIdsForAllSearchResults;
-(MNPeopleCellActionButtonsStateCoordinator *)peopleCellActionButtonsStateCoordinator;
-(id)_sectionToContactSectionMapping;
-(long long)searchSectionForTableSection:(long long)arg1 ;
-(NSArray *)capturedSearchResultsSections;
-(BOOL)_hasPendingRequestForPreviousSections:(long long)arg1 ;
-(id)resultForIndexPath:(id)arg1 ;
-(void)setCapturedSearchResultsSections:(NSArray *)arg1 ;
-(unsigned long long)_resultTypeForSection:(long long)arg1 ;
-(long long)_numberOfItemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)shouldUseTopResultCellForIndexPath:(id)arg1 ;
-(id)_topResultCellForContactSearchResult:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)_shouldShowSeparatorForCellAtIndexPath:(id)arg1 ;
-(void)_updateCellButtons:(id)arg1 forContact:(id)arg2 ;
-(BOOL)_isLastRowInContactSearchSection:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)_hasRowsInContactSearchBelowIndexPath:(id)arg1 indexPath:(id)arg2 ;
-(void)topResultCellDidTapActionButton:(id)arg1 ;
-(BOOL)shouldUseLargeProfilePic;
-(id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource>)rtcCallButtonDataSource;
-(id<MNPeopleSearchResultsDataSourceActionButtonDataSource>)actionButtonDataSource;
-(BOOL)shouldHideHeaderForFirstSectionIfNecessary;
-(id<FBContactsSearch>)contactsSearch;
-(void)setContactsSearch:(id<FBContactsSearch>)arg1 ;
-(FBMThreadParticipantFilter *)threadParticipantFilter;
-(void)setThreadParticipantFilter:(FBMThreadParticipantFilter *)arg1 ;
-(id)peopleCellCreationBlock;
-(void)setPeopleCellCreationBlock:(id)arg1 ;
-(id)topResultCellCreationBlock;
-(void)setTopResultCellCreationBlock:(id)arg1 ;
-(BOOL)shouldShowUsernames;
-(void)setDelegate:(id<MNPeopleSearchResultsDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<MNPeopleSearchResultsDataSourceDelegate>)delegate;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(void)setShowsSectionHeaders:(BOOL)arg1 ;
-(BOOL)showsSectionHeaders;
@end

