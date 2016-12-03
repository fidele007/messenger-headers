/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNPollDetailViewTableFooterDelegate.h>
#import <Messenger/MNPollDetailViewTableHeaderDelegate.h>
#import <Messenger/MNPollDetailViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNRoundedCornerContainerContent.h>

@protocol MNActionSheetPresentationDelegate, MNPollDetailViewControllerDelegate;
@class FBUserSession, MNPollDetailView, MNSeenHeadListViewController, MNPollDetailFetcher, MNPollAddOptionMutator, MNPollVoteUpdateMutator, MNPollCreationMutator, NSString, FBMIndexedUserSet, MNPollDetailInfo, NSMutableArray, NSMutableDictionary;

@interface MNPollDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNPollDetailViewTableFooterDelegate, MNPollDetailViewTableHeaderDelegate, MNPollDetailViewDelegate, MNActionSheetPresenting, FBClassProvidable, MNRoundedCornerContainerContent> {

	FBUserSession* _session;
	MNPollDetailView* _pollDetailView;
	MNSeenHeadListViewController* _voterListViewController;
	MNPollDetailFetcher* _pollDetailFetcher;
	MNPollAddOptionMutator* _pollAddOptionMutator;
	MNPollVoteUpdateMutator* _pollVoteUpdateMutator;
	MNPollCreationMutator* _pollCreationMutator;
	NSString* _threadId;
	FBMIndexedUserSet* _userSet;
	NSString* _questionId;
	long long _viewControllerState;
	long long _currentOptionId;
	MNPollDetailInfo* _pollDetailInfo;
	NSMutableArray* _createdOptions;
	NSString* _createdQuestionText;
	NSMutableDictionary* _optionIDToIsSelected;
	NSString* _dirtyAddOptionText;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNPollDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPollDetailViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(void)setUpDependencyWithUserSet:(id)arg1 questionId:(id)arg2 threadId:(id)arg3 ;
-(void)addOptionsWithOptions:(id)arg1 ;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)pollDetailViewDidTapSubmitButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 voterListViewController:(id)arg2 ;
-(void)_addOptionToCreatedOptionsWithText:(id)arg1 ;
-(void)_scrollToBottom;
-(void)_startFetchingPollDetailInfo;
-(id)_pollOptions;
-(id)_pollQuestionText;
-(void)_performAddOptionMutationForExistingPollWithText:(id)arg1 ;
-(void)_handleFetchPollDetailSuccessWithInfo:(id)arg1 shouldScrollToBottom:(BOOL)arg2 ;
-(void)_handleFetchPollDetailFailureWithError:(id)arg1 ;
-(void)_updatePoll;
-(void)_createPoll;
-(void)_handleTapSubmitSuccessWithQuestionId:(id)arg1 ;
-(BOOL)_passSanityCheckForPollCreation;
-(void)_stopLoadingSubmitButton;
-(void)_tearDownDependency;
-(void)pollDetailViewTableFooter:(id)arg1 didAddOptionWithText:(id)arg2 ;
-(void)pollDetailViewTableFooter:(id)arg1 didChangeOptionText:(id)arg2 ;
-(void)pollDetailViewTableHeader:(id)arg1 didUpdateQuestionText:(id)arg2 ;
-(void)setDelegate:(id<MNPollDetailViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MNPollDetailViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)_setViewState:(long long)arg1 ;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

