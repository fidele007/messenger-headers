/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MNSettingsSectionBuilder : NSObject {

	NSString* _identifier;
	NSString* _headerText;
	NSString* _footerText;
	NSArray* _settingsItems;
	NSArray* _settingsItemCallbacks;
	NSArray* _linkRanges;

}
+(id)settingsSection;
+(id)settingsSectionFromExistingSettingsSection:(id)arg1 ;
-(id)withSettingsItems:(id)arg1 ;
-(id)withSettingsItemCallbacks:(id)arg1 ;
-(id)withLinkRanges:(id)arg1 ;
-(id)withFooterText:(id)arg1 ;
-(id)withHeaderText:(id)arg1 ;
-(id)withIdentifier:(id)arg1 ;
-(id)build;
@end

