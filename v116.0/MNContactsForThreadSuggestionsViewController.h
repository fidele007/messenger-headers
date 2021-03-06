/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNContactsForThreadSuggestionsFooterViewDelegate.h>

@protocol FBWebImageDownloaderFactoryProtocol, MNProfileImageBadgeFactory, MNBadgedProfileImagePlaceholderFactory, MNContactsForThreadSuggestionsViewControllerDelegate;
@class UITableView, MNContactsForThreadSuggestionsFooterView, MNContactsForThreadSuggestionsHeaderView, NSArray, NSMutableSet, MNBadgedProfileImageBackgroundFactory, NSString;

@interface MNContactsForThreadSuggestionsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNContactsForThreadSuggestionsFooterViewDelegate> {

	UITableView* _tableView;
	MNContactsForThreadSuggestionsFooterView* _footerView;
	MNContactsForThreadSuggestionsHeaderView* _headerView;
	NSArray* _contactsInSections;
	NSMutableSet* _selectedUserIdSet;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;
	id<MNProfileImageBadgeFactory> _badgeImageFactory;
	id<MNBadgedProfileImagePlaceholderFactory> _profileImagePlaceholderFactory;
	MNBadgedProfileImageBackgroundFactory* _backgroundFactory;
	id<MNContactsForThreadSuggestionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactsForThreadSuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initThreadSuggestionsViewSections:(id)arg1 downloaderFactory:(id)arg2 badgeImageFactory:(id)arg3 profileImagePlaceholderFactory:(id)arg4 backgroundImageFactory:(id)arg5 ;
-(id)_conversationContactForIndexPath:(id)arg1 ;
-(id)_sectionTitleForSection:(unsigned long long)arg1 ;
-(void)_didTapSkipBarButton;
-(void)_showShadowImageForNavBarDivider:(BOOL)arg1 ;
-(void)didTapContactsForThreadSuggestionsFooterView:(id)arg1 ;
-(BOOL)_showHeaderForSection:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNContactsForThreadSuggestionsViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNContactsForThreadSuggestionsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_configureNavigationBar;
@end

