/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLSubscriptionHandle;
@class FBUserSession, NSString;

@interface FBLiveVideoBroadcastStatusSubscriptionHandler : NSObject {

	FBUserSession* _session;
	NSString* _videoID;
	/*^block*/id _callback;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;

}
-(BOOL)_createLiveVideoBroadcastStatusLiveQuery;
-(void)_didReceiveUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)subscribe;
-(void)unsubscribe;
@end

