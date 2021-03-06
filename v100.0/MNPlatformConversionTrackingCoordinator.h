/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNInboxAppearanceEventListener.h>
#import <Messenger/MNAuthenticationCompletionListener.h>
#import <Messenger/MNRegistrationListener.h>

@class MNPlatformConversionTrackingCoordinatorInjector, NSString;

@interface MNPlatformConversionTrackingCoordinator : NSObject <FBClassInjectable, MNInboxAppearanceEventListener, MNAuthenticationCompletionListener, MNRegistrationListener> {

	MNPlatformConversionTrackingCoordinatorInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_logPlatformConversionForTracking:(id)arg1 ;
-(void)authenticationCompletedWithLoginFlowType:(long long)arg1 ;
-(void)userRegistrationDidStart;
-(void)trackAppLaunchEvent;
-(void)inboxDidDisplayThreadList;
-(void)inboxDidLoadThreadListDataModel;
-(void)inboxDidFailToLoadThreadListDataModel;
-(void)inboxViewAppearanceStateDidChangeTo:(unsigned long long)arg1 ;
-(void)inboxWillLoadMontageCamera;
-(void)inboxDidLoadMontageCamera;
@end

