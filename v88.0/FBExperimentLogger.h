/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy;
#import <Messenger/Messenger-Structs.h>
@class FBAnalytics, FBExperimentCatalog, FBExperimentLoggingRateLimiter;

@interface FBExperimentLogger : NSObject {

	FBAnalytics* _analytics;
	FBExperimentCatalog* _catalog;
	FBExperimentLoggingRateLimiter* _rateLimiter;
	id<FBExperimentManagerPolicy> _policy;

}
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 date:(id)arg4 extraData:(id)arg5 ;
-(ConfigInfo)_loggingInfo:(id)arg1 group:(id)arg2 ;
-(id)initWithAnalytics:(id)arg1 catalog:(id)arg2 policy:(id)arg3 ;
-(BOOL)attemptLogObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 extraData:(id)arg4 ;
-(id)observationDataForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 date:(id)arg4 extraData:(id)arg5 ;
@end
