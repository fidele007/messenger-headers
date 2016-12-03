/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBMobileConfigContextManager, MNOmnistoreUserPrefsStore, NSString;

@interface MNVideoPlaybackConfigurationInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBMobileConfigContextManager* _configManager;
	MNOmnistoreUserPrefsStore* _userPrefsStore;

}

@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;              //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNOmnistoreUserPrefsStore * userPrefsStore;                //@synthesize userPrefsStore=_userPrefsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNOmnistoreUserPrefsStore *)userPrefsStore;
@end

