/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(NSArray *)availablePrivacySettings;
-(FBComposerPrivacySetting *)selectedPrivacySetting;
-(id)initWithSelectedPrivacySetting:(id)arg1 availablePrivacySettings:(id)arg2 ;
@end

