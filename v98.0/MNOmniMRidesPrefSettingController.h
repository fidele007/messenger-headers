/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNOmniMRidesPrefSettingControllerDelegate;
@class MNOmniMSettingsStore, UIActionSheet, NSString;

@interface MNOmniMRidesPrefSettingController : NSObject <UIActionSheetDelegate, FBClassProvidable> {

	MNOmniMSettingsStore* _omniMSettingsStore;
	UIActionSheet* _changeRidesPrefSettingActionSheet;
	long long _uberButtonIndex;
	long long _lyftButtonIndex;
	id<MNOmniMRidesPrefSettingControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNOmniMRidesPrefSettingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)currentRidesPrefString;
-(void)omniMRidesPrefCellTappedWithActionSheetPresentationView:(id)arg1 fromSourceView:(id)arg2 ;
-(void)setDelegate:(id<MNOmniMRidesPrefSettingControllerDelegate>)arg1 ;
-(id<MNOmniMRidesPrefSettingControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
