/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNPeopleSearchControllerDelegate.h>
#import <FBSharedFramework/MNPeopleSearchResultsDataSourceDelegate.h>
#import <Messenger/MNUniversalSearchUnderlyingSystemAdapting.h>

@protocol MNSearchControlling, MNUniversalSearchUnderlyingSystemDelegate;
@class MNUniversalSearchLegacySearchSystemAdapterInjector, FBAnalytics, MNPeopleSearchAccessibilityController, NSString;

@interface MNUniversalSearchLegacySearchSystemAdapter : NSObject <MNPeopleSearchControllerDelegate, MNPeopleSearchResultsDataSourceDelegate, MNUniversalSearchUnderlyingSystemAdapting> {

	MNUniversalSearchLegacySearchSystemAdapterInjector* _injector;
	id<MNSearchControlling> _searchController;
	FBAnalytics* _analytics;
	MNPeopleSearchAccessibilityController* _searchAccessibilityController;
	BOOL _shouldPeopleSearchIncludeVcEndpoints;
	id<MNUniversalSearchUnderlyingSystemDelegate> _delegate;
	NSString* _searchText;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithSearchController:(id)arg1 ;
-(void)searchTextDidChange:(id)arg1 ;
-(void)beginSearchSession;
-(void)_endLoggingSession;
-(void)_presentGameWithGameID:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(id)peopleSearchDataSourceAccessoryLabelForCellWithContact:(id)arg1 ;
-(id)peopleSearchDataSourceAccessoryViewForCellWithContact:(id)arg1 ;
-(long long)peopleSearchDataSourceAccessoryTypeForCellWithContact:(id)arg1 ;
-(BOOL)peopleSearchDataSourceShouldEnableCellWithContact:(id)arg1 ;
-(id)sectionOrderingForQuery:(id)arg1 ;
-(void)peopleSearchResultsDataSource:(id)arg1 didTapActionButtonForTopResultCell:(id)arg2 ;
-(id)peopleSearchControllerCustomContactSearch:(id)arg1 ;
-(unsigned long long)surfaceForPeopleSearchSession;
-(id)searchTextForPeopleSearchController:(id)arg1 ;
-(id)pickedUserIdsForPeopleSearchController:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeAddressBookContacts:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldSearchServer:(id)arg1 ;
-(unsigned long long)peopleSearchControllerPageFilterRule:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeBlendedResults:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeNicknameResults:(id)arg1 ;
-(BOOL)peopleSearchController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2 ;
-(void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(void)peopleSearchControllerDidFinishSearch:(id)arg1 ;
-(BOOL)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2 ;
-(void)peopleSearchController:(id)arg1 didTapToPlayGame:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)endSession;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)startObserving;
-(void)stopObserving;
@end

