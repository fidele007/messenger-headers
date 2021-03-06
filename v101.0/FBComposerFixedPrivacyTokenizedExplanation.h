/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPrivacySetting, NSArray, NSString;

@interface FBComposerFixedPrivacyTokenizedExplanation : FBValueObject <NSCopying> {

	FBComposerPrivacySetting* _fixedPrivacySetting;
	NSArray* _taggedUsers;
	NSString* _fullDescriptionOfFixedPrivacy;

}

@property (nonatomic,copy,readonly) FBComposerPrivacySetting * fixedPrivacySetting;              //@synthesize fixedPrivacySetting=_fixedPrivacySetting - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggedUsers;                                       //@synthesize taggedUsers=_taggedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDescriptionOfFixedPrivacy;                    //@synthesize fullDescriptionOfFixedPrivacy=_fullDescriptionOfFixedPrivacy - In the implementation block
-(NSString *)fullDescriptionOfFixedPrivacy;
-(id)initWithFixedPrivacySetting:(id)arg1 taggedUsers:(id)arg2 fullDescriptionOfFixedPrivacy:(id)arg3 ;
-(FBComposerPrivacySetting *)fixedPrivacySetting;
-(NSArray *)taggedUsers;
@end

