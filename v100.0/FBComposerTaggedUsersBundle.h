/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface FBComposerTaggedUsersBundle : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasTaggedUsers;
	NSArray* _taggedUsersFromWithWho;
	NSArray* _taggedUsersFromWithWhoAndPhotos;
	NSArray* _taggedAndMentionedUsers;
	NSArray* _taggedUsersFromPhotos;
	NSArray* _taggedUsersWithoutAuthor;
	NSArray* _autoTaggedUsers;

}

@property (nonatomic,readonly) BOOL hasTaggedUsers;                                         //@synthesize hasTaggedUsers=_hasTaggedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggedUsersFromWithWho;                       //@synthesize taggedUsersFromWithWho=_taggedUsersFromWithWho - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggedUsersFromWithWhoAndPhotos;              //@synthesize taggedUsersFromWithWhoAndPhotos=_taggedUsersFromWithWhoAndPhotos - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggedAndMentionedUsers;                      //@synthesize taggedAndMentionedUsers=_taggedAndMentionedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggedUsersFromPhotos;                        //@synthesize taggedUsersFromPhotos=_taggedUsersFromPhotos - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taggedUsersWithoutAuthor;                     //@synthesize taggedUsersWithoutAuthor=_taggedUsersWithoutAuthor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * autoTaggedUsers;                              //@synthesize autoTaggedUsers=_autoTaggedUsers - In the implementation block
-(id)initWithHasTaggedUsers:(BOOL)arg1 taggedUsersFromWithWho:(id)arg2 taggedUsersFromWithWhoAndPhotos:(id)arg3 taggedAndMentionedUsers:(id)arg4 taggedUsersFromPhotos:(id)arg5 taggedUsersWithoutAuthor:(id)arg6 autoTaggedUsers:(id)arg7 ;
-(BOOL)hasTaggedUsers;
-(NSArray *)taggedUsersFromWithWho;
-(NSArray *)taggedUsersFromWithWhoAndPhotos;
-(NSArray *)taggedAndMentionedUsers;
-(NSArray *)taggedUsersFromPhotos;
-(NSArray *)taggedUsersWithoutAuthor;
-(NSArray *)autoTaggedUsers;
@end
