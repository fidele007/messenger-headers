/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMThreadCustomizationInfoFetchStatusBuilder : NSObject {

	BOOL _hasFetchedCustomLikeEmoji;
	BOOL _hasFetchedOutgoingBubbleColor;
	BOOL _hasFetchedParticipantsNickname;
	BOOL _hasFetchedSubscribedBotIds;

}
+(id)threadCustomizationInfoFetchStatus;
+(id)threadCustomizationInfoFetchStatusFromExistingThreadCustomizationInfoFetchStatus:(id)arg1 ;
-(id)withHasFetchedCustomLikeEmoji:(BOOL)arg1 ;
-(id)withHasFetchedOutgoingBubbleColor:(BOOL)arg1 ;
-(id)withHasFetchedParticipantsNickname:(BOOL)arg1 ;
-(id)withHasFetchedSubscribedBotIds:(BOOL)arg1 ;
-(id)build;
@end

