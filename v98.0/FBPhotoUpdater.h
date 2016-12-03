/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLService, FBMediaSetStoreManager, FBUserSession, NSMutableSet;

@interface FBPhotoUpdater : NSObject {

	FBGraphQLService* _graphQLService;
	FBMediaSetStoreManager* _mediaSetStoreManager;
	FBUserSession* _session;
	/*^block*/id _queryProvider;
	NSMutableSet* _requestHandles;

}
-(id)updatePhotosWithPhotoIDs:(id)arg1 networkRequestThreshold:(long long)arg2 networkRequestActorID:(id)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_handleResponse:(id)arg1 photoIDs:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setQueryProvider:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

