/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>

@interface RCTStatusBarManager : RCTEventEmitter
+(id)__rct_export__990;
+(id)__rct_export__1071;
+(id)__rct_export__1192;
+(id)__rct_export__1303;
+(id)moduleName;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)applicationWillChangeStatusBarFrame:(id)arg1 ;
-(void)emitEvent:(id)arg1 forNotification:(id)arg2 ;
-(void)getHeight:(/*^block*/id)arg1 ;
-(void)setHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end

