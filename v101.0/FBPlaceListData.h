/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPlaceListData : FBGraphQLInput {

	NSString* _isPlacelistPost;
	NSString* _placelistWithinPage;

}

@property (nonatomic,copy) NSString * isPlacelistPost;                  //@synthesize isPlacelistPost=_isPlacelistPost - In the implementation block
@property (nonatomic,copy) NSString * placelistWithinPage;              //@synthesize placelistWithinPage=_placelistWithinPage - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)isPlacelistPost;
-(void)setIsPlacelistPost:(NSString *)arg1 ;
-(NSString *)placelistWithinPage;
-(void)setPlacelistWithinPage:(NSString *)arg1 ;
@end
