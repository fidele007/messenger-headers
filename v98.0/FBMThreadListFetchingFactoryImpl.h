/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListFetchingFactory.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager, FBMNetworkFetchParsedResultMerging, FBMMoreThreadsFetchedListening;
@class FBUserSession, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, MNThreadListFetchConfiguration, FBAnalytics, NSString;

@interface FBMThreadListFetchingFactoryImpl : NSObject <MNThreadListFetchingFactory, FBClassProvidable> {

	FBUserSession* _userSession;
	id<MNAuthenticationManager> _authManager;
	id<FBMNetworkFetchParsedResultMerging> _networkResultMerger;
	MNGraphQLQueryConfigGenerator* _graphQLQueryConfig;
	id<FBMMoreThreadsFetchedListening> _moreThreadsListener;
	MNMessagingRegionHeaderHelper* _regionHelper;
	MNThreadListFetchConfiguration* _threadListFetchConfiguration;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)buildThreadListFetcherForQueue:(id)arg1 ;
@end

