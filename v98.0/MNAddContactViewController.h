/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPhoneNumberDialogDelegate.h>
#import <Messenger/MNContactNotFoundDialogDelegate.h>
#import <Messenger/MNContactAddedDialogDelegate.h>
#import <Messenger/MNAddContactOperationDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNPresentableDialog.h>

@protocol MNUserWriting, MNUserQuerying;
@class MNAddContactOperation, MNAddContactView, FBUserSession, MNNavigationCoordinator, MNNewThreadNavigationCoordinator, MNThreadParticipantNameFormatter, FBAnalytics, FBLazyCreator, FBCurrentCountryManager, LPPhoneNumber, MNCDNProfileImageDownloader, NSString;

@interface MNAddContactViewController : UIViewController <MNPhoneNumberDialogDelegate, MNContactNotFoundDialogDelegate, MNContactAddedDialogDelegate, MNAddContactOperationDelegate, FBClassProvidable, MNPresentableDialog> {

	MNAddContactOperation* _addContactOperation;
	MNAddContactView* _addContactView;
	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	id<MNUserWriting> _userWriter;
	MNThreadParticipantNameFormatter* _nameFormatter;
	id<MNUserQuerying> _userQuerier;
	FBAnalytics* _analytics;
	FBLazyCreator* _smsInvitePresenterCreator;
	FBCurrentCountryManager* _currentCountryManager;
	BOOL _statusBarHiddenBeforeAddContactFlow;
	CGPoint _originalPopoverLocation;
	LPPhoneNumber* _enteredPhoneNumber;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	NSString* _prefilledPhoneNumberString;

}

@property (nonatomic,copy) NSString * prefilledPhoneNumberString;              //@synthesize prefilledPhoneNumberString=_prefilledPhoneNumberString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(BOOL)willOpenKeyboardOnAppear;
-(void)addContactOperation:(id)arg1 didAddContact:(id)arg2 ;
-(void)addContactOperation:(id)arg1 didAddContact:(id)arg2 withMatchedProfile:(id)arg3 ;
-(void)addContactOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_showErrorAlert:(id)arg1 ;
-(void)setPrefilledPhoneNumberString:(NSString *)arg1 ;
-(void)userDidPressUndo;
-(void)userDidPressSendMessage;
-(void)userDidPressClose;
-(void)userDidPressInvite:(id)arg1 ;
-(void)userDidDismissPhoneNumberEntry;
-(void)userDidEnterPhoneNumber:(id)arg1 ;
-(void)_orientationChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 newThreadNavigationCoordinator:(id)arg3 userWriter:(id)arg4 nameFormatter:(id)arg5 userQuerier:(id)arg6 analytics:(id)arg7 profileImageDownloader:(id)arg8 ;
-(NSString *)prefilledPhoneNumberString;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_dismiss;
-(double)backgroundAlpha;
@end

