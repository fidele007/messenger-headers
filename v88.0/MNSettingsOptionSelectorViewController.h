/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol MNSettingsOptionSelectorViewControllerDelegate;
@class MNSettingsView, MNSettingsSectionFooterView, NSMutableArray, NSString;

@interface MNSettingsOptionSelectorViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	MNSettingsView* _settingsView;
	MNSettingsSectionFooterView* _subtitleView;
	NSMutableArray* _options;
	long long _selectedOptionIdentifier;
	NSString* _selectedOptionTitle;
	NSString* _subtitle;
	id<MNSettingsOptionSelectorViewControllerDelegate> _delegate;

}

@property (__weak) id<MNSettingsOptionSelectorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)addOptionWithTitle:(id)arg1 identifier:(long long)arg2 isChecked:(BOOL)arg3 ;
-(id)selectedOptionTitle;
-(void)setSelectedOptionWithIdentifier:(long long)arg1 ;
-(long long)selectedOptionIdentifier;
-(void)_initializeSubtitleView;
-(void)setDelegate:(id<MNSettingsOptionSelectorViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNSettingsOptionSelectorViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)initWithTitle:(id)arg1 ;
@end

