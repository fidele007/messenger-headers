/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCPersonPickerViewControllerDelegate.h>
#import <Messenger/FBWebRTCRecentCallLogListener.h>
#import <Messenger/FBWebRTCCallLogViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, FBWebRTCPickAndCallContactControllerDelegate;
@class FBWebRTCCallButtonImageProvider, UIBarButtonItem, FBExperimentManager, FBMobileConfigContextManager, MNAppThemeConfiguration, NSString, UIViewController, FBWebRTCCallController, FBWebRTCPersonPickerViewController, FBWebRTCCallLogViewController, FBWebRTCCallButton, FBWebRTCRecentCallLog;

@interface FBWebRTCPickAndCallContactController : NSObject <FBWebRTCPersonPickerViewControllerDelegate, FBWebRTCRecentCallLogListener, FBWebRTCCallLogViewControllerDelegate, FBClassProvidable> {

	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	UIBarButtonItem* _callButtonItem;
	FBExperimentManager* _experimentManager;
	FBMobileConfigContextManager* _configManager;
	id<FBProvider> _recentCallsViewControllerProvider;
	MNAppThemeConfiguration* _appThemeConfiguration;
	id<FBWebRTCPickAndCallContactControllerDelegate> _delegate;
	NSString* _callTriggerBase;
	UIViewController* _parentViewController;
	FBWebRTCCallController* _callController;
	id<FBProvider> _personPickerProvider;
	FBWebRTCPersonPickerViewController* _personPicker;
	id<FBProvider> _callLogControllerProvider;
	FBWebRTCCallLogViewController* _callLogController;
	FBWebRTCCallButton* _callButton;
	FBWebRTCRecentCallLog* _callLog;

}

@property (nonatomic,retain) FBWebRTCCallController * callController;                                       //@synthesize callController=_callController - In the implementation block
@property (nonatomic,retain) id<FBProvider> personPickerProvider;                                           //@synthesize personPickerProvider=_personPickerProvider - In the implementation block
@property (nonatomic,retain) FBWebRTCPersonPickerViewController * personPicker;                             //@synthesize personPicker=_personPicker - In the implementation block
@property (nonatomic,retain) id<FBProvider> callLogControllerProvider;                                      //@synthesize callLogControllerProvider=_callLogControllerProvider - In the implementation block
@property (nonatomic,retain) FBWebRTCCallLogViewController * callLogController;                             //@synthesize callLogController=_callLogController - In the implementation block
@property (nonatomic,retain) FBWebRTCCallButton * callButton;                                               //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) FBWebRTCRecentCallLog * callLog;                                               //@synthesize callLog=_callLog - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCPickAndCallContactControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * callTriggerBase;                                                      //@synthesize callTriggerBase=_callTriggerBase - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) UIBarButtonItem * callButtonItem; 
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                                //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)recentCallLogLoaded;
-(void)recentCallLogCallsChanged;
-(void)recentCallLogUnseenMissedCallCountChanged;
-(void)setCallTriggerBase:(NSString *)arg1 ;
-(UIBarButtonItem *)callButtonItem;
-(FBWebRTCCallController *)callController;
-(BOOL)shouldShowTableViewHeaderSearchBarInCallLogController:(id)arg1 ;
-(id)callLogControllerTopLevelViewController:(id)arg1 ;
-(void)callLogController:(id)arg1 didCallContact:(id)arg2 isVideoCall:(BOOL)arg3 source:(unsigned long long)arg4 ;
-(BOOL)callLogControllerShouldSearchServer:(id)arg1 ;
-(BOOL)callLogControllerIsAudioCallingAvailable:(id)arg1 ;
-(BOOL)callLogControllerIsVideoCallingAvailable:(id)arg1 ;
-(void)callLogControllerDidClose:(id)arg1 animated:(BOOL)arg2 ;
-(void)_startCallToContact:(id)arg1 isVideoCall:(BOOL)arg2 withTrigger:(id)arg3 ;
-(void)presentWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithCallController:(id)arg1 personPickerProvider:(id)arg2 callLogControllerProvider:(id)arg3 experimentManager:(id)arg4 callLog:(id)arg5 callButtonImageProvider:(id)arg6 userSettings:(id)arg7 configManager:(id)arg8 appThemeConfiguration:(id)arg9 ;
-(void)setCallLogControllerProvider:(id<FBProvider>)arg1 ;
-(void)setCallLogController:(FBWebRTCCallLogViewController *)arg1 ;
-(FBWebRTCCallLogViewController *)callLogController;
-(id)_presentedViewControllerWithParent:(id)arg1 ;
-(void)_dismissPresentedController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPersonPicker:(FBWebRTCPersonPickerViewController *)arg1 ;
-(void)_modallyPresentVC;
-(NSString *)callTriggerBase;
-(void)_dismissViewController:(id)arg1 andStartCallWithContact:(id)arg2 isVideoCall:(BOOL)arg3 source:(unsigned long long)arg4 ;
-(void)choosePersonViewController:(id)arg1 didCallContact:(id)arg2 isVideoCall:(BOOL)arg3 source:(unsigned long long)arg4 ;
-(void)choosePersonViewControllerDidCancel:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)choosePersonViewControllerIsAudioCallingAvailable:(id)arg1 ;
-(BOOL)choosePersonViewControllerIsVideoCallingAvailable:(id)arg1 ;
-(BOOL)choosePersonViewControllerShouldSearchServer:(id)arg1 ;
-(void)setCallController:(FBWebRTCCallController *)arg1 ;
-(id<FBProvider>)personPickerProvider;
-(void)setPersonPickerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)callLogControllerProvider;
-(FBWebRTCCallButton *)callButton;
-(void)setCallButton:(FBWebRTCCallButton *)arg1 ;
-(FBWebRTCRecentCallLog *)callLog;
-(void)setCallLog:(FBWebRTCRecentCallLog *)arg1 ;
-(void)setDelegate:(id<FBWebRTCPickAndCallContactControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCPickAndCallContactControllerDelegate>)delegate;
-(UIViewController *)parentViewController;
-(BOOL)isEnabled;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(FBWebRTCPersonPickerViewController *)personPicker;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

