/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, MNUserStore, MNRemoteRankedContactsFetchRequestController, FBAnalytics, NSString;

@interface MNInviteListRemoteRankedContactsRetrieverInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNUserStore* _userStore;
	MNRemoteRankedContactsFetchRequestController* _remoteRankedContactsFetchRequestController;
	FBAnalytics* _analytics;

}

@property (nonatomic,readonly) MNUserStore * userStore;                                                                                //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,readonly) MNRemoteRankedContactsFetchRequestController * remoteRankedContactsFetchRequestController;              //@synthesize remoteRankedContactsFetchRequestController=_remoteRankedContactsFetchRequestController - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                                                //@synthesize analytics=_analytics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
-(MNUserStore *)userStore;
-(MNRemoteRankedContactsFetchRequestController *)remoteRankedContactsFetchRequestController;
@end

