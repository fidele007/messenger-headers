/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBContactsSearchDelegate.h>
#import <Messenger/MNPeopleSearchTableSelectionDelegate.h>
#import <Messenger/MNPeopleSearchResultsDataSourceDelegate.h>

@protocol MNPaymentsFriendSearchViewControllerDelegate;
@class MNPeopleSearchResultsDataSource, MNPeopleSearchTableDelegate, MNPaymentsEligibleContactSearch, MNPeopleSearchView, NSString;

@interface MNPaymentsFriendSearchViewController : UIViewController <FBContactsSearchDelegate, MNPeopleSearchTableSelectionDelegate, MNPeopleSearchResultsDataSourceDelegate> {

	MNPeopleSearchResultsDataSource* _tableDataSource;
	MNPeopleSearchTableDelegate* _tableDelegate;
	MNPaymentsEligibleContactSearch* _eligibleContactSearch;
	MNPeopleSearchView* _peopleSearchView;
	id<MNPaymentsFriendSearchViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsFriendSearchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFinishSearch:(id)arg1 ;
-(BOOL)shouldHideResult:(id)arg1 ;
-(void)didPickResult:(id)arg1 ;
-(BOOL)shouldSelectResultWhenTapped:(id)arg1 ;
-(void)selectedResult:(id)arg1 withAnalyticsExtras:(id)arg2 ;
-(id)peopleSearchDataSourceAccessoryLabelForCellWithContact:(id)arg1 ;
-(long long)peopleSearchDataSourceAccessoryTypeForCellWithContact:(id)arg1 ;
-(BOOL)peopleSearchDataSourceShouldEnableCellWithContact:(id)arg1 ;
-(id)sectionOrderingForQuery:(id)arg1 ;
-(BOOL)peopleSearchDataSourceCanShowContextInTwoLines;
-(BOOL)peopleSearchDataSourceShouldShowLargeProfileImage;
-(id)initWithGraphQLService:(id)arg1 userStore:(id)arg2 threadParticipantFilter:(id)arg3 peopleCellFactory:(id)arg4 ;
-(void)startSearchWithToken:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsFriendSearchViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsFriendSearchViewControllerDelegate>)delegate;
-(void)loadView;
-(void)search;
@end
