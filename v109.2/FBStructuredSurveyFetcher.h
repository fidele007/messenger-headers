/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@interface FBStructuredSurveyFetcher : NSObject {

	id<FBServiceTransactionMutating> _surveyToken;

}
-(void)fetchSurveyForIntegrationPointId:(id)arg1 userSession:(id)arg2 cacheTimeoutSeconds:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchSurveyForIntegrationPointId:(id)arg1 userSession:(id)arg2 cacheTimeoutSeconds:(unsigned long long)arg3 contextDataDictionary:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_baseAnalyticsExtra;
@end

