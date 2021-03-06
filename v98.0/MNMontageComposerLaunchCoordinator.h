/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNApplicationDelegateListener.h>
#import <Messenger/MNAppSessionListener.h>

@protocol FBProvider;
@class NSDictionary, NSString;

@interface MNMontageComposerLaunchCoordinator : NSObject <MNApplicationDelegateListener, MNAppSessionListener> {

	NSDictionary* _launchOptions;
	id<FBProvider> _montageComposerPresenterProvider;
	id<FBProvider> _mobileConfigContextManagerProvider;
	BOOL _coldStartFinished;
	BOOL _openToCameraDisabled;
	BOOL _isLoggedInUIPresented;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLaunchOptions:(id)arg1 montageComposerPresenterProvider:(id)arg2 mobileConfigContextManagerProvider:(id)arg3 ;
-(void)applicationDidPerformNotificationNavigation;
-(void)applicationDidPerformActionForShortcutItem:(id)arg1 ;
-(void)applicationDidContinueUserActivity:(id)arg1 ;
-(void)applicationDidOpenURL:(id)arg1 ;
-(void)_appDidEnterBackground;
-(void)_presentMontageComposerIfNeeded;
-(void)_appDidOpenWithNavigationPerformed;
-(void)willPresentLoggedInUI;
-(void)didPresentLoggedInUI;
-(void)willPresentLoggedOutUI;
-(void)didPresentLoggedOutUI;
-(void)dealloc;
-(void)_appDidBecomeActive;
@end

