/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray;

@interface FBAdFlexibleSpec : FBGraphQLInput {

	NSArray* _connectionIds;
	NSArray* _friendsOfConnectionIds;
	NSArray* _detailedTargetingItems;

}

@property (nonatomic,copy) NSArray * connectionIds;                       //@synthesize connectionIds=_connectionIds - In the implementation block
@property (nonatomic,copy) NSArray * friendsOfConnectionIds;              //@synthesize friendsOfConnectionIds=_friendsOfConnectionIds - In the implementation block
@property (nonatomic,copy) NSArray * detailedTargetingItems;              //@synthesize detailedTargetingItems=_detailedTargetingItems - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)connectionIds;
-(void)setConnectionIds:(NSArray *)arg1 ;
-(NSArray *)friendsOfConnectionIds;
-(void)setFriendsOfConnectionIds:(NSArray *)arg1 ;
-(NSArray *)detailedTargetingItems;
-(void)setDetailedTargetingItems:(NSArray *)arg1 ;
@end

