/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessageFetchNetworkRequestRunning.h>

@protocol MNAuthenticationManager;
@class FBMBatchThreadNetworkFetchRunnerFactory, FBMSingleMessageFetcher, NSMutableDictionary, NSString;

@interface FBMMessageFetchNetworkRequestRunnerAdapter : NSObject <FBViewerContextClassProvidable, MNMessageFetchNetworkRequestRunning> {

	FBMBatchThreadNetworkFetchRunnerFactory* _factory;
	FBMSingleMessageFetcher* _singleMessageFetcher;
	NSMutableDictionary* _runnerByRequestId;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fetchSpecificMessage:(id)arg1 forRequest:(unsigned long long)arg2 isForegroundRequest:(BOOL)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)fetchBatchRequest:(id)arg1 forRequest:(unsigned long long)arg2 isForegroundRequest:(BOOL)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
@end

