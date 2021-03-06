/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RKAnalyticsFunnelLogger : NSObject <RCTBridgeModule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)__rct_export__190;
+(id)__rct_export__311;
+(id)__rct_export__462;
+(id)__rct_export__603;
+(id)moduleName;
+(void)load;
-(void)startFunnel:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)startFunnel_DEV_MODE:(id)arg1 instanceID:(unsigned long long)arg2 ;
-(void)addActionToFunnel:(id)arg1 instanceID:(unsigned long long)arg2 actionName:(id)arg3 tag:(id)arg4 ;
-(void)endFunnel:(id)arg1 instanceID:(unsigned long long)arg2 ;
@end

