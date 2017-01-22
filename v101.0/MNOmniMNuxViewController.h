/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBClassInjectable.h>

@protocol MNOmniMNuxViewControllerDelegate;
@class MNOmniMNuxHeaderCellViewModel, NSArray, MNOmniMNuxFooterCellViewModel, MNOmniMNuxDataFetcher, MNLoadingView, MNOmniMNuxViewControllerInjector, NSString;

@interface MNOmniMNuxViewController : UITableViewController <FBClassInjectable> {

	MNOmniMNuxHeaderCellViewModel* _headerViewModel;
	NSArray* _cards;
	MNOmniMNuxFooterCellViewModel* _footerViewModel;
	MNOmniMNuxDataFetcher* _fetcher;
	MNLoadingView* _loadingView;
	MNOmniMNuxViewControllerInjector* _injector;
	id<MNOmniMNuxViewControllerDelegate> _delegate;
	long long _source;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNOmniMNuxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long source;                                                  //@synthesize source=_source - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_hideLoadingView;
-(void)_updateNavBarTheme;
-(void)_dismissNux;
-(void)_updateUIWithViewModel:(id)arg1 ;
-(void)_setupHeaderCell:(id)arg1 withViewModel:(id)arg2 ;
-(void)_setupCardCell:(id)arg1 withViewModel:(id)arg2 ;
-(void)_presentSettingsView;
-(void)setDelegate:(id<MNOmniMNuxViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNOmniMNuxViewControllerDelegate>)delegate;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_showLoadingView;
@end
