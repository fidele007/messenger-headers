/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBUIConfigBuilder.h>

@class FBGridViewLayout, UIColor, NSString;

@interface FBGridViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	FBGridViewLayout* _layout;
	BOOL _scrollsToTop;
	BOOL _scrollEnabled;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setScrollEnabled:(BOOL)arg1 ;
-(id)_init;
-(id)setScrollsToTop:(BOOL)arg1 ;
-(id)setLayout:(id)arg1 ;
-(id)build;
@end

