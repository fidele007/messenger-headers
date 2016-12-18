/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBUserSession;

@interface FBTagAnyoneSearchProvider : NSObject {

	NSString* _actorOverrideFBID;
	NSString* _searchContext;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 actorOverrideFBID:(id)arg2 searchContext:(id)arg3 ;
-(FBUserSession *)session;
@end
