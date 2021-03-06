/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/RCTBridgeDelegate.h>
#import <Messenger/RCTExceptionsManagerDelegate.h>

@class FBLazyCreator, MNReactModuleInjector, NSString, RCTBridge;

@interface MNReactModule : NSObject <FBClassInjectable, RCTBridgeDelegate, RCTExceptionsManagerDelegate> {

	FBLazyCreator* _bridgeCreator;
	MNReactModuleInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RCTBridge * reactBridge; 
+(Class)injectorClass;
-(RCTBridge *)reactBridge;
-(id)sourceURLForBridge:(id)arg1 ;
-(id)extraModulesForBridge:(id)arg1 ;
-(id)miniAppsReactModule;
-(void)handleFatalError:(id)arg1 ;
-(void)bridgeDidInitializeModule:(id)arg1 ;
-(void)_invalidateBridge;
-(void)handleSoftJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)handleFatalJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(id)initWithInjector:(id)arg1 ;
-(void)dealloc;
@end

