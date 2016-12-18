/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Messenger/FBConnectionPageInfoProtocol.h>

@class NSString, NSNumber;

@interface FBGraphQLConnectionStorePageInfo : NSObject <NSCoding, NSCopying, FBConnectionPageInfoProtocol> {

	NSString* _startCursor;
	NSString* _endCursor;
	NSNumber* _hasNextPage;
	NSNumber* _hasPreviousPage;

}

@property (nonatomic,copy,readonly) NSString * startCursor;                  //@synthesize startCursor=_startCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * endCursor;                    //@synthesize endCursor=_endCursor - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasNextPage;                  //@synthesize hasNextPage=_hasNextPage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasPreviousPage;              //@synthesize hasPreviousPage=_hasPreviousPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pageInfoWithPageInfo:(id)arg1 ;
-(NSString *)startCursor;
-(NSString *)endCursor;
-(BOOL)hasNextPageValue;
-(BOOL)hasPreviousPageValue;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 hasPreviousPage:(BOOL)arg4 ;
-(id)initWithPageInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)hasNextPage;
-(NSNumber *)hasPreviousPage;
@end
