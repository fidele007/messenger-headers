/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, FBComposerReactionAfterPublicationBehavior, NSAttributedString;

@interface FBComposerStructuredData : FBValueObject <NSCopying, NSCoding> {

	NSString* _authorId;
	NSString* _checkedInPlaceId;
	NSString* _openGraphAction;
	NSString* _openGraphObject;
	NSArray* _withTaggedUserIds;
	NSArray* _attachmentTaggedUserIds;
	NSArray* _mentionedUserIds;
	NSString* _shareableId;
	FBComposerReactionAfterPublicationBehavior* _reactionAfterPublicationBehavior;
	NSString* _compositionSessionId;
	NSString* _targetGraphQLID;
	NSAttributedString* _postText;
	NSAttributedString* _untrimmedPostText;
	NSArray* _hashtags;
	unsigned long long _authorType;
	unsigned long long _targetType;
	unsigned long long _postContentType;

}

@property (nonatomic,copy,readonly) NSString * authorId;                                                                        //@synthesize authorId=_authorId - In the implementation block
@property (nonatomic,copy,readonly) NSString * checkedInPlaceId;                                                                //@synthesize checkedInPlaceId=_checkedInPlaceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * openGraphAction;                                                                 //@synthesize openGraphAction=_openGraphAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * openGraphObject;                                                                 //@synthesize openGraphObject=_openGraphObject - In the implementation block
@property (nonatomic,copy,readonly) NSArray * withTaggedUserIds;                                                                //@synthesize withTaggedUserIds=_withTaggedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachmentTaggedUserIds;                                                          //@synthesize attachmentTaggedUserIds=_attachmentTaggedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mentionedUserIds;                                                                 //@synthesize mentionedUserIds=_mentionedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * shareableId;                                                                     //@synthesize shareableId=_shareableId - In the implementation block
@property (nonatomic,copy,readonly) FBComposerReactionAfterPublicationBehavior * reactionAfterPublicationBehavior;              //@synthesize reactionAfterPublicationBehavior=_reactionAfterPublicationBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSString * compositionSessionId;                                                            //@synthesize compositionSessionId=_compositionSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetGraphQLID;                                                                 //@synthesize targetGraphQLID=_targetGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * postText;                                                              //@synthesize postText=_postText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * untrimmedPostText;                                                     //@synthesize untrimmedPostText=_untrimmedPostText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hashtags;                                                                         //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,readonly) unsigned long long authorType;                                                                   //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,readonly) unsigned long long targetType;                                                                   //@synthesize targetType=_targetType - In the implementation block
@property (nonatomic,readonly) unsigned long long postContentType;                                                              //@synthesize postContentType=_postContentType - In the implementation block
-(NSString *)openGraphAction;
-(NSString *)shareableId;
-(unsigned long long)postContentType;
-(id)initWithAuthorId:(id)arg1 checkedInPlaceId:(id)arg2 openGraphAction:(id)arg3 openGraphObject:(id)arg4 withTaggedUserIds:(id)arg5 attachmentTaggedUserIds:(id)arg6 mentionedUserIds:(id)arg7 shareableId:(id)arg8 reactionAfterPublicationBehavior:(id)arg9 compositionSessionId:(id)arg10 targetGraphQLID:(id)arg11 postText:(id)arg12 untrimmedPostText:(id)arg13 hashtags:(id)arg14 authorType:(unsigned long long)arg15 targetType:(unsigned long long)arg16 postContentType:(unsigned long long)arg17 ;
-(NSString *)checkedInPlaceId;
-(NSString *)openGraphObject;
-(NSArray *)withTaggedUserIds;
-(NSArray *)attachmentTaggedUserIds;
-(NSArray *)mentionedUserIds;
-(FBComposerReactionAfterPublicationBehavior *)reactionAfterPublicationBehavior;
-(NSString *)compositionSessionId;
-(NSString *)targetGraphQLID;
-(NSAttributedString *)postText;
-(NSAttributedString *)untrimmedPostText;
-(NSArray *)hashtags;
-(unsigned long long)targetType;
-(unsigned long long)authorType;
-(NSString *)authorId;
@end

