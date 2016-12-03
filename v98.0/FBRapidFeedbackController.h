/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRapidFeedbackSurveyManagerDelegate.h>

@class FBRapidFeedbackSurveyManager, FBRapidFeedbackSurveyDisplayListenerAnnouncer, NSSet, NSString;

@interface FBRapidFeedbackController : NSObject <FBRapidFeedbackSurveyManagerDelegate> {

	FBRapidFeedbackSurveyManager* _surveyManager;
	FBRapidFeedbackSurveyDisplayListenerAnnouncer* _announcer;
	NSSet* _blackoutExemptIntegrationPoints;
	BOOL _presentingSurvey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(void)fetchSurveyForIntegrationPoint:(id)arg1 userSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showSurveyForIntegrationPointId:(id)arg1 presentingViewController:(id)arg2 userSession:(id)arg3 ;
-(void)showSurveyForIntegrationPointId:(id)arg1 navigationCoordinator:(id)arg2 userSession:(id)arg3 ;
-(void)_setSurveyPresented:(id)arg1 ;
-(void)_setSurveyDismissed:(id)arg1 ;
-(void)addExtraData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isDeveloperModeEnabled;
-(BOOL)_hasRecentlySeenSurvey;
-(void)_setLastSurveySeenDate;
-(void)_showSurveyForIntegrationPointId:(id)arg1 navigationCoordinator:(id)arg2 userSession:(id)arg3 optionalPresentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_dismissSurveyViewController:(BOOL)arg1 ;
-(void)showSurveyForIntegrationPointId:(id)arg1 navigationCoordinator:(id)arg2 presentingViewController:(id)arg3 userSession:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)lastSurveySeenDate;
-(void)clearLastSurveySeenDate;
-(void)setDeveloperModeEnabled:(BOOL)arg1 ;
-(id)_initPrivate;
-(void)addListener:(id)arg1 ;
@end
