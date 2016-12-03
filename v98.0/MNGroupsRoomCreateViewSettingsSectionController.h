/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNGroupsRoomCreateViewTableSectionControlling.h>

@protocol MNGroupsRoomCreateViewSettingsSectionControllerDelegate;
@class NSOrderedSet, NSString;

@interface MNGroupsRoomCreateViewSettingsSectionController : NSObject <MNGroupsRoomCreateViewTableSectionControlling> {

	NSOrderedSet* _orderedSettingsRows;
	id<MNGroupsRoomCreateViewSettingsSectionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewSettingsSectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellReuseIdentifierForIndexPath:(id)arg1 ;
-(double)cellHeightForRoomSummary:(id)arg1 atIndexPath:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withRoomSummary:(id)arg3 ;
-(void)didSelectCellAtIndexPath:(id)arg1 ;
-(void)resetCellController;
-(unsigned long long)_settingsRowForIndex:(long long)arg1 ;
-(void)_didTapApprovalToggle:(id)arg1 ;
-(void)_didTapDiscoverableToggle:(id)arg1 ;
-(void)_didTapMuteNotificationsToggle:(id)arg1 ;
-(id)initWithOrderedSettings:(id)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomCreateViewSettingsSectionControllerDelegate>)arg1 ;
-(id<MNGroupsRoomCreateViewSettingsSectionControllerDelegate>)delegate;
@end

