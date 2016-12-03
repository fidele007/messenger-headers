/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPaymentsAddressDataFetcherDelegate.h>
#import <Messenger/FBPaymentsAddressFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>
#import <Messenger/FBPaymentsExpandableItem.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBPaymentsActorFetching, FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsAddressListViewControllerDelegate, FBPaymentsAddressListViewControllerPickerDelegate, FBPaymentsNavigationDelegate, FBPaymentsConnectionStatusProviding;
@class NSString, FBUserSession, NSArray, UITableView, FBPaymentsAddressDataFetcher, FBMemMailingAddress, FBPaymentsFooterWrapperView, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsAddressListViewController : UIViewController <FBPaymentsAddressDataFetcherDelegate, FBPaymentsAddressFormViewControllerDelegate, FBPaymentsNavigationDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing, FBPaymentsExpandableItem, UITableViewDataSource, UITableViewDelegate> {

	NSString* _viewContextID;
	FBUserSession* _session;
	id<FBPaymentsActorFetching> _actorFetcher;
	NSArray* _addresses;
	UITableView* _tableView;
	FBPaymentsAddressDataFetcher* _addressDataFetcher;
	long long _listStyle;
	FBMemMailingAddress* _selectedAddress;
	FBPaymentsFooterWrapperView* _tableSectionFooterView;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<FBPaymentsAddressListViewControllerDelegate> _delegate;
	id<FBPaymentsAddressListViewControllerPickerDelegate> _pickerDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _addressListCellStyle;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;

}

@property (assign,nonatomic,__weak) id<FBPaymentsAddressListViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsAddressListViewControllerPickerDelegate> pickerDelegate;                   //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long addressListCellStyle;                                                                //@synthesize addressListCellStyle=_addressListCellStyle - In the implementation block
@property (nonatomic,retain) id<FBPaymentsConnectionStatusProviding> connectionStatusProvider;                              //@synthesize connectionStatusProvider=_connectionStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id<FBPaymentsConnectionStatusProviding>)connectionStatusProvider;
-(id)newNavigationController;
-(void)_onCancel;
-(id)initEditStyleAddressListWithSession:(id)arg1 actorFetcher:(id)arg2 ;
-(void)setConnectionStatusProvider:(id<FBPaymentsConnectionStatusProviding>)arg1 ;
-(id)initPickerStyleAddressListWithSession:(id)arg1 currentSelectedAddress:(id)arg2 actorFetcher:(id)arg3 ;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)addressFormViewControllerDidCancel:(id)arg1 ;
-(void)addressFormViewControllerDidAddOrUpdateAddress:(id)arg1 ;
-(void)addressFormViewControllerHasUpdates:(id)arg1 ;
-(void)addressFormViewControllerDidDeleteAddress:(id)arg1 ;
-(void)setAddressListCellStyle:(long long)arg1 ;
-(void)addressDataFetcher:(id)arg1 didFetchAddresses:(id)arg2 ;
-(void)addressDataFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)addressDataFetcherWillFetchAddress:(id)arg1 ;
-(void)_didTapCellForAddress:(id)arg1 ;
-(id)_addressListCellForTableView:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_setIsLoadingAddress:(BOOL)arg1 ;
-(id)_pickerStyleAddressListCellForTableView:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)_editStyleAddressListCellForTableView:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_selectAddress:(id)arg1 ;
-(void)_pushAddressFormWithAddress:(id)arg1 ;
-(void)_presentAddressFormWithAddress:(id)arg1 ;
-(id)_addressFormViewControllerForAddress:(id)arg1 ;
-(long long)addressListCellStyle;
-(void)setDelegate:(id<FBPaymentsAddressListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBPaymentsAddressListViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_reloadData;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id<FBPaymentsAddressListViewControllerPickerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<FBPaymentsAddressListViewControllerPickerDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

