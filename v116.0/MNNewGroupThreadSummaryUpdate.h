/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBStringWithRedactedDescription, UIImage, NSString, UIColor, MNNewRoomAssociatedObjectType, NSSet;

@interface MNNewGroupThreadSummaryUpdate : NSObject <NSCopying, NSCoding> {

	unsigned long long _subtype;
	FBStringWithRedactedDescription* _nameKey_customName;
	UIImage* _profileImageKey_profileImage;
	FBStringWithRedactedDescription* _groupDescriptionKey_groupDescription;
	NSString* _customEmojiKey_customEmoji;
	UIColor* _customColorThemeKey_outgoingBubbleColor;
	BOOL _approvalRequiredKey_approvalRequired;
	BOOL _discoverableKey_discoverable;
	BOOL _isVideoRoomKey_isVideoRoom;
	MNNewRoomAssociatedObjectType* _associatedObjectKey_associatedObject;
	NSSet* _addCoParticipantsKey_contactsToBeAdded;
	NSSet* _removeCoParticipantsKey_contactsToBeRemoved;

}
+(id)approvalRequiredKeyWithApprovalRequired:(BOOL)arg1 ;
+(id)discoverableKeyWithDiscoverable:(BOOL)arg1 ;
+(id)addCoParticipantsKeyWithContactsToBeAdded:(id)arg1 ;
+(id)associatedObjectKeyWithAssociatedObject:(id)arg1 ;
+(id)customColorThemeKeyWithOutgoingBubbleColor:(id)arg1 ;
+(id)customEmojiKeyWithCustomEmoji:(id)arg1 ;
+(id)groupDescriptionKeyWithGroupDescription:(id)arg1 ;
+(id)isVideoRoomKeyWithIsVideoRoom:(BOOL)arg1 ;
+(id)nameKeyWithCustomName:(id)arg1 ;
+(id)profileImageKeyWithProfileImage:(id)arg1 ;
+(id)removeCoParticipantsKeyWithContactsToBeRemoved:(id)arg1 ;
-(void)matchNameKey:(/*^block*/id)arg1 profileImageKey:(/*^block*/id)arg2 groupDescriptionKey:(/*^block*/id)arg3 customEmojiKey:(/*^block*/id)arg4 customColorThemeKey:(/*^block*/id)arg5 approvalRequiredKey:(/*^block*/id)arg6 discoverableKey:(/*^block*/id)arg7 isVideoRoomKey:(/*^block*/id)arg8 associatedObjectKey:(/*^block*/id)arg9 addCoParticipantsKey:(/*^block*/id)arg10 removeCoParticipantsKey:(/*^block*/id)arg11 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

