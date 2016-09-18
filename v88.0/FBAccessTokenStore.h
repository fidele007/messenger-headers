/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAccessTokenManaging.h>
#import <Messenger/FBInvalidating.h>

@class NSMutableDictionary, FBKeychainItemController, NSString;

@interface FBAccessTokenStore : NSObject <FBAccessTokenManaging, FBInvalidating> {

	NSMutableDictionary* _cachedAccessTokens;
	FBKeychainItemController* _sessionKeychain;
	BOOL _invalidated;

}

@property (nonatomic,readonly) NSMutableDictionary * accessTokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)accessTokenForFBID:(id)arg1 ;
-(void)addViewerAccessTokens:(id)arg1 ;
-(BOOL)updateAccessToken:(id)arg1 forFBID:(id)arg2 ;
-(NSMutableDictionary *)accessTokens;
-(void)_persistAccessTokens;
-(id)initWithSessionKeychain:(id)arg1 ;
-(void)setCachedAccessTokens:(id)arg1 ;
-(id)cachedAccessTokens;
-(void)invalidate;
-(BOOL)isValid;
@end
