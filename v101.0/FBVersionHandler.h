/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBAppDefaults;

@interface FBVersionHandler : NSObject {

	/*^block*/id _versionProvider;
	NSString* _lastVersion;
	NSString* _key;
	FBAppDefaults* _appDefaults;

}
-(id)lastSavedVersion;
-(void)saveVersion;
-(id)initWithKey:(id)arg1 versionProvider:(/*^block*/id)arg2 appDefaults:(id)arg3 ;
-(BOOL)versionChanged;
-(id)init;
@end

