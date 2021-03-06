/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBAppService.h>

@class FBMotionActivityManager, NSNotificationCenter, NSString;

@interface FBMotionActivityKitDebugger : NSObject <FBAppService> {

	FBMotionActivityManager* _manager;
	NSNotificationCenter* _nsCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_appEnterForeground;
-(void)_appEnterBackground;
-(void)startAppService;
-(void)stopAppService;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end

