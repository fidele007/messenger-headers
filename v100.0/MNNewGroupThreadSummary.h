/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, UIImage, NSString, UIColor;

@interface MNNewGroupThreadSummary : FBValueObject <NSCopying> {

	BOOL _approvalRequired;
	BOOL _muteNotifications;
	BOOL _discoverable;
	FBStringWithRedactedDescription* _customName;
	UIImage* _profileImage;
	FBStringWithRedactedDescription* _groupDescription;
	NSString* _customEmoji;
	UIColor* _outgoingBubbleColor;
	NSString* _facebookGroupID;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * customName;                    //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) UIImage * profileImage;                                          //@synthesize profileImage=_profileImage - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * groupDescription;              //@synthesize groupDescription=_groupDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * customEmoji;                                          //@synthesize customEmoji=_customEmoji - In the implementation block
@property (nonatomic,copy,readonly) UIColor * outgoingBubbleColor;                                   //@synthesize outgoingBubbleColor=_outgoingBubbleColor - In the implementation block
@property (nonatomic,readonly) BOOL approvalRequired;                                                //@synthesize approvalRequired=_approvalRequired - In the implementation block
@property (nonatomic,readonly) BOOL muteNotifications;                                               //@synthesize muteNotifications=_muteNotifications - In the implementation block
@property (nonatomic,readonly) BOOL discoverable;                                                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy,readonly) NSString * facebookGroupID;                                      //@synthesize facebookGroupID=_facebookGroupID - In the implementation block
-(NSString *)facebookGroupID;
-(FBStringWithRedactedDescription *)groupDescription;
-(BOOL)approvalRequired;
-(NSString *)customEmoji;
-(BOOL)muteNotifications;
-(id)initWithCustomName:(id)arg1 profileImage:(id)arg2 groupDescription:(id)arg3 customEmoji:(id)arg4 outgoingBubbleColor:(id)arg5 approvalRequired:(BOOL)arg6 muteNotifications:(BOOL)arg7 discoverable:(BOOL)arg8 facebookGroupID:(id)arg9 ;
-(UIColor *)outgoingBubbleColor;
-(UIImage *)profileImage;
-(BOOL)discoverable;
-(FBStringWithRedactedDescription *)customName;
@end
