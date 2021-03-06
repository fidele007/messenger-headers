/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNMessagesSyncClientOnlyDeltaProcessing.h>

@protocol FBServiceTransactionMutating;
@class MNGameUpdateDeltaHandlerInjector, FBInstantGameListFetcher, NSString;

@interface MNGameUpdateDeltaHandler : NSObject <FBClassInjectable, MNMessagesSyncClientOnlyDeltaProcessing> {

	MNGameUpdateDeltaHandlerInjector* _injector;
	FBInstantGameListFetcher* _gameListFetcher;
	id<FBServiceTransactionMutating> _lastGameHubRequestHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MNGameUpdateDeltaHandlerInjector * injector;              //@synthesize injector=_injector - In the implementation block
+(Class)injectorClass;
-(MNGameUpdateDeltaHandlerInjector *)injector;
-(id)deltasWithMetadataFromDeltaUnion:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateGameHubTabStore;
-(void)_updateStoreWithComposerBadgeCount:(unsigned long long)arg1 tabBadgeCount:(unsigned long long)arg2 threadKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithInjector:(id)arg1 ;
@end

