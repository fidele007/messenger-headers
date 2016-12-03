/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCachedCredentialsPersister, FBCachedCredentialsFetcher;

@interface FBAccessTokenShareManager : NSObject {

	FBCachedCredentialsPersister* _defaultCredentialsPersister;
	FBCachedCredentialsPersister* _appGroupCredentialsPersister;
	FBCachedCredentialsFetcher* _credentialsFetcher;

}
+(id)appGroupCredentialsPersisterWithAvailability:(unsigned long long)arg1 backupPolicy:(unsigned long long)arg2 ;
-(id)initWithDefaultCredentialsPersister:(id)arg1 credentialsFetcher:(id)arg2 appGroupCredentialsPersister:(id)arg3 ;
-(void)updateCredentials:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ensureAvailability;
-(void)clearCredentials;
-(void)syncTokenFromDefaultKeychain;
-(void)clearCachedAppGroupCredentials;
@end
