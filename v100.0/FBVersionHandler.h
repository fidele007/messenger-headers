/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

