/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray;

@interface FBSupportedClientInterfaces : FBGraphQLInput {

	NSArray* _newsfeed;
	NSArray* _searchNullState;

}

@property (nonatomic,copy) NSArray * newsfeed;                     //@synthesize newsfeed=_newsfeed - In the implementation block
@property (nonatomic,copy) NSArray * searchNullState;              //@synthesize searchNullState=_searchNullState - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)newsfeed;
-(void)setNewsfeed:(NSArray *)arg1 ;
-(NSArray *)searchNullState;
-(void)setSearchNullState:(NSArray *)arg1 ;
@end

