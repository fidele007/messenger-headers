/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNLightweightActionModel : FBValueObject <NSCopying> {

	NSString* _name;
	NSDictionary* _emojis;
	NSDictionary* _emojiAngles;
	NSString* _snippetFromSelf;
	NSString* _snippetFromFriend;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * emojis;                     //@synthesize emojis=_emojis - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * emojiAngles;                //@synthesize emojiAngles=_emojiAngles - In the implementation block
@property (nonatomic,copy,readonly) NSString * snippetFromSelf;                //@synthesize snippetFromSelf=_snippetFromSelf - In the implementation block
@property (nonatomic,copy,readonly) NSString * snippetFromFriend;              //@synthesize snippetFromFriend=_snippetFromFriend - In the implementation block
-(NSDictionary *)emojis;
-(NSString *)snippetFromSelf;
-(NSString *)snippetFromFriend;
-(NSDictionary *)emojiAngles;
-(id)initWithName:(id)arg1 emojis:(id)arg2 emojiAngles:(id)arg3 snippetFromSelf:(id)arg4 snippetFromFriend:(id)arg5 ;
-(NSString *)name;
@end

