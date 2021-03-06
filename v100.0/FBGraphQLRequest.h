/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphRequest.h>

@class FBGraphQLQuery, NSString;

@interface FBGraphQLRequest : FBGraphRequest {

	BOOL _useMultiPartForm;
	FBGraphQLQuery* _query;
	NSString* _queryID;

}

@property (nonatomic,copy,readonly) NSString * queryID;              //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) FBGraphQLQuery * query;               //@synthesize query=_query - In the implementation block
-(id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(id)initWithQuery:(id)arg1 callerClass:(Class)arg2 ;
-(id)f_describeLevel:(unsigned long long)arg1 ;
-(void)setCallerContext:(id)arg1 ;
-(id)initWithQuery:(id)arg1 queryName:(id)arg2 mutation:(BOOL)arg3 callerClass:(Class)arg4 ;
-(id)initWithQuery:(id)arg1 callerClass:(Class)arg2 objectFactory:(id)arg3 ;
-(id)analyticsName;
-(BOOL)useMultipartForm;
-(id)initWithQuery:(id)arg1 friendlyName:(id)arg2 mutation:(BOOL)arg3 callerContext:(id)arg4 objectFactory:(id)arg5 ;
-(id)_initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(void)copyMembersFromRequest:(id)arg1 withZone:(NSZone*)arg2 ;
-(unsigned long long)compressionMethod;
-(void)setFriendlyName:(id)arg1 ;
-(id)description;
-(FBGraphQLQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)queryID;
@end

