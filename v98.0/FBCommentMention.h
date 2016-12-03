/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCommentMention : FBValueObject <NSCopying> {

	NSString* _entityGraphQLID;
	NSString* _entityGraphQLTypeName;
	NSString* _entityClassName;
	NSString* _entityName;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityGraphQLID;                    //@synthesize entityGraphQLID=_entityGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityGraphQLTypeName;              //@synthesize entityGraphQLTypeName=_entityGraphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityClassName;                    //@synthesize entityClassName=_entityClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityName;                         //@synthesize entityName=_entityName - In the implementation block
-(id)initWithRange:(NSRange)arg1 entityGraphQLID:(id)arg2 entityGraphQLTypeName:(id)arg3 entityClassName:(id)arg4 entityName:(id)arg5 ;
-(NSString *)entityGraphQLID;
-(NSString *)entityGraphQLTypeName;
-(NSString *)entityClassName;
-(NSRange)range;
-(NSString *)entityName;
@end

