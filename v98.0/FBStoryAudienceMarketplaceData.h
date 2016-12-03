/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBStoryAudienceMarketplaceData : FBGraphQLInput {

	NSString* _marketplaceId;
	NSString* _groupId;

}

@property (nonatomic,copy) NSString * marketplaceId;              //@synthesize marketplaceId=_marketplaceId - In the implementation block
@property (nonatomic,copy) NSString * groupId;                    //@synthesize groupId=_groupId - In the implementation block
-(void)setMarketplaceId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)marketplaceId;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
@end

