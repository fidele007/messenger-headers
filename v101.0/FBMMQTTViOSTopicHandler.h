/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMQTTTopicHandling.h>

@class FBLazyCreator, NSString;

@interface FBMMQTTViOSTopicHandler : NSObject <FBViewerContextClassProvidable, MNMQTTTopicHandling> {

	FBLazyCreator* _apnsPushHandlerCreator;
	FBLazyCreator* _pushRegistrarCreator;
	FBLazyCreator* _configManagerCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)topicListener;
-(id)initWithAPNSPushHandlerCreator:(/*^block*/id)arg1 pushRegistrarCreator:(/*^block*/id)arg2 configManagerCreator:(/*^block*/id)arg3 ;
-(void)_handlePayload:(id)arg1 ;
-(void)endSession;
@end

