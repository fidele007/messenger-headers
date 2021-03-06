/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingCryptoKeychainStoreReading.h>

@protocol MNSecureMessagingCryptoStateUpdateListening, OS_dispatch_queue;
@class FBKeychainItemController, FBUserSession, NSUserDefaults, NSObject, NSString;

@interface MNSecureMessagingCryptoKeychainStore : NSObject <MNSecureMessagingCryptoKeychainStoreReading> {

	FBKeychainItemController* _keychainController;
	FBUserSession* _session;
	NSUserDefaults* _userDefaults;
	id<MNSecureMessagingCryptoStateUpdateListening> _updateListener;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeychainController:(id)arg1 session:(id)arg2 userDefaults:(id)arg3 updateListener:(id)arg4 queue:(id)arg5 ;
-(id)_readFromKeychainSafe;
-(id)_executeReadFromKeychain;
-(id)initWithSession:(id)arg1 userDefaults:(id)arg2 updateListener:(id)arg3 queue:(id)arg4 ;
-(id)loadKeychainCryptoState;
-(id)saveState:(id)arg1 ;
@end

