/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(NSString *)graphQLTypeName;
-(NSString *)graphQLID;
-(id)initWithGraphQLID:(id)arg1 graphQLTypeName:(id)arg2 name:(id)arg3 ;
-(NSString *)name;
@end

