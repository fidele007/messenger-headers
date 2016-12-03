/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMThreadCustomizationInfoFetchStatus : FBValueObject <NSCoding, NSCopying> {

	BOOL _hasFetchedCustomLikeEmoji;
	BOOL _hasFetchedOutgoingBubbleColor;
	BOOL _hasFetchedParticipantsNickname;
	BOOL _hasFetchedSubscribedBotIds;

}

@property (nonatomic,readonly) BOOL hasFetchedCustomLikeEmoji;                   //@synthesize hasFetchedCustomLikeEmoji=_hasFetchedCustomLikeEmoji - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedOutgoingBubbleColor;               //@synthesize hasFetchedOutgoingBubbleColor=_hasFetchedOutgoingBubbleColor - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedParticipantsNickname;              //@synthesize hasFetchedParticipantsNickname=_hasFetchedParticipantsNickname - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedSubscribedBotIds;                  //@synthesize hasFetchedSubscribedBotIds=_hasFetchedSubscribedBotIds - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(BOOL)hasFetchedParticipantsNickname;
-(BOOL)hasFetchedCustomLikeEmoji;
-(BOOL)hasFetchedOutgoingBubbleColor;
-(id)initWithHasFetchedCustomLikeEmoji:(BOOL)arg1 hasFetchedOutgoingBubbleColor:(BOOL)arg2 hasFetchedParticipantsNickname:(BOOL)arg3 hasFetchedSubscribedBotIds:(BOOL)arg4 ;
-(BOOL)hasFetchedSubscribedBotIds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
