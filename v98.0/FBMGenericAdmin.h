/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBStringWithRedactedDescription;

@interface FBMGenericAdmin : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _gameAdminMessage_foldedText;
	NSString* _gameAdminMessage_unfoldedText;
	NSString* _gameAdminMessage_gameType;
	NSString* _gameAdminMessage_gameId;
	NSString* _gameAdminMessage_gameName;
	NSString* _gameAdminMessage_gameLogoUri;
	NSArray* _gameAdminMessage_leaderboardItems;
	NSString* _pollAdminMessage_questionId;
	NSString* _pollAdminMessage_questionText;
	long long _pollAdminMessage_totalOptionCount;
	NSArray* _pollAdminMessage_options;
	BOOL _pollAdminMessage_viewerHasVoted;
	NSString* _mediaSubscriptionManageAdminMessage_pageId;
	NSString* _mediaSubscriptionManageAdminMessage_pageName;
	NSString* _mediaSubscriptionManageAdminMessage_pageProfilePicUri;
	NSString* _mediaSubscriptionManageAdminMessage_messageState;
	NSArray* _mediaSubscriptionManageAdminMessage_callToActions;
	FBStringWithRedactedDescription* _mediaSubscriptionManageAdminMessage_messageText;
	NSString* _mediaSubscriptionManageAdminMessage_unfoldCTAText;

}
+(id)gameAdminMessageWithFoldedText:(id)arg1 unfoldedText:(id)arg2 gameType:(id)arg3 gameId:(id)arg4 gameName:(id)arg5 gameLogoUri:(id)arg6 leaderboardItems:(id)arg7 ;
+(id)pollAdminMessageWithQuestionId:(id)arg1 questionText:(id)arg2 totalOptionCount:(long long)arg3 options:(id)arg4 viewerHasVoted:(BOOL)arg5 ;
+(id)mediaSubscriptionManageAdminMessageWithPageId:(id)arg1 pageName:(id)arg2 pageProfilePicUri:(id)arg3 messageState:(id)arg4 callToActions:(id)arg5 messageText:(id)arg6 unfoldCTAText:(id)arg7 ;
-(void)matchGameAdminMessage:(/*^block*/id)arg1 pollAdminMessage:(/*^block*/id)arg2 mediaSubscriptionManageAdminMessage:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

