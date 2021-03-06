/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlatformAppListDataSourceDelegate.h>

@protocol MNPlatformAppListDataSource, MNPlatformAppListDataSourceDelegate;
@class FBUserSession, MNPlatformAppInstallationChecker, MNPlatformAppFetchingConfiguration, MNPlatformAppListServiceListenerAnnouncer, FBOmnistore, NSNumber, NSArray, NSString;

@interface MNPlatformAppListService : NSObject <MNPlatformAppListDataSourceDelegate> {

	FBUserSession* _session;
	MNPlatformAppInstallationChecker* _installationChecker;
	MNPlatformAppFetchingConfiguration* _configuration;
	MNPlatformAppListServiceListenerAnnouncer* _announcer;
	id<MNPlatformAppListDataSource> _dataSource;
	id<MNPlatformAppListDataSourceDelegate> _delegateSelf;
	FBOmnistore* _omnistore;
	NSNumber* _shouldUseOmnistore;
	NSArray* _appItems;

}

@property (nonatomic,copy) NSArray * appItems;                      //@synthesize appItems=_appItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchPlatformAppListIfNeeded;
-(id)platformApps;
-(id)initWithSession:(id)arg1 installationChecker:(id)arg2 omnistore:(id)arg3 configuration:(id)arg4 ;
-(void)setAppItems:(NSArray *)arg1 ;
-(NSArray *)appItems;
-(void)platformAppListDataSource:(id)arg1 didUpdateAppItems:(id)arg2 hasChanged:(BOOL)arg3 ;
-(void)platformAppListDataSource:(id)arg1 didFailToUpdateWithError:(id)arg2 ;
-(void)_startUpdating;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

