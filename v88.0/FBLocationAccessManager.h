/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FBLocationAccessManagerDelegate;
@class FBAlertViewCoordinator, CLLocationManager, UIAlertView, FBLocationAccessAuthorizationCache, FBUserSession, NSString, FBLocationManager;

@interface FBLocationAccessManager : NSObject <UIAlertViewDelegate, CLLocationManagerDelegate> {

	FBAlertViewCoordinator* _alertCoordinator;
	CLLocationManager* _nativeLocationManager;
	UIAlertView* _alertView;
	unsigned long long _state;
	int _lastForegroundAuthorization;
	unsigned long long _initRequestMode;
	BOOL _isUpdatingLocation;
	FBLocationAccessAuthorizationCache* _authCache;
	FBUserSession* _session;
	NSString* _sessionID;
	FBLocationManager* _locationManager;
	NSString* _overrideNotDeterminedDialogMessage;
	id<FBLocationAccessManagerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long requestedMode; 
@property (nonatomic,retain) NSString * overrideNotDeterminedDialogMessage;                    //@synthesize overrideNotDeterminedDialogMessage=_overrideNotDeterminedDialogMessage - In the implementation block
@property (nonatomic,readonly) FBLocationManager * locationManager; 
@property (assign,nonatomic,__weak) id<FBLocationAccessManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int authorizationStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_willResignActive:(id)arg1 ;
-(BOOL)canAccessLocation;
-(void)requestLocationAccess;
-(void)requestLocationAccessWithoutAlert;
-(id)initWithLocationManager:(id)arg1 alertViewCoordinator:(id)arg2 requestMode:(unsigned long long)arg3 authorizationCache:(id)arg4 session:(id)arg5 ;
-(void)_didEnterInBackground:(id)arg1 ;
-(void)_willEnterInForeground:(id)arg1 ;
-(void)_stopLocationManager;
-(void)_requestLocationAccessWithAlertView:(BOOL)arg1 ;
-(id)_addLoggingContext:(id)arg1 action:(id)arg2 ;
-(unsigned long long)requestedMode;
-(void)_showAuthorizationAlertWithAuthorization:(int)arg1 ;
-(void)_userIsGrantingApp;
-(void)_startLocationManager;
-(BOOL)_canAccessLocation:(int)arg1 ;
-(void)_logLocationUserAction:(id)arg1 extra:(id)arg2 ;
-(id)_buildNotDeterminedAlert;
-(id)_buildInstructionAlert:(unsigned long long)arg1 ;
-(id)_notDeterminedDialogTitle;
-(id)_notDeterminedDialogMessage;
-(id)_notDeterminedDialogConfirmationButtonTitle;
-(NSString *)overrideNotDeterminedDialogMessage;
-(void)_notifyDelegateWithAuthorization:(int)arg1 settingsChanged:(BOOL)arg2 ;
-(void)setOverrideNotDeterminedDialogMessage:(NSString *)arg1 ;
-(void)setDelegate:(id<FBLocationAccessManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLocationAccessManagerDelegate>)delegate;
-(void)invalidate;
-(void)_reset;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(int)authorizationStatus;
-(void)_didBecomeActive:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(FBLocationManager *)locationManager;
@end

