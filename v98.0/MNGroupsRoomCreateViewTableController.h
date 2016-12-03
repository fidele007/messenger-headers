/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNGroupsRoomCreateViewRoomBasicInfoSectionControllerDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewSettingsSectionControllerDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewCustomizationSectionControllerDelegate.h>
#import <Messenger/MNNewGroupThreadSummaryUpdating.h>

@protocol MNNewGroupThreadSummaryUpdateRunning, MNGroupsRoomCreateViewTableControllerDelegate;
@class MNGroupsRoomCreateViewTableControllerInjector, MNGroupsRoomCreateViewRoomBasicInfoSectionController, MNGroupsRoomCreateViewSettingsSectionController, MNGroupsRoomCreateViewCustomizationSectionController, NSString;

@interface MNGroupsRoomCreateViewTableController : NSObject <FBClassInjectable, MNGroupsRoomCreateViewRoomBasicInfoSectionControllerDelegate, MNGroupsRoomCreateViewSettingsSectionControllerDelegate, MNGroupsRoomCreateViewCustomizationSectionControllerDelegate, MNNewGroupThreadSummaryUpdating> {

	MNGroupsRoomCreateViewTableControllerInjector* _injector;
	MNGroupsRoomCreateViewRoomBasicInfoSectionController* _basicInfoCellController;
	MNGroupsRoomCreateViewSettingsSectionController* _settingsCellController;
	MNGroupsRoomCreateViewCustomizationSectionController* _emojiCellController;
	MNGroupsRoomCreateViewCustomizationSectionController* _colorThemeCellController;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;
	id<MNGroupsRoomCreateViewTableControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewTableControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)roomsCustomizationSectionController:(id)arg1 didChangeCustomEmoji:(id)arg2 ;
-(void)roomsCustomizationSectionController:(id)arg1 didChangeCustomThemeColor:(id)arg2 ;
-(void)roomsBasicInfoSectionController:(id)arg1 didChangeRoomName:(id)arg2 ;
-(void)roomsBasicInfoSectionControllerWillExpandForLongerText:(id)arg1 ;
-(void)roomsBasicInfoSectionController:(id)arg1 didChangeRoomProfilePicture:(id)arg2 ;
-(void)roomsBasicInfoSectionController:(id)arg1 didChangeRoomDescription:(id)arg2 ;
-(void)roomCreateViewSettingsSectionController:(id)arg1 didToggleRoomSettingRow:(unsigned long long)arg2 isON:(BOOL)arg3 ;
-(id)_orderedSettingsRows;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(id)_orderedSections;
-(id)sectionControllerForSection:(unsigned long long)arg1 ;
-(unsigned long long)settingsRowAtIndex:(long long)arg1 ;
-(long long)indexOfSection:(unsigned long long)arg1 ;
-(void)setInitialFocusOnNameCell;
-(void)resetSectionControllers;
-(void)setDelegate:(id<MNGroupsRoomCreateViewTableControllerDelegate>)arg1 ;
-(long long)numberOfRowsInSection:(unsigned long long)arg1 ;
-(id<MNGroupsRoomCreateViewTableControllerDelegate>)delegate;
-(long long)numberOfSections;
-(unsigned long long)sectionAtIndex:(long long)arg1 ;
@end
