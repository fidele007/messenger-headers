/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBClassInjectable.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewDelegate.h>
#import <Messenger/MNThreadCustomizationPickerViewControllerDelegate.h>
#import <Messenger/FBPickerViewDelegate.h>
#import <Messenger/MNEditGroupPicturePickerDelegate.h>
#import <Messenger/MNNewGroupThreadSummaryUpdateListener.h>
#import <Messenger/MNNewGroupThreadSummaryUpdating.h>

@protocol MNNewGroupThreadSummaryUpdateRunning;
@class MNGroupsRoomContainerView, MNGroupsAddRoomDescriptionViewController, MNThreadCustomizationPickerViewController, FBPickerView, MNNewGroupThreadSummary, MNGroupsRoomCreateViewControllerInjector, NSString;

@interface MNGroupsRoomCreateViewController : UIViewController <FBClassInjectable, UITableViewDataSource, UITableViewDelegate, MNGroupsRoomCreateViewDelegate, MNThreadCustomizationPickerViewControllerDelegate, FBPickerViewDelegate, MNEditGroupPicturePickerDelegate, MNNewGroupThreadSummaryUpdateListener, MNNewGroupThreadSummaryUpdating> {

	MNGroupsRoomContainerView* _roomContainerView;
	MNGroupsAddRoomDescriptionViewController* _addGroupDescriptionViewController;
	MNThreadCustomizationPickerViewController* _pickerViewController;
	FBPickerView* _pickerView;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;
	MNNewGroupThreadSummary* _groupThreadSummary;
	MNGroupsRoomCreateViewControllerInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)editGroupPicturePicker:(id)arg1 didPickImage:(id)arg2 ;
-(void)editGroupPicturePickerDidChooseToRemoveImage:(id)arg1 ;
-(void)editGroupPicturePickerDidCancel:(id)arg1 ;
-(void)pickerView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)pickerView:(id)arg1 didDeselectItem:(id)arg2 ;
-(void)roomCreateViewDidSelectRoomProfilePhoto:(id)arg1 fromSourceView:(id)arg2 ;
-(void)roomCreateViewDidAddDescription:(id)arg1 ;
-(void)roomCreateViewDidTapCustomize:(id)arg1 ;
-(void)roomCreateView:(id)arg1 didChangeRoomName:(id)arg2 ;
-(void)_configureViewWithNewGroupThreadSummary:(id)arg1 ;
-(void)_didSelectCustomizeEmojiForNewRoom;
-(void)_didSelectCustomizeColorForNewRoom;
-(void)_updateNewGroupThreadSummaryWithGroupName:(id)arg1 ;
-(void)_presentThreadCustomizationPickerControllerForPickerType:(long long)arg1 pickerIdentifier:(id)arg2 ;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(void)threadCustomizationPickerViewControllerDidCancel:(id)arg1 ;
-(void)newGroupThreadSummaryUpdated:(id)arg1 ;
-(BOOL)isShowingCustomizationOptions;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)prepareForReuse;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

