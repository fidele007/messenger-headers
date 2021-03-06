/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBKeychainStore;

@interface FBSessionTokenCachingStrategy : NSObject {

	NSString* _accessTokenInformationKeyName;
	FBKeychainStore* _keychainStore;

}
+(id)nullCacheInstance;
+(BOOL)isValidTokenInformation:(id)arg1 ;
+(id)defaultInstance;
-(void)clearToken;
-(id)fetchFBAccessTokenData;
-(void)cacheFBAccessTokenData:(id)arg1 ;
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(id)initWithUserDefaultTokenInformationKeyName:(id)arg1 ;
-(id)userDefaultsKeyForKeychainValidation;
-(id)keychainStore;
-(void)overrideKeyChainStoreForTests:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

