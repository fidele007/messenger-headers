/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNAppEvent : NSObject <NSCopying> {

	unsigned long long _subtype;
	long long _main_timeInterval;
	long long _didFinishLaunching_timeInterval;
	long long _didBecomeActive_timeInterval;
	long long _willEnterForeground_timeInterval;
	long long _didEnterBackground_timeInterval;
	long long _willResignActive_timeInterval;
	long long _configSetupBegin_timeInterval;
	long long _configSetupEnd_timeInterval;
	long long _backgroundServicesBegin_timeInterval;
	long long _backgroundServicesEnd_timeInterval;
	long long _foregroundServicesBegin_timeInterval;
	long long _foregroundServicesEnd_timeInterval;
	long long _userSetupFlowBegin_timeInterval;
	long long _userSetupFlowEnd_timeInterval;
	long long _restoreStateBegin_timeInterval;
	long long _restoreStateEnd_timeInterval;
	long long _mQTTConnecting_timeInterval;
	long long _mQTTConnected_timeInterval;
	long long _mQTTDisconnected_timeInterval;
	long long _deltaRequest_timeInterval;
	BOOL _deltaRequest_succeeded;
	long long _queueCreation_timeInterval;
	BOOL _queueCreation_succeeded;
	long long _firstViewControllerPresented_timeInterval;
	Class _firstViewControllerPresented_viewControllerClass;
	long long _navigation_timeInterval;
	Class _navigation_fromClass;
	Class _navigation_toClass;
	long long _navigationTriggeredByPushHandler_timeInterval;
	long long _threadListDisplayed_timeInterval;
	long long _threadListLoaded_timeInterval;
	BOOL _threadListLoaded_succeeded;

}
+(id)mainWithTimeInterval:(long long)arg1 ;
+(id)didFinishLaunchingWithTimeInterval:(long long)arg1 ;
+(id)foregroundServicesBeginWithTimeInterval:(long long)arg1 ;
+(id)foregroundServicesEndWithTimeInterval:(long long)arg1 ;
+(id)backgroundServicesBeginWithTimeInterval:(long long)arg1 ;
+(id)backgroundServicesEndWithTimeInterval:(long long)arg1 ;
+(id)configSetupBeginWithTimeInterval:(long long)arg1 ;
+(id)configSetupEndWithTimeInterval:(long long)arg1 ;
+(id)restoreStateBeginWithTimeInterval:(long long)arg1 ;
+(id)restoreStateEndWithTimeInterval:(long long)arg1 ;
+(id)willEnterForegroundWithTimeInterval:(long long)arg1 ;
+(id)willResignActiveWithTimeInterval:(long long)arg1 ;
+(id)didEnterBackgroundWithTimeInterval:(long long)arg1 ;
+(id)didBecomeActiveWithTimeInterval:(long long)arg1 ;
+(id)navigationTriggeredByPushHandlerWithTimeInterval:(long long)arg1 ;
+(id)userSetupFlowBeginWithTimeInterval:(long long)arg1 ;
+(id)userSetupFlowEndWithTimeInterval:(long long)arg1 ;
+(id)threadListDisplayedWithTimeInterval:(long long)arg1 ;
+(id)threadListLoadedWithTimeInterval:(long long)arg1 succeeded:(BOOL)arg2 ;
+(id)navigationWithTimeInterval:(long long)arg1 fromClass:(Class)arg2 toClass:(Class)arg3 ;
+(id)firstViewControllerPresentedWithTimeInterval:(long long)arg1 viewControllerClass:(Class)arg2 ;
+(id)deltaRequestWithTimeInterval:(long long)arg1 succeeded:(BOOL)arg2 ;
+(id)queueCreationWithTimeInterval:(long long)arg1 succeeded:(BOOL)arg2 ;
+(id)mQTTConnectingWithTimeInterval:(long long)arg1 ;
+(id)mQTTConnectedWithTimeInterval:(long long)arg1 ;
+(id)mQTTDisconnectedWithTimeInterval:(long long)arg1 ;
-(void)matchMain:(/*^block*/id)arg1 didFinishLaunching:(/*^block*/id)arg2 didBecomeActive:(/*^block*/id)arg3 willEnterForeground:(/*^block*/id)arg4 didEnterBackground:(/*^block*/id)arg5 willResignActive:(/*^block*/id)arg6 configSetupBegin:(/*^block*/id)arg7 configSetupEnd:(/*^block*/id)arg8 backgroundServicesBegin:(/*^block*/id)arg9 backgroundServicesEnd:(/*^block*/id)arg10 foregroundServicesBegin:(/*^block*/id)arg11 foregroundServicesEnd:(/*^block*/id)arg12 userSetupFlowBegin:(/*^block*/id)arg13 userSetupFlowEnd:(/*^block*/id)arg14 restoreStateBegin:(/*^block*/id)arg15 restoreStateEnd:(/*^block*/id)arg16 mQTTConnecting:(/*^block*/id)arg17 mQTTConnected:(/*^block*/id)arg18 mQTTDisconnected:(/*^block*/id)arg19 deltaRequest:(/*^block*/id)arg20 queueCreation:(/*^block*/id)arg21 firstViewControllerPresented:(/*^block*/id)arg22 navigation:(/*^block*/id)arg23 navigationTriggeredByPushHandler:(/*^block*/id)arg24 threadListDisplayed:(/*^block*/id)arg25 threadListLoaded:(/*^block*/id)arg26 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

