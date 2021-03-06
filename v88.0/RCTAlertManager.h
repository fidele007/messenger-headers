/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/RCTBridgeModule.h>
#import <Messenger/RCTInvalidating.h>

@class NSMutableArray, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <UIAlertViewDelegate, RCTBridgeModule, RCTInvalidating> {

	NSMutableArray* _alerts;
	NSMutableArray* _alertControllers;
	NSMutableArray* _alertCallbacks;
	NSMutableArray* _alertButtonKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__720;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)alertWithArgs:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

