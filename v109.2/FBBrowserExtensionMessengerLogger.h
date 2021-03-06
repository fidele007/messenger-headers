/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBrowserExtensionLoggerProtocol.h>

@class NSString;

@interface FBBrowserExtensionMessengerLogger : NSObject <FBBrowserExtensionLoggerProtocol> {

	NSString* _pageID;
	NSString* _logSource;
	NSString* _adID;
	NSString* _appID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logEvent:(id)arg1 websiteURL:(id)arg2 messageName:(id)arg3 surface:(id)arg4 extra:(id)arg5 ;
-(void)configureLoggerWithPageID:(id)arg1 logSource:(id)arg2 adID:(id)arg3 appID:(id)arg4 ;
@end

