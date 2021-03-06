/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol FBStickerResourceManager, MNActionSheetPresentationDelegate, MNMAISuggestionsFeedbackViewControllerDelegate;
@class UITableView, NSArray, MNMAction, FBImageDownloader, FBMobileConfigContextManager, MNMAISuggestionsFeedbackConfiguration, NSString;

@interface MNMAISuggestionsFeedbackViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNActionSheetPresenting> {

	UITableView* _feedbackTableView;
	NSArray* _tableViewItems;
	MNMAction* _suggestion;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBImageDownloader* _imageDownloader;
	FBMobileConfigContextManager* _configManager;
	MNMAISuggestionsFeedbackConfiguration* _configuraion;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNMAISuggestionsFeedbackViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MNMAction * suggestion;                                                        //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsFeedbackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;               //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(id)initWithStickerResourceManager:(id)arg1 imageDownloader:(id)arg2 configContextManager:(id)arg3 configuration:(id)arg4 ;
-(void)setupFeedbackSheetWithSuggestion:(id)arg1 ;
-(void)cleanupFeedbackSheet;
-(id)_tableViewItemsForSuggestion:(id)arg1 configuration:(id)arg2 ;
-(id)_getStickerPreviewViewModelIfNecessary:(id)arg1 ;
-(id)_getPreviewViewModelIfNecessary:(id)arg1 ;
-(MNMAction *)suggestion;
-(void)setDelegate:(id<MNMAISuggestionsFeedbackViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNMAISuggestionsFeedbackViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

