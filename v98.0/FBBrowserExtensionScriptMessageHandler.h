/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScriptMessageHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBDictionaryRegistry, FBUserSession, FBMemPlatformInstantExperienceFeatureEnabledList, NSString;

@interface FBBrowserExtensionScriptMessageHandler : NSObject <FBScriptMessageHandling> {

	FBDictionaryRegistry* _scriptMessageHandlerRegistry;
	FBUserSession* _session;
	/*^block*/id _delegateBlock;
	FBMemPlatformInstantExperienceFeatureEnabledList* _featureEnabledList;
	id<FBBrowserExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unregisterSupportedMessagesForSession:(id)arg1 ;
+(id)supportedMessageNames;
-(id)initWithSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 featureEnabledList:(id)arg3 ;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(void)_registerAllExtensions;
-(void)_registerBrowserExtension:(id)arg1 messageNames:(id)arg2 registry:(id)arg3 ;
@end

