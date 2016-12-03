/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBKeychainItemController, NSObject, FBAnalytics;

@interface FBLoggedInUserCryptoKeyStore : NSObject {

	FBKeychainItemController* _keychainController;
	NSObject*<OS_dispatch_queue> _keychainTargetQueue;
	FBAnalytics* _analytics;

}
-(void)updateLoggedInUser:(id)arg1 withStorageServerKey:(id)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)loadEncryptionKeyForLoggedInUser:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)clearStorageServerKey;
-(void)_loadEncryptionKeyFromKeychainItem:(id)arg1 forLoggedInUser:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_computeTemporaryBackupKeyForItem:(id)arg1 withUser:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)initWithAnalytics:(id)arg1 keychainController:(id)arg2 keychainQueue:(id)arg3 ;
@end
