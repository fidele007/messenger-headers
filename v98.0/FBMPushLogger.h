/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNMessageIdNormalizing;
@class FBAnalytics, FBReachabilityAnnouncer, NSString;

@interface FBMPushLogger : NSObject <FBViewerContextClassProvidable> {

	id<MNMessageIdNormalizing> _messageIdNormalizer;
	FBAnalytics* _analytics;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)logInAppPushNotificationForMessageWithThreadKey:(id)arg1 pushSource:(unsigned long long)arg2 messageId:(id)arg3 offlineThreadingId:(id)arg4 ;
-(void)logPushMessageWithThreadKey:(id)arg1 pushSource:(unsigned long long)arg2 messageId:(id)arg3 offlineThreadingId:(id)arg4 actionIdentifier:(id)arg5 status:(id)arg6 ;
-(void)logAPNSReceivedUserNotLoggedIn:(id)arg1 ;
-(void)logLocalNotificationReceivedUserNotLoggedIn:(id)arg1 ;
-(void)logStitchedMessageWithThreadKey:(id)arg1 pushSource:(unsigned long long)arg2 messageId:(id)arg3 offlineThreadingId:(id)arg4 launchedByUser:(BOOL)arg5 isFirstPushForMessage:(BOOL)arg6 isFromSelf:(BOOL)arg7 ;
-(void)logPushMessageForDeliveryReliabilityMetricsWithMessageId:(id)arg1 threadKey:(id)arg2 pushSource:(unsigned long long)arg3 ;
-(void)logPushMessageWithWrongRecipientId:(id)arg1 viewerId:(id)arg2 messageId:(id)arg3 threadKey:(id)arg4 pushSource:(unsigned long long)arg5 ;
-(id)initWithMessageIdNormalizer:(id)arg1 analytics:(id)arg2 reachabilityAnnouncer:(id)arg3 ;
-(id)_pushTypeStringFromPushSource:(unsigned long long)arg1 ;
-(void)logFQLAvoided:(BOOL)arg1 reason:(id)arg2 ;
-(void)logFetchEvent:(id)arg1 status:(id)arg2 forObjectId:(id)arg3 ;
@end

