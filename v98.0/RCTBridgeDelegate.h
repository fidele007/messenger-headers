/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCTBridgeDelegate <NSObject>
@optional
-(id)fallbackSourceURLForBridge:(id)arg1;
-(id)extraModulesForBridge:(id)arg1;
-(id)whitelistedModulesForBridge:(id)arg1;
-(BOOL)shouldBridgeInitializeNativeModulesSynchronously:(id)arg1;
-(void)loadSourceForBridge:(id)arg1 onProgress:(/*^block*/id)arg2 onComplete:(/*^block*/id)arg3;
-(void)loadSourceForBridge:(id)arg1 withBlock:(/*^block*/id)arg2;
-(BOOL)shouldBridgeLoadJavaScriptSynchronously:(id)arg1;

@required
-(id)sourceURLForBridge:(id)arg1;

@end

