/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBReactionTriggerCityGuideFilter : FBGraphQLInput {

	NSString* _tab;
	NSString* _listType;
	NSString* _categoryId;

}

@property (nonatomic,copy) NSString * tab;                     //@synthesize tab=_tab - In the implementation block
@property (nonatomic,copy) NSString * listType;                //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy) NSString * categoryId;              //@synthesize categoryId=_categoryId - In the implementation block
-(NSString *)tab;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)categoryId;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)setTab:(NSString *)arg1 ;
-(void)setListType:(NSString *)arg1 ;
-(NSString *)listType;
@end

