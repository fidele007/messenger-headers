/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNPlatformAppListFetcherDelegate;
@class FBUserSession, MNPlatformAppFetchingConfiguration;

@interface MNPlatformAppListFetcher : NSObject {

	FBUserSession* _session;
	MNPlatformAppFetchingConfiguration* _configuration;
	id<FBServiceTransactionMutating> _graphqlRequestHandle;
	id<MNPlatformAppListFetcherDelegate> _delegate;

}
-(void)_applyServiceConfiguration:(id)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(void)_didFetchWithCachedResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 ;
-(void)_didFetchWithDownloadedResponse:(id)arg1 ;
-(void)_didFailToFetchWithError:(id)arg1 ;
-(void)startWithDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)cancel;
@end
