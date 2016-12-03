/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesAppearanceEventListener.h>

@protocol MNAuthenticationManager;
@class NSMutableDictionary, FBMMQTTSender, MNOnlineStatusManager, MNThreadPresenceListenerAnnouncer, MNThreadViewModel, NSTimer, NSString;

@interface MNThreadPresenceTracker : NSObject <FBViewerContextClassProvidable, MNMessagesAppearanceEventListener> {

	NSMutableDictionary* _userThreadPresence;
	FBMMQTTSender* _mqttSender;
	MNOnlineStatusManager* _onlineStatusManager;
	MNThreadPresenceListenerAnnouncer* _threadPresenceAnnouncer;
	MNThreadViewModel* _currentThreadModel;
	BOOL _runningInBackground;
	id<MNAuthenticationManager> _authManager;
	NSTimer* _pingTimer;
	unsigned long long _pingScheduledTimeStamp;

}

@property (readonly) MNThreadPresenceListenerAnnouncer * threadPresenceAnnouncer;              //@synthesize threadPresenceAnnouncer=_threadPresenceAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(void)messagesViewDidLoseFocus;
-(void)_didEnterForegroundAndIdle;
-(MNThreadPresenceListenerAnnouncer *)threadPresenceAnnouncer;
-(id)otherUserThreadPresence:(id)arg1 withCapability:(unsigned long long)arg2 ;
-(id)otherUserThreadPresence:(id)arg1 ;
-(void)markThreadPresenceUpdated:(id)arg1 ;
-(void)_didEnterBackground;
-(void)_didMqttConnectionChange:(id)arg1 ;
-(void)_postThreadPresenceIfNeeded:(BOOL)arg1 ;
-(void)_invalidatePingTimer;
-(void)_postThreadPresenceIfNeeded:(BOOL)arg1 sendAsAck:(BOOL)arg2 ;
-(void)_cancelScheduledPing;
-(BOOL)_canPostThreadPresence;
-(void)_schedulePingIfNeeded;
-(int)_supportedCapabilities;
-(id)_ensureThreadPresenceSetForUser:(id)arg1 ;
-(void)cleanupExpiredThreadPresences;
-(id)_otherUserThreadPresence:(id)arg1 filter:(/*^block*/id)arg2 ;
-(void)pingTimerFired:(id)arg1 ;
-(BOOL)isOtherUserPresentInThread:(id)arg1 ;
-(void)dealloc;
@end

