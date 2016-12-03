/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBStyledStringRequirements : FBValueObject <NSCopying> {

	NSString* _token;
	NSString* _replacement;
	NSDictionary* _attributes;

}

@property (nonatomic,copy,readonly) NSString * token;                       //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacement;                 //@synthesize replacement=_replacement - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)initWithToken:(id)arg1 replacement:(id)arg2 attributes:(id)arg3 ;
-(NSDictionary *)attributes;
-(NSString *)token;
-(NSString *)replacement;
@end

