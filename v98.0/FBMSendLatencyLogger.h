/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMSPPayloadListening.h>

@protocol MNThreadMessageCaching, OS_dispatch_queue, FBClock;
@class NSMutableDictionary, FBDiskCache, FBAnalytics, FBMMQTTManager, NSObject, NSNotificationCenter, UIApplication, NSString;

@interface FBMSendLatencyLogger : NSObject <FBMSPPayloadListening> {

	NSMutableDictionary* _offlineThreadingIdToPendingSendLatency;
	NSMutableDictionary* _messageIdToDRRecievedTime;
	id<MNThreadMessageCaching> _threadMessageCache;
	FBDiskCache* _diskCache;
	FBAnalytics* _analytics;
	FBMMQTTManager* _mqttManager;
	unsigned char _enableLogging;
	NSObject*<OS_dispatch_queue> _queue;
	id _appBackgroundNotificationHandler;
	NSNotificationCenter* _notificationCenter;
	UIApplication* _application;
	BOOL _suspendFlushing;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDiskCache:(id)arg1 analytics:(id)arg2 threadMessageCache:(id)arg3 notificationCenter:(id)arg4 internalQueue:(id)arg5 application:(id)arg6 mqttManager:(id)arg7 enableLogging:(unsigned char)arg8 clock:(id)arg9 ;
-(void)_uploadEventsIfNeeded;
-(void)_registerBackgroundNotificationIfNeeded;
-(void)_uploadCompletedEvents:(BOOL)arg1 ;
-(void)_discardAllLogs;
-(void)willHandleDeliveryReceiptsOfMessageIds:(id)arg1 receiveTime:(double)arg2 ;
-(id)initWithDiskCache:(id)arg1 analytics:(id)arg2 threadMessageCache:(id)arg3 notificationCenter:(id)arg4 application:(id)arg5 mqttManager:(id)arg6 enableLogging:(unsigned char)arg7 ;
-(void)recoverEventsFromCache;
-(void)logMessageSendLatency:(id)arg1 ;
-(void)attachMessageDeliveryReceiptHandledTime:(double)arg1 forMessageIds:(id)arg2 onThreadKey:(id)arg3 ;
-(void)dealloc;
@end
