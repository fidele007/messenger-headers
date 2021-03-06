/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLocationAuthorizationListener.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBUserSession, FBLocationManager, FBFNSettingsData, FBMemPrivacyOptionsLocationConnection, FBFNSettingsRequest, NSString;

@interface FBFNSettingsDataController : NSObject <FBLocationAuthorizationListener, NSCopying> {

	FBUserSession* _session;
	FBLocationManager* _locationManager;
	int _state;
	FBFNSettingsData* _settingsData;
	FBMemPrivacyOptionsLocationConnection* _privacyLocationOptions;
	FBFNSettingsRequest* _settingsRequest;

}

@property (nonatomic,retain) FBFNSettingsRequest * settingsRequest;                                       //@synthesize settingsRequest=_settingsRequest - In the implementation block
@property (assign,nonatomic) int state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBFNSettingsData * settingsData;                                             //@synthesize settingsData=_settingsData - In the implementation block
@property (nonatomic,retain) FBMemPrivacyOptionsLocationConnection * privacyLocationOptions;              //@synthesize privacyLocationOptions=_privacyLocationOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationAuthorizationDidChange:(int)arg1 ;
-(void)_setupAuthorizationStateManagement;
-(void)setSettingsData:(FBFNSettingsData *)arg1 ;
-(void)setSettingsRequest:(FBFNSettingsRequest *)arg1 ;
-(void)_loadSettingsDataWithLocationSharing:(id)arg1 privacySetting:(id)arg2 privacyConnection:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setPrivacyLocationOptions:(FBMemPrivacyOptionsLocationConnection *)arg1 ;
-(void)setLocationHistoryEnabled:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_notifySettingsChanged;
-(void)setSettingsTrackingEnabled:(BOOL)arg1 sharingEnabled:(BOOL)arg2 ;
-(FBFNSettingsRequest *)settingsRequest;
-(FBFNSettingsData *)settingsData;
-(void)loadSettingsData:(/*^block*/id)arg1 ;
-(void)setLocationTracking:(BOOL)arg1 onDone:(/*^block*/id)arg2 ;
-(void)setNotificationSettingEnabled:(BOOL)arg1 onDone:(/*^block*/id)arg2 ;
-(void)setSettingsSelectedPrivacyOption:(id)arg1 ;
-(FBMemPrivacyOptionsLocationConnection *)privacyLocationOptions;
-(void)setLocationTracking:(BOOL)arg1 privacySettings:(id)arg2 onDone:(/*^block*/id)arg3 ;
-(void)updateNUXStatus:(unsigned long long)arg1 privacySettings:(id)arg2 nuxType:(unsigned long long)arg3 onDone:(/*^block*/id)arg4 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

