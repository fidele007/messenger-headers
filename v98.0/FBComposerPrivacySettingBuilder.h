/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPrivacyEntity, NSString;

@interface FBComposerPrivacySettingBuilder : NSObject {

	FBPrivacyEntity* _privacyEntity;
	NSString* _name;
	NSString* _explanation;
	unsigned long long _iconType;
	long long _restrictiveness;

}
+(id)composerPrivacySettingFromExistingComposerPrivacySetting:(id)arg1 ;
+(id)composerPrivacySetting;
-(id)withName:(id)arg1 ;
-(id)withIconType:(unsigned long long)arg1 ;
-(id)withPrivacyEntity:(id)arg1 ;
-(id)withExplanation:(id)arg1 ;
-(id)withRestrictiveness:(long long)arg1 ;
-(id)build;
@end
