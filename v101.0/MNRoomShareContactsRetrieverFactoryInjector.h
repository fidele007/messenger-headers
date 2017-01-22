/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, MNTopContactsRetriever, MNUserStore, FBUserSession, FBMobileConfigContextManager, MNRoomShareWhitelistContactsRetrieverFactory, NSString;

@interface MNRoomShareContactsRetrieverFactoryInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNTopContactsRetriever* _topContactsRetriever;
	MNUserStore* _userStore;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNRoomShareWhitelistContactsRetrieverFactory* _whitelistContactsRetrieverFactory;

}

@property (nonatomic,readonly) MNTopContactsRetriever * topContactsRetriever;                                                 //@synthesize topContactsRetriever=_topContactsRetriever - In the implementation block
@property (nonatomic,readonly) MNUserStore * userStore;                                                                       //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                                  //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNRoomShareWhitelistContactsRetrieverFactory * whitelistContactsRetrieverFactory;              //@synthesize whitelistContactsRetrieverFactory=_whitelistContactsRetrieverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNUserStore *)userStore;
-(MNTopContactsRetriever *)topContactsRetriever;
-(MNRoomShareWhitelistContactsRetrieverFactory *)whitelistContactsRetrieverFactory;
-(FBUserSession *)session;
@end
