/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNUrlHandlerExtending.h>

@protocol FBProvider;
@class FBUserSession, FBMLoggedInUserInfoManager, FBProductionLockoutSurveyCoordinator, FBProductionLockoutBetaInstaller, NSString;

@interface MNProductionLockoutURLHandler : NSObject <FBViewerContextClassProvidable, MNUrlHandlerExtending> {

	id<FBProvider> _navigationCoordinatorProvider;
	FBUserSession* _session;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBProductionLockoutSurveyCoordinator* _surveyCoordinator;
	FBProductionLockoutBetaInstaller* _betaInstaller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinatorProvider:(id)arg1 session:(id)arg2 loggedInUserInfoManager:(id)arg3 ;
-(BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)_showSurvey;
-(void)_installBeta;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)isPublic;
@end

