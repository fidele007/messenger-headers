/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEncryptedChannelManagerSecurePersisting, FBEncryptedChannelManagerSecureChannelRequesting, FBEncryptedChannelManagerApplicationStateMonitoring, FBEncryptedChannelManagerSecureBucketIDGenerating;
#import <Messenger/Messenger-Structs.h>
@class FBEncryptedChannel;

@interface FBEncryptedChannelManager : NSObject {

	unsigned long long _backgroundTask;
	mutex _channelMutex;
	FBEncryptedChannel* _channel;
	id<FBEncryptedChannelManagerSecurePersisting> _securePersistentStore;
	id<FBEncryptedChannelManagerSecureChannelRequesting> _secureChannelRequester;
	id<FBEncryptedChannelManagerApplicationStateMonitoring> _applicationStateMonitor;
	id<FBEncryptedChannelManagerSecureBucketIDGenerating> _bucketIDGenerator;

}
-(void)_requestChannel;
-(void)_persistChannel;
-(id)checkoutChannel;
-(id)initWithSecurePersistentStore:(id)arg1 secureChannelRequester:(id)arg2 applicationStateMonitor:(id)arg3 bucketIDGenerator:(id)arg4 ;
-(id)checkoutChannelForUserAgent:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_endBackgroundTask;
@end
