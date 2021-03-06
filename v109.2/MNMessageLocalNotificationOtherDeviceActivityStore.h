/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MNMessageLocalNotificationOtherDeviceActivityStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _lastWebSelfSendTime;
	unsigned long long _lastNonWebActivityTime;

}

@property (assign,nonatomic) unsigned long long lastWebSelfSendTime; 
@property (assign,nonatomic) unsigned long long lastNonWebActivityTime; 
-(void)_clearAllActivity;
-(void)setLastWebSelfSendTime:(unsigned long long)arg1 ;
-(unsigned long long)lastWebSelfSendTime;
-(void)setLastNonWebActivityTime:(unsigned long long)arg1 ;
-(unsigned long long)lastNonWebActivityTime;
-(void)clearAllActivity;
-(id)initWithQueue:(id)arg1 ;
@end

