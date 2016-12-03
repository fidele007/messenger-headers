/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBPublishedTaggedUser : FBValueObject <NSCopying, NSCoding> {

	NSString* _graphQLID;
	NSString* _graphQLTypeName;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                    //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLTypeName;              //@synthesize graphQLTypeName=_graphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
-(NSString *)graphQLID;
-(NSString *)graphQLTypeName;
-(id)initWithGraphQLID:(id)arg1 graphQLTypeName:(id)arg2 name:(id)arg3 ;
-(NSString *)name;
@end

