/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBComposerPublisherStatusListener.h>

@class FBAnalytics, FBUserSession, NSString;

@interface FBPublishingStatusAnalyticsLogger : NSObject <FBComposerPublisherStatusListener> {

	FBAnalytics* _analyticsLogger;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(id)initWithAnalyticsLogger:(id)arg1 userSession:(id)arg2 ;
-(void)startedPublishingRequestToTheServerForPublisherData:(id)arg1 ;
-(void)exceededMaxTimeoutPeriodForPublicationOfPublisherData:(id)arg1 ;
@end

