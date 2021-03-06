/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSettingsSingleTextFieldViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSString;

@interface FBSettingsSandboxURLViewController : FBSettingsSingleTextFieldViewController <UITextFieldDelegate> {

	unsigned long long _sandboxType;
	NSArray* _shortcutSandboxes;
	NSArray* _shortcutButtons;

}

@property (nonatomic,copy) NSArray * shortcutSandboxes;              //@synthesize shortcutSandboxes=_shortcutSandboxes - In the implementation block
@property (nonatomic,copy) NSArray * shortcutButtons;                //@synthesize shortcutButtons=_shortcutButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentSandboxSettingForType:(unsigned long long)arg1 ;
-(id)initWithSandboxType:(unsigned long long)arg1 ;
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showAuxiliaryViewController;
-(id)_recentSandboxes;
-(NSArray *)shortcutSandboxes;
-(void)setShortcutButtons:(NSArray *)arg1 ;
-(void)_setSandbox:(id)arg1 ;
-(void)_addRecentSandbox:(id)arg1 ;
-(void)_configureShortcuts;
-(NSArray *)shortcutButtons;
-(void)setShortcutSandboxes:(NSArray *)arg1 ;
-(id)_presetSandboxes;
-(id)_subdomainsUserDefaultsKey;
-(void)_didTapShortcutButton:(id)arg1 ;
-(void)_saveDefaultSandbox:(id)arg1 ;
-(void)_saveMQTTSandbox:(id)arg1 ;
-(void)_showLigerAndSSLPinningWarning;
-(void)_doneSetSandbox;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

