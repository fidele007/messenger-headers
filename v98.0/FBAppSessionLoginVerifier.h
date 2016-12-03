/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAPISessionStore;

@interface FBAppSessionLoginVerifier : NSObject {

	FBAPISessionStore* _apiSessionStore;
	id _observer;

}
-(id)initWithAPISessionStore:(id)arg1 ;
-(unsigned long long)tryLoginVerification;
-(void)ensureLoginVerification:(/*^block*/id)arg1 ;
-(BOOL)_ensureKeychainUnlocked;
-(BOOL)_tryKeychainUnlock;
-(void)dealloc;
-(void)_willEnterForeground:(/*^block*/id)arg1 ;
@end
