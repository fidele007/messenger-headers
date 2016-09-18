/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBDeviceBasedLoginAccountStore, MNAccountSettings, NSString;

@interface MNAccountStore : NSObject <FBViewerContextClassProvidable> {

	FBDeviceBasedLoginAccountStore* _deviceBasedLoginAccountStore;
	MNAccountSettings* _accountSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)removeAccount:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithDeviceBasedLoginAccountStore:(id)arg1 accountSettings:(id)arg2 ;
-(void)addPasswordAccount:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_addAccountWithResponse:(id)arg1 accountFBID:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)fetchAccountCredentialForAccountWithFBID:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)addPasswordlessAccount:(id)arg1 accessToken:(id)arg2 machineID:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)fetchAccountsWithCompletionBlock:(/*^block*/id)arg1 ;
@end
