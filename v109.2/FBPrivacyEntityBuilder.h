/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBTypedNSArrayOfNSString, NSNumber;

@interface FBPrivacyEntityBuilder : NSObject {

	NSString* _value;
	FBTypedNSArrayOfNSString* _allowedIDs;
	FBTypedNSArrayOfNSString* _deniedIDs;
	FBTypedNSArrayOfNSString* _objectIDs;
	NSString* _primaryAllowToken;
	unsigned long long _kind;
	NSString* _listType;
	NSString* _listGraphQLID;
	NSNumber* _noTagExpansion;
	BOOL _isMostRecent;
	long long _intrinsicTagExpansionStyle;
	NSString* _optionType;

}
+(id)privacyEntity;
+(id)privacyEntityFromExistingPrivacyEntity:(id)arg1 ;
-(id)withAllowedIDs:(id)arg1 ;
-(id)withDeniedIDs:(id)arg1 ;
-(id)withObjectIDs:(id)arg1 ;
-(id)withPrimaryAllowToken:(id)arg1 ;
-(id)withKind:(unsigned long long)arg1 ;
-(id)withListType:(id)arg1 ;
-(id)withListGraphQLID:(id)arg1 ;
-(id)withNoTagExpansion:(id)arg1 ;
-(id)withIsMostRecent:(BOOL)arg1 ;
-(id)withIntrinsicTagExpansionStyle:(long long)arg1 ;
-(id)withOptionType:(id)arg1 ;
-(id)withValue:(id)arg1 ;
-(id)build;
@end

