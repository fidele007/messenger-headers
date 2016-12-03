/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingCryptoStateLoaderListening.h>

@class FBAnalytics, NSString;

@interface MNSecureMessagingCryptoKeychainStorageAnalyticsLogger : NSObject <MNSecureMessagingCryptoStateLoaderListening> {

	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalytics:(id)arg1 ;
-(void)didFailToLoadRegisteredCryptoStateWithReason:(long long)arg1 existingCryptoState:(id)arg2 shouldRegisterNow:(BOOL)arg3 ;
-(void)didLoadRegisteredDeviceInfo:(id)arg1 ;
-(void)didLoadAllCryptoState:(id)arg1 ;
-(void)didUnloadCryptoState;
-(void)didDeleteMessagingStoreWithReason:(long long)arg1 error:(id)arg2 ;
@end
