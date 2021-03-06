/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, UIImage, NSString, UIColor, MNNewRoomAssociatedObjectType, NSSet;

@interface MNNewGroupThreadSummary : FBValueObject <NSCopying> {

	BOOL _approvalRequired;
	BOOL _discoverable;
	BOOL _isVideoRoom;
	FBStringWithRedactedDescription* _customName;
	UIImage* _profileImage;
	FBStringWithRedactedDescription* _groupDescription;
	NSString* _customEmoji;
	UIColor* _outgoingBubbleColor;
	MNNewRoomAssociatedObjectType* _associatedObject;
	NSSet* _coParticipants;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * customName;                    //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) UIImage * profileImage;                                          //@synthesize profileImage=_profileImage - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * groupDescription;              //@synthesize groupDescription=_groupDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * customEmoji;                                          //@synthesize customEmoji=_customEmoji - In the implementation block
@property (nonatomic,copy,readonly) UIColor * outgoingBubbleColor;                                   //@synthesize outgoingBubbleColor=_outgoingBubbleColor - In the implementation block
@property (nonatomic,readonly) BOOL approvalRequired;                                                //@synthesize approvalRequired=_approvalRequired - In the implementation block
@property (nonatomic,readonly) BOOL discoverable;                                                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,readonly) BOOL isVideoRoom;                                                     //@synthesize isVideoRoom=_isVideoRoom - In the implementation block
@property (nonatomic,copy,readonly) MNNewRoomAssociatedObjectType * associatedObject;                //@synthesize associatedObject=_associatedObject - In the implementation block
@property (nonatomic,copy,readonly) NSSet * coParticipants;                                          //@synthesize coParticipants=_coParticipants - In the implementation block
-(FBStringWithRedactedDescription *)groupDescription;
-(BOOL)approvalRequired;
-(BOOL)isVideoRoom;
-(NSString *)customEmoji;
-(NSSet *)coParticipants;
-(id)initWithCustomName:(id)arg1 profileImage:(id)arg2 groupDescription:(id)arg3 customEmoji:(id)arg4 outgoingBubbleColor:(id)arg5 approvalRequired:(BOOL)arg6 discoverable:(BOOL)arg7 isVideoRoom:(BOOL)arg8 associatedObject:(id)arg9 coParticipants:(id)arg10 ;
-(MNNewRoomAssociatedObjectType *)associatedObject;
-(UIColor *)outgoingBubbleColor;
-(UIImage *)profileImage;
-(BOOL)discoverable;
-(FBStringWithRedactedDescription *)customName;
@end

