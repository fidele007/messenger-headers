/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/FBSettingsSearchResponderProtocol.h>

@protocol FBSettingsViewControllerDelegate, FBSettingsViewControllerSearchDataSource;
@class FBSettingsButtonActionController, FBUserSession, UIAlertView, FBSettingsSearchResultActionsController, UISearchDisplayController, FBSettingsSchema, UITextField, FBSettingsSchemaItemMultiValue, FBSettingsSearchIndex, NSString;

@interface FBSettingsViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UISearchDisplayDelegate, UISearchBarDelegate, FBSettingsSearchResponderProtocol> {

	FBSettingsButtonActionController* _buttonActionController;
	FBUserSession* _session;
	UIAlertView* _alertView;
	FBSettingsSearchResultActionsController* _searchResultActionsController;
	UIEdgeInsets _beforeKeyBoardShowUpTableViewContentInset;
	BOOL _disableDoneButton;
	BOOL _autoSavedAndDisableDoneButton;
	BOOL _enableSearch;
	BOOL _needToReloadFromUserPreferenceWhenViewAppear;
	BOOL _needToCheckValueWhenViewAppear;
	UISearchDisplayController* searchDisplayController;
	FBSettingsSchema* _settingSchema;
	id<FBSettingsViewControllerDelegate> _delegate;
	id<FBSettingsViewControllerSearchDataSource> _searchDataSource;
	UITextField* _currentFirstResponder;
	long long _beforeValueToCheckWhenViewAppear;
	FBSettingsSchemaItemMultiValue* _afterMultiValueToCheckWhenViewAppear;
	FBSettingsSearchIndex* _searchIndex;

}

@property (nonatomic,retain) UITextField * currentFirstResponder;                                                //@synthesize currentFirstResponder=_currentFirstResponder - In the implementation block
@property (assign,nonatomic) BOOL needToReloadFromUserPreferenceWhenViewAppear;                                  //@synthesize needToReloadFromUserPreferenceWhenViewAppear=_needToReloadFromUserPreferenceWhenViewAppear - In the implementation block
@property (assign,nonatomic) BOOL needToCheckValueWhenViewAppear;                                                //@synthesize needToCheckValueWhenViewAppear=_needToCheckValueWhenViewAppear - In the implementation block
@property (assign,nonatomic) long long beforeValueToCheckWhenViewAppear;                                         //@synthesize beforeValueToCheckWhenViewAppear=_beforeValueToCheckWhenViewAppear - In the implementation block
@property (nonatomic,retain) FBSettingsSchemaItemMultiValue * afterMultiValueToCheckWhenViewAppear;              //@synthesize afterMultiValueToCheckWhenViewAppear=_afterMultiValueToCheckWhenViewAppear - In the implementation block
@property (nonatomic,retain) FBSettingsSearchIndex * searchIndex;                                                //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) UISearchDisplayController * searchDisplayController; 
@property (nonatomic,retain) FBSettingsSchema * settingSchema;                                                   //@synthesize settingSchema=_settingSchema - In the implementation block
@property (assign,nonatomic,__weak) id<FBSettingsViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBSettingsViewControllerSearchDataSource> searchDataSource;               //@synthesize searchDataSource=_searchDataSource - In the implementation block
@property (assign,nonatomic) BOOL disableDoneButton;                                                             //@synthesize disableDoneButton=_disableDoneButton - In the implementation block
@property (assign,nonatomic) BOOL autoSavedAndDisableDoneButton;                                                 //@synthesize autoSavedAndDisableDoneButton=_autoSavedAndDisableDoneButton - In the implementation block
@property (assign,nonatomic) BOOL enableSearch;                                                                  //@synthesize enableSearch=_enableSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(void)singleTapToEndEdit:(id)arg1 ;
-(FBSettingsSchema *)settingSchema;
-(void)setAfterMultiValueToCheckWhenViewAppear:(FBSettingsSchemaItemMultiValue *)arg1 ;
-(void)setNeedToCheckValueWhenViewAppear:(BOOL)arg1 ;
-(BOOL)disableDoneButton;
-(BOOL)autoSavedAndDisableDoneButton;
-(void)currentFirstResponderResign;
-(void)setCurrentFirstResponder:(UITextField *)arg1 ;
-(void)toggleSwitch:(id)arg1 ;
-(void)stepperChange:(id)arg1 ;
-(void)sliderChange:(id)arg1 ;
-(id)tableView:(id)arg1 buttonCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)_findNearestSuperViewAsTableCell:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 searchResultAction:(id)arg3 ;
-(void)setNeedToReloadFromUserPreferenceWhenViewAppear:(BOOL)arg1 ;
-(void)setBeforeValueToCheckWhenViewAppear:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 session:(id)arg2 settingFile:(id)arg3 ;
-(void)setSettingSchema:(FBSettingsSchema *)arg1 ;
-(void)setDisableDoneButton:(BOOL)arg1 ;
-(void)setEnableSearch:(BOOL)arg1 ;
-(void)performWithSearchResultAction:(id)arg1 ;
-(id)tableView:(id)arg1 toggleSwitchCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 stepperCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 sliderCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 titleValueCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 titleSubtitleValueCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 textFieldCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 multiValueCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 childPanelCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 radioGroupCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 customCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 logSettingsCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 localizationOverrideCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 sandboxURLCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(id)tableView:(id)arg1 mQTTSandboxURLCellForRowAtIndexPath:(id)arg2 withData:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectButtonRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectCustomRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectTextFieldRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectTitleValueRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectTitleSubtitleValueRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectMultiValueRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectChildPanelRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectRadioGroupRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectLogSettingsRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectSandboxURLRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectMQTTSandboxURLRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectLocalizationOverrideRowAtIndexPath:(id)arg2 withData:(id)arg3 searchResultAction:(id)arg4 ;
-(void)setSearchDataSource:(id<FBSettingsViewControllerSearchDataSource>)arg1 ;
-(void)setAutoSavedAndDisableDoneButton:(BOOL)arg1 ;
-(BOOL)enableSearch;
-(BOOL)needToReloadFromUserPreferenceWhenViewAppear;
-(BOOL)needToCheckValueWhenViewAppear;
-(long long)beforeValueToCheckWhenViewAppear;
-(FBSettingsSchemaItemMultiValue *)afterMultiValueToCheckWhenViewAppear;
-(void)setDelegate:(id<FBSettingsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<FBSettingsViewControllerDelegate>)delegate;
-(UISearchDisplayController *)searchDisplayController;
-(unsigned long long)supportedInterfaceOrientations;
-(void)synchronize;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)doneButton:(id)arg1 ;
-(id<FBSettingsViewControllerSearchDataSource>)searchDataSource;
-(void)_textChanged:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(FBSettingsSearchIndex *)searchIndex;
-(void)setSearchIndex:(FBSettingsSearchIndex *)arg1 ;
-(UITextField *)currentFirstResponder;
-(void)setAlertView:(id)arg1 ;
@end
