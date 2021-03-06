/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPaymentsSimpleFormViewDataSourceDelegate.h>
#import <FBSharedFramework/FBKeyboardObserverDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsSimpleFormViewControllerDelegate;
@class FBKeyboardObserver, FBContentInsetTracker, FBPaymentsEventListenerAnnouncer, UITableView, FBPaymentsSimpleFormViewDataSource, NSString;

@interface FBPaymentsSimpleFormViewController : UIViewController <FBPaymentsSimpleFormViewDataSourceDelegate, FBKeyboardObserverDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBKeyboardObserver* _keyboardObserver;
	FBContentInsetTracker* _contentInsetTracker;
	BOOL _shouldShowDeleteButton;
	BOOL _shouldShowSetDefaultButton;
	BOOL _shouldDisableErrorMessage;
	/*^block*/id _deleteBlock;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	UITableView* _tableView;
	id<FBPaymentsSimpleFormViewControllerDelegate> _delegate;
	FBPaymentsSimpleFormViewDataSource* _dataSource;

}

@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSimpleFormViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBPaymentsSimpleFormViewDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)initWithFormFieldByIdentifierMap:(id)arg1 formLayoutDefinition:(id)arg2 ;
-(void)focusFieldWithIdentifier:(id)arg1 ;
-(id)collectedInfo;
-(void)setFormSectionFooterView:(id)arg1 ;
-(void)_adjustContentInsetsWithKeyboardRect:(CGRect)arg1 ;
-(void)configureWithButtonEnableStatus:(BOOL)arg1 ;
-(void)addDeleteButtonWithText:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)addOrUpdateLabelButtonWithText:(id)arg1 ;
-(void)resetFormContents;
-(id)completionStatuses;
-(void)addSetDefaultCellWithIsCurrentlyDefault:(BOOL)arg1 setDefaultBlock:(/*^block*/id)arg2 ;
-(void)addToggleDefaultCell;
-(void)setMakeAsDefaultSectionFooterView:(id)arg1 ;
-(void)resetWithFormIdentifierMap:(id)arg1 formLayoutDefinition:(id)arg2 ;
-(void)setFormAccessoryButtonWithTitle:(id)arg1 accessoryType:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(BOOL)defaultToggleValue;
-(void)setContentForFieldWithIdentifier:(id)arg1 contentText:(id)arg2 ;
-(void)removeSetDefaultButton;
-(void)simpleFormViewDataSource:(id)arg1 reloadIndexSet:(id)arg2 ;
-(void)simpleFormViewDataSourceDidUpdateForm:(id)arg1 ;
-(void)simpleFormViewDataSource:(id)arg1 updateErrorDescription:(id)arg2 ;
-(id)headerViewForSimpleFormViewDataSource:(id)arg1 ;
-(void)simpleFormViewDataSourceDidSelectLabelButton:(id)arg1 ;
-(void)simpleFormViewDidTapDeleteButtonForDataSource:(id)arg1 ;
-(void)simpleFormViewDidTapInfoSectionFooterPrimaryButtonForDataSource:(id)arg1 ;
-(void)simpleFormViewDidTapInfoSectionFooterSecondaryButtonForDataSource:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setDelegate:(id<FBPaymentsSimpleFormViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(FBPaymentsSimpleFormViewDataSource *)dataSource;
-(id<FBPaymentsSimpleFormViewControllerDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)_tableHeaderView;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
@end

