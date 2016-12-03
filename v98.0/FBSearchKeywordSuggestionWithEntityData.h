/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSearchKeywordSuggestion.h>

@class NSString, NSDictionary;

@interface FBSearchKeywordSuggestionWithEntityData : FBSearchKeywordSuggestion {

	NSString* _keywordType;
	NSString* _entityId;
	unsigned long long _friendshipStatus;
	NSDictionary* _logInfo;

}

@property (nonatomic,copy,readonly) NSString * keywordType;                      //@synthesize keywordType=_keywordType - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityId;                         //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,readonly) unsigned long long friendshipStatus;              //@synthesize friendshipStatus=_friendshipStatus - In the implementation block
@property (nonatomic,copy) NSDictionary * logInfo;                               //@synthesize logInfo=_logInfo - In the implementation block
-(unsigned long long)friendshipStatus;
-(id)suggestionServerSource;
-(void)setLogInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)logInfo;
-(id)initWithText:(id)arg1 semantic:(id)arg2 resultType:(unsigned long long)arg3 keywordType:(id)arg4 entityID:(id)arg5 friendshipStatus:(unsigned long long)arg6 logInfo:(id)arg7 ;
-(NSString *)keywordType;
-(NSString *)entityId;
@end

