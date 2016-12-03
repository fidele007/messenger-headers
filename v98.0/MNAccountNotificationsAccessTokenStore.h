/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class NSUserDefaults, NSString;

@interface MNAccountNotificationsAccessTokenStore : NSObject <FBViewerContextClassProvidable> {

	NSUserDefaults* _userDefaults;
	NSString* _loggedInAccountFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)deleteNotificationsAccessTokenForAccountWithFBID:(id)arg1 ;
-(id)savedSwitchedAccountNotificationsAccessTokenMap;
-(id)initWithUserDefaults:(id)arg1 loggedInAccountFBID:(id)arg2 ;
-(id)_notificationsAccessTokenMap;
-(void)_setNotificationsAccessTokenMap:(id)arg1 ;
-(void)saveNotificationsAccessToken:(id)arg1 forAccountWithFBID:(id)arg2 ;
@end

