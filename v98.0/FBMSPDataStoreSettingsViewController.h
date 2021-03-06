/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UILabel, MNSPDataStore, NSString;

@interface FBMSPDataStoreSettingsViewController : UIViewController <UITextFieldDelegate> {

	UITextField* _syncTokenField;
	UITextField* _lastSequenceIdField;
	UILabel* _syncTokenLabel;
	UILabel* _lastSequenceIdLabel;
	MNSPDataStore* _spDataStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutSubviewsWithScreenFrame:(CGRect)arg1 ;
-(id)initWithSpDataStore:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

