/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBComposerPrivacySetting, NSArray;

@interface FBPrivacySettingComposingSet : FBValueObject <NSCopying, NSCoding> {

	FBComposerPrivacySetting* _selectedPrivacySetting;
	NSArray* _availablePrivacySettings;

}

@property (nonatomic,copy,readonly) FBComposerPrivacySetting * selectedPrivacySetting;              //@synthesize selectedPrivacySetting=_selectedPrivacySetting - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availablePrivacySettings;                             //@synthesize availablePrivacySettings=_availablePrivacySettings - In the implementation block
-(id)initWithSelectedPrivacySetting:(id)arg1 availablePrivacySettings:(id)arg2 ;
-(FBComposerPrivacySetting *)selectedPrivacySetting;
-(NSArray *)availablePrivacySettings;
@end

