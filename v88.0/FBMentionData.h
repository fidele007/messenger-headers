/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSearchSuggestionProtocol.h>

@protocol FBAvatarProtocol;
@class NSString, FBMemModelObject;

@interface FBMentionData : NSObject <FBSearchSuggestionProtocol> {

	BOOL _isSelected;
	BOOL _showQueryFormationAffordance;
	BOOL _isFromBootstrap;
	BOOL _isCommenter;
	BOOL _isGroupMember;
	BOOL _isNonCacheable;
	FBMemModelObject*<FBAvatarProtocol> _avatar;
	unsigned long long _friendshipStatus;
	unsigned long long _cacheType;
	NSString* _text;
	NSString* _semantic;
	unsigned long long _resultType;

}

@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (assign,nonatomic) BOOL isFromBootstrap;                                    //@synthesize isFromBootstrap=_isFromBootstrap - In the implementation block
@property (assign,nonatomic) BOOL isCommenter;                                        //@synthesize isCommenter=_isCommenter - In the implementation block
@property (assign,nonatomic) BOOL isGroupMember;                                      //@synthesize isGroupMember=_isGroupMember - In the implementation block
@property (assign,nonatomic) unsigned long long friendshipStatus;                     //@synthesize friendshipStatus=_friendshipStatus - In the implementation block
@property (assign,nonatomic) unsigned long long cacheType;                            //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL isNonCacheable;                                     //@synthesize isNonCacheable=_isNonCacheable - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * semantic;                              //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                         //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isSelected;                                         //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL showQueryFormationAffordance;                       //@synthesize showQueryFormationAffordance=_showQueryFormationAffordance - In the implementation block
@property (nonatomic,copy) NSString * suggestionServerSource; 
+(id)generateAvatarFrom:(id)arg1 photoSize:(unsigned long long)arg2 ;
+(id)mentionDataWith:(id)arg1 photoSize:(unsigned long long)arg2 isGroupMember:(BOOL)arg3 ;
-(unsigned long long)friendshipStatus;
-(void)setFriendshipStatus:(unsigned long long)arg1 ;
-(id)initWithAvatar:(id)arg1 fromBootstrap:(BOOL)arg2 ;
-(BOOL)isFromBootstrap;
-(id)_generateAvatarFrom:(id)arg1 photoSize:(unsigned long long)arg2 ;
-(void)setIsGroupMember:(BOOL)arg1 ;
-(id)suggestionTypeForLogging;
-(BOOL)isNonCacheable;
-(void)setIsNonCacheable:(BOOL)arg1 ;
-(BOOL)showQueryFormationAffordance;
-(void)setShowQueryFormationAffordance:(BOOL)arg1 ;
-(id)initWithSuggestion:(id)arg1 photoSize:(unsigned long long)arg2 ;
-(void)setIsFromBootstrap:(BOOL)arg1 ;
-(BOOL)isCommenter;
-(void)setIsCommenter:(BOOL)arg1 ;
-(BOOL)isGroupMember;
-(NSString *)text;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(unsigned long long)resultType;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
-(NSString *)semantic;
@end

