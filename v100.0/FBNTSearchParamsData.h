/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBNativeTemplateContextData;

@interface FBNTSearchParamsData : FBGraphQLInput {

	NSString* _query;
	NSString* _searchQuery;
	FBNativeTemplateContextData* _ntContext;

}

@property (nonatomic,copy) NSString * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                               //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) FBNativeTemplateContextData * ntContext;              //@synthesize ntContext=_ntContext - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBNativeTemplateContextData *)ntContext;
-(void)setNtContext:(FBNativeTemplateContextData *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)searchQuery;
-(void)setSearchQuery:(NSString *)arg1 ;
@end

