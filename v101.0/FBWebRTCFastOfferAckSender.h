/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMMQTTSender, FBUserSession, FBMobileConfigContextManager, NSString;

@interface FBWebRTCFastOfferAckSender : NSObject <FBViewerContextClassProvidable> {

	FBMMQTTSender* _mqttSender;
	FBUserSession* _userSession;
	FBMobileConfigContextManager* _configManager;
	long long _userId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMqttSender:(id)arg1 userSession:(id)arg2 configManager:(id)arg3 ;
-(long long)_getUserId;
-(void)_sendOfferAck:(id)arg1 ;
-(void)sendFastPathOfferAck:(id)arg1 noThriftHeader:(unsigned char)arg2 ;
@end

