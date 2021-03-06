/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNOperationsTracker;

@interface MNMontageViewModelGenerationRequestTracker : NSObject {

	MNOperationsTracker* _operationsTracker;

}
-(unsigned long long)beginTrackingNewRequest;
-(void)clearRequest:(unsigned long long)arg1 ;
-(void)setThreadRequest:(unsigned long long)arg1 forRequest:(unsigned long long)arg2 ;
-(unsigned long long)threadStoreRequestForRequest:(unsigned long long)arg1 ;
-(void)setUserStoreRequest:(unsigned long long)arg1 forRequest:(unsigned long long)arg2 ;
-(unsigned long long)userStoreRequestForRequest:(unsigned long long)arg1 ;
-(void)setCancelTokenForMessageRequest:(id)arg1 forRequest:(unsigned long long)arg2 ;
-(id)cancelTokenForMessageRequest:(unsigned long long)arg1 ;
-(id)initWithInvocationQueue:(id)arg1 ;
@end

