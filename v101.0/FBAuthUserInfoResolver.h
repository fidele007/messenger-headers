/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class FBPersistentKeyValueStore;

@interface FBAuthUserInfoResolver : NSObject {

	id<FBNetworkDispatch> _networker;
	FBPersistentKeyValueStore* _userInfoCache;

}
+(id)sharedResolver;
-(void)fetchInfoForCurrentUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNetworker:(id)arg1 keyValueStore:(id)arg2 ;
-(void)_fetchNetworkInfoForIdentifier:(id)arg1 accessToken:(id)arg2 cacheToKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchCachedInfoForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForUser:(id)arg1 accessToken:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
