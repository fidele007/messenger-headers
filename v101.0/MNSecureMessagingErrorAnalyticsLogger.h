/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalytics;

@interface MNSecureMessagingErrorAnalyticsLogger : NSObject {

	FBAnalytics* _analytics;

}
-(id)initWithAnalytics:(id)arg1 ;
-(void)logCryptoError:(id)arg1 forThread:(id)arg2 pacektType:(int)arg3 entryPoint:(long long)arg4 ;
-(void)logErrorAdminMessagesForMessage:(id)arg1 source:(long long)arg2 ;
@end

