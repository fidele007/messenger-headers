/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBFeedbackReactionSettingsNetworker : NSObject {

	FBUserSession* _session;

}
-(id)feedbackReactionSettingsQuery;
-(id)parseReactionsFromResponse:(id)arg1 error:(id*)arg2 ;
-(void)fetchReactionSettingsWithCallbackQueue:(id)arg1 successCallback:(/*^block*/id)arg2 failureCallback:(/*^block*/id)arg3 ;
-(id)startReactionSettingsLiveQueryWithCallbackQueue:(id)arg1 updateCallback:(/*^block*/id)arg2 failureCallback:(/*^block*/id)arg3 ;
-(void)fetchInputFaceModelsWithCallbackQueue:(id)arg1 successCallback:(/*^block*/id)arg2 failureCallback:(/*^block*/id)arg3 ;
-(void)fetchImageWithURI:(id)arg1 scale:(double)arg2 callbackQueue:(id)arg3 successCallback:(/*^block*/id)arg4 failureCallback:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end

