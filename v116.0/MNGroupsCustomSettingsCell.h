/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MNGroupsCustomSettingsCellDelegate;
@class MNTableViewCellStyle, UISwitch;

@interface MNGroupsCustomSettingsCell : UITableViewCell {

	MNTableViewCellStyle* _cellStyle;
	UISwitch* _settingsSwitch;
	id<MNGroupsCustomSettingsCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsCustomSettingsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didToggleSwitch:(id)arg1 ;
-(void)setSettingsToggleState:(BOOL)arg1 ;
-(void)setDelegate:(id<MNGroupsCustomSettingsCellDelegate>)arg1 ;
-(id)initWithStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id<MNGroupsCustomSettingsCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

