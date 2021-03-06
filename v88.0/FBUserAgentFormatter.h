/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUserAgentFormatting.h>

@class NSString, FBLocaleMap;

@interface FBUserAgentFormatter : NSObject <FBUserAgentFormatting> {

	NSString* _appName;
	FBLocaleMap* _localeMap;
	NSString* _reactBundleVersion;
	NSString* _cachedUserAgent;
	mutex _lock;

}

@property (copy) NSString * reactBundleVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedUserAgent;
-(id)initWithAppName:(id)arg1 localeMap:(id)arg2 ;
-(void)setReactBundleVersion:(NSString *)arg1 ;
-(NSString *)reactBundleVersion;
@end

