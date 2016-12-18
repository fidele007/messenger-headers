/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class NSUserDefaults, NSString;

@interface MNAccountSettings : NSObject <FBViewerContextClassProvidable> {

	NSUserDefaults* _userDefaults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setLastLoggedInTime:(id)arg1 forAccountWithFBID:(id)arg2 ;
-(void)deleteSettingsForAccountWithFBID:(id)arg1 ;
-(id)_objectWithKey:(id)arg1 forAccountWithFBID:(id)arg2 ;
-(void)_setObject:(id)arg1 withKey:(id)arg2 forAccountWithFBID:(id)arg3 ;
-(BOOL)_didSetObjectWithKey:(id)arg1 forAccountWithFBID:(id)arg2 ;
-(void)_removeAccountSettingsDictionaryForAccountWithFBID:(id)arg1 ;
-(id)_accountSettingsDictionaryForAccountWithFBID:(id)arg1 ;
-(void)_setAccountSettingsDictionary:(id)arg1 forAccountWithFBID:(id)arg2 ;
-(id)_accountSettingsDictionary;
-(void)_setAccountSettingsDictionary:(id)arg1 ;
-(id)lastNotificationTimeForAccountWithFBID:(id)arg1 ;
-(void)setLastNotificationTime:(id)arg1 forAccountWithFBID:(id)arg2 ;
-(id)lastLoggedInTimeForAccountWithFBID:(id)arg1 ;
-(unsigned long long)shouldUsePasswordlessLoginForAccountWithFBID:(id)arg1 ;
-(void)setShouldUsePasswordlessLogin:(BOOL)arg1 forAccountWithFBID:(id)arg2 ;
-(id)initWithUserDefaults:(id)arg1 ;
@end
