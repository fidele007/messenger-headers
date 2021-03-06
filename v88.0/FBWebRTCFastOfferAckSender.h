/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMMQTTSender, FBUserSession, NSString;

@interface FBWebRTCFastOfferAckSender : NSObject <FBViewerContextClassProvidable> {

	FBMMQTTSender* _mqttSender;
	FBUserSession* _userSession;
	long long _userId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMqttSender:(id)arg1 userSession:(id)arg2 ;
-(long long)_getUserId;
-(void)_sendOfferAck:(id)arg1 ;
-(void)sendFastPathOfferAck:(id)arg1 noThriftHeader:(unsigned char)arg2 ;
@end

