/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBContactImporter.h>

@protocol FBContactImporter;
@class FBMobileConfigContextManager, MNUserSettings, NSString;

@interface MNContactImportBlocker : NSObject <FBContactImporter> {

	id<FBContactImporter> _contactImporter;
	FBMobileConfigContextManager* _configManager;
	MNUserSettings* _userSettings;

}

@property (nonatomic,retain) id<FBContactImporter> contactImporter;                     //@synthesize contactImporter=_contactImporter - In the implementation block
@property (nonatomic,retain) FBMobileConfigContextManager * configManager;              //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                             //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMobileConfigContextManager *)configManager;
-(void)allowContactImporting;
-(void)disallowContactImporting;
-(id)initWithContactImporter:(id)arg1 userSettings:(id)arg2 configManager:(id)arg3 ;
-(void)setContactImporter:(id<FBContactImporter>)arg1 ;
-(void)setConfigManager:(FBMobileConfigContextManager *)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(id<FBContactImporter>)contactImporter;
-(MNUserSettings *)userSettings;
@end

