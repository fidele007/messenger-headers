/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPrivacyPickerVerboseCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBPrivacyDataSourceWithObjects.h>
#import <Messenger/FBTableViewSectionDataSource.h>

@protocol FBComposerAudiencePrivacyDataSourceDelegate, FBTableViewMutating;
@class FBUserSession, NSMutableOrderedSet, NSSet, FBPrivacyPickerDataSourceConfig, NSOrderedSet, FBPrivacyTokenableOption, FBComposerPrivacySetting, UIView, UITableView, NSString, NSMutableSet, NSArray;

@interface FBComposerAudiencePrivacyDataSource : NSObject <FBPrivacyPickerVerboseCellDelegate, UITableViewDelegate, UITableViewDataSource, FBPrivacyDataSourceWithObjects, FBTableViewSectionDataSource> {

	FBUserSession* _session;
	NSMutableOrderedSet* _filteredAudienceOptions;
	NSSet* _selectionSnapshot;
	BOOL _previousNeedsMoreRow;
	FBPrivacyPickerDataSourceConfig* _config;
	NSOrderedSet* _currentPrivacyOptions;
	FBPrivacyTokenableOption* _groupEventExpansionOption;
	FBPrivacyTokenableOption* _privateEventExpansionOption;
	FBComposerPrivacySetting* _widestPrivacySetting;
	BOOL _showExpandedOptions;
	NSOrderedSet* _audienceOptions;
	FBPrivacyTokenableOption* _friendsOfTaggedTagExpansionOption;
	FBPrivacyTokenableOption* _anyoneTaggedTagExpansionOption;
	FBPrivacyTokenableOption* _editableOptionForExclusions;
	FBPrivacyTokenableOption* _editableOptionForOnlyTheseFriends;
	id<FBComposerAudiencePrivacyDataSourceDelegate> _delegate;
	UIView* _friendsOfTaggedTagExpansionOptionCell;
	UITableView* _tableView;
	id<FBTableViewMutating> _tableViewMutator;
	NSString* _searchText;
	NSMutableSet* _selectedObjects;
	NSMutableSet* _disabledObjects;
	NSArray* _availableSettings;

}

@property (nonatomic,readonly) NSOrderedSet * audienceOptions;                                             //@synthesize audienceOptions=_audienceOptions - In the implementation block
@property (nonatomic,readonly) FBPrivacyTokenableOption * friendsOfTaggedTagExpansionOption;               //@synthesize friendsOfTaggedTagExpansionOption=_friendsOfTaggedTagExpansionOption - In the implementation block
@property (nonatomic,readonly) FBPrivacyTokenableOption * anyoneTaggedTagExpansionOption;                  //@synthesize anyoneTaggedTagExpansionOption=_anyoneTaggedTagExpansionOption - In the implementation block
@property (nonatomic,readonly) FBPrivacyTokenableOption * editableOptionForExclusions;                     //@synthesize editableOptionForExclusions=_editableOptionForExclusions - In the implementation block
@property (nonatomic,readonly) FBPrivacyTokenableOption * editableOptionForOnlyTheseFriends;               //@synthesize editableOptionForOnlyTheseFriends=_editableOptionForOnlyTheseFriends - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerAudiencePrivacyDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIView * friendsOfTaggedTagExpansionOptionCell;                      //@synthesize friendsOfTaggedTagExpansionOptionCell=_friendsOfTaggedTagExpansionOptionCell - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                              //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                          //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSMutableSet * selectedObjects;                                                 //@synthesize selectedObjects=_selectedObjects - In the implementation block
@property (nonatomic,copy) NSMutableSet * disabledObjects;                                                 //@synthesize disabledObjects=_disabledObjects - In the implementation block
@property (nonatomic,copy) NSArray * availableSettings;                                                    //@synthesize availableSettings=_availableSettings - In the implementation block
@property (assign,nonatomic) BOOL showExpandedOptions;                                                     //@synthesize showExpandedOptions=_showExpandedOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 ;
-(NSOrderedSet *)audienceOptions;
-(void)snapshotSelection;
-(void)toggleExpandedPrivacy;
-(FBPrivacyTokenableOption *)editableOptionForExclusions;
-(FBPrivacyTokenableOption *)editableOptionForOnlyTheseFriends;
-(NSMutableSet *)disabledObjects;
-(UIView *)friendsOfTaggedTagExpansionOptionCell;
-(void)setShowExpandedOptions:(BOOL)arg1 ;
-(void)updateVisibleOptions:(BOOL)arg1 ;
-(void)setAvailableSettings:(NSArray *)arg1 ;
-(id)indexPathForOption:(id)arg1 ;
-(id)optionForIndexPath:(id)arg1 ;
-(FBPrivacyTokenableOption *)friendsOfTaggedTagExpansionOption;
-(FBPrivacyTokenableOption *)anyoneTaggedTagExpansionOption;
-(void)setShowExpandedOptions:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)availableSettings;
-(BOOL)_needsMoreRow;
-(id)_lightweightCellForOption:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3 ;
-(id)_verboseCellForOption:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3 ;
-(id)_desktopCellForOption:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3 ;
-(BOOL)_optionVisibilityFilter:(id)arg1 ;
-(BOOL)showExpandedOptions;
-(BOOL)_hasHidableOptions;
-(void)_rebuildAudienceList;
-(void)setSelectedObjects:(NSMutableSet *)arg1 ;
-(void)setDisabledObjects:(NSMutableSet *)arg1 ;
-(void)privacyPickerVerboseCellDidTapEdit:(id)arg1 ;
-(void)setDelegate:(id<FBComposerAudiencePrivacyDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBComposerAudiencePrivacyDataSourceDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(NSMutableSet *)selectedObjects;
@end

