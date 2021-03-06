/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLSubscriptionHandle.h>

@protocol FBMQTTInterface;
@class FBMQTTListener;

@interface FBGraphQLMQTTSubscriptionHandle : NSObject <FBGraphQLSubscriptionHandle> {

	FBMQTTListener* _listener;
	id<FBMQTTInterface> _mqttInterface;

}
+(id)mqttPatternForQuery:(id)arg1 pageID:(id)arg2 ;
+(id)mqttMultipleSubscriptionPatternForQuery:(id)arg1 pageID:(id)arg2 ;
+(id)mqttPatternForQueryID:(id)arg1 params:(id)arg2 pageID:(id)arg3 ;
+(id)subscribedHandleForQuery:(id)arg1 session:(id)arg2 viewerContext:(id)arg3 payloadPersistBlock:(/*^block*/id)arg4 ;
+(id)multiSubscriptionMap;
+(void)initialize;
-(id)initWithListener:(id)arg1 mqttInterface:(id)arg2 ;
-(void)dealloc;
-(id)handleType;
-(void)unsubscribe;
@end

