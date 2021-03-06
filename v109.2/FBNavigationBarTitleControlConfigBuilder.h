/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBUIConfigBuilder.h>

@class NSString, UIFont, UIColor;

@interface FBNavigationBarTitleControlConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleTextColor;
	long long _titleLineBreakMode;
	NSString* _subtitle;
	UIFont* _subtitleFont;
	UIColor* _subtitleTextColor;
	long long _subtitleLineBreakMode;
	unsigned long long _arrowShading;
	BOOL _hideArrow;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderForStyle:(unsigned long long)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setHideArrow:(BOOL)arg1 ;
-(id)setArrowShading:(unsigned long long)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)setSubtitle:(id)arg1 ;
-(id)setTitleLineBreakMode:(long long)arg1 ;
-(id)setSubtitleLineBreakMode:(long long)arg1 ;
-(id)build;
-(id)setTitleFont:(id)arg1 ;
-(id)setSubtitleFont:(id)arg1 ;
-(id)setTitleTextColor:(id)arg1 ;
-(id)setSubtitleTextColor:(id)arg1 ;
@end

