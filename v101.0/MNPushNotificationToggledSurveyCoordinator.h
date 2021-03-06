/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRapidFeedbackSurveyManagerDelegate.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, MNNavigationCoordinator, FBRapidFeedbackSurveyManager, FBRapidFeedbackController, NSNotificationCenter, NSString;

@interface MNPushNotificationToggledSurveyCoordinator : NSObject <FBRapidFeedbackSurveyManagerDelegate, MNServiceControllable, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	FBRapidFeedbackSurveyManager* _surveyManager;
	FBRapidFeedbackController* _rapidFeedbackController;
	NSNotificationCenter* _notificationCenter;
	BOOL _isObservingEligibility;
	BOOL _previousPushStateIsOn;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_showSurvey;
-(void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 rapidFeedbackController:(id)arg3 notificationCenter:(id)arg4 ;
-(void)_pushTurnedOn;
-(void)_pushTurnedOff;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

