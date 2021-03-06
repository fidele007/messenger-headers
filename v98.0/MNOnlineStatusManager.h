/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNOnlineStatusListenerAnnouncer, MNUserSettings, MNOnlineStatusMQTTSender, FBUserSession, NSString;

@interface MNOnlineStatusManager : NSObject <FBViewerContextClassProvidable> {

	MNOnlineStatusListenerAnnouncer* _announcer;
	BOOL _online;
	BOOL _started;
	MNUserSettings* _userSettings;
	MNOnlineStatusMQTTSender* _onlineStatusSender;
	FBUserSession* _session;
	id _mqttConnectedChangedObserver;

}

@property (nonatomic,retain) MNUserSettings * userSettings;                              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) MNOnlineStatusMQTTSender * onlineStatusSender;              //@synthesize onlineStatusSender=_onlineStatusSender - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id mqttConnectedChangedObserver;                            //@synthesize mqttConnectedChangedObserver=_mqttConnectedChangedObserver - In the implementation block
@property (assign,nonatomic) BOOL started;                                               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) BOOL online;                                              //@synthesize online=_online - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(BOOL)getOnline;
-(void)setOnline:(BOOL)arg1 userOverride:(BOOL)arg2 ;
-(void)startOnlineStatusManager;
-(void)stopOnlineStatusManager;
-(MNOnlineStatusMQTTSender *)onlineStatusSender;
-(void)setOnlineStatusSender:(MNOnlineStatusMQTTSender *)arg1 ;
-(id)initWithUserSettings:(id)arg1 onlineStatusSender:(id)arg2 session:(id)arg3 ;
-(void)setMqttConnectedChangedObserver:(id)arg1 ;
-(BOOL)online;
-(id)mqttConnectedChangedObserver;
-(void)dealloc;
-(FBUserSession *)session;
-(void)removeListener:(id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)addListener:(id)arg1 ;
-(MNUserSettings *)userSettings;
-(BOOL)started;
@end

