/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMQTTSending.h>

@protocol OS_dispatch_queue;
@class FBMQTTClientManager, FBDelayer, NSObject, NSString;

@interface MNMQTTSender : NSObject <FBViewerContextClassProvidable, MNMQTTSending> {

	FBMQTTClientManager* _clientManager;
	FBDelayer* _configurationDelayer;
	NSObject*<OS_dispatch_queue> _delayerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)sendJSONMessage:(id)arg1 ;
-(void)sendEncodedMessage:(id)arg1 ;
-(void)addPublisher:(id)arg1 ;
-(void)configureWithClientManager:(id)arg1 ;
-(id)initWithDelayQueue:(id)arg1 ;
-(void)_addPublisher:(id)arg1 ;
-(id)init;
@end

