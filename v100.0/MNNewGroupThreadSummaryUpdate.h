/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBStringWithRedactedDescription, UIImage, NSString, UIColor;

@interface MNNewGroupThreadSummaryUpdate : NSObject <NSCopying, NSCoding> {

	unsigned long long _subtype;
	FBStringWithRedactedDescription* _nameKey_customName;
	UIImage* _profileImageKey_profileImage;
	FBStringWithRedactedDescription* _groupDescriptionKey_groupDescription;
	NSString* _customEmojiKey_customEmoji;
	UIColor* _customColorThemeKey_outgoingBubbleColor;
	BOOL _approvalRequiredKey_approvalRequired;
	BOOL _muteNotificationsKey_muteNotifications;
	BOOL _discoverableKey_discoverable;
	NSString* _facebookGroupKey_facebookGroupID;

}
+(id)approvalRequiredKeyWithApprovalRequired:(BOOL)arg1 ;
+(id)discoverableKeyWithDiscoverable:(BOOL)arg1 ;
+(id)muteNotificationsKeyWithMuteNotifications:(BOOL)arg1 ;
+(id)customColorThemeKeyWithOutgoingBubbleColor:(id)arg1 ;
+(id)customEmojiKeyWithCustomEmoji:(id)arg1 ;
+(id)facebookGroupKeyWithFacebookGroupID:(id)arg1 ;
+(id)groupDescriptionKeyWithGroupDescription:(id)arg1 ;
+(id)nameKeyWithCustomName:(id)arg1 ;
+(id)profileImageKeyWithProfileImage:(id)arg1 ;
-(void)matchNameKey:(/*^block*/id)arg1 profileImageKey:(/*^block*/id)arg2 groupDescriptionKey:(/*^block*/id)arg3 customEmojiKey:(/*^block*/id)arg4 customColorThemeKey:(/*^block*/id)arg5 approvalRequiredKey:(/*^block*/id)arg6 muteNotificationsKey:(/*^block*/id)arg7 discoverableKey:(/*^block*/id)arg8 facebookGroupKey:(/*^block*/id)arg9 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
