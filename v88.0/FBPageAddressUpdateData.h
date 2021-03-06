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

@interface FBPageAddressUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageid;
	NSString* _street;
	NSString* _cityId;
	NSString* _zipcode;
	NSString* _phone;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageid;                        //@synthesize pageid=_pageid - In the implementation block
@property (nonatomic,copy) NSString * street;                        //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * cityId;                        //@synthesize cityId=_cityId - In the implementation block
@property (nonatomic,copy) NSString * zipcode;                       //@synthesize zipcode=_zipcode - In the implementation block
@property (nonatomic,copy) NSString * phone;                         //@synthesize phone=_phone - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)zipcode;
-(void)setZipcode:(NSString *)arg1 ;
-(NSString *)cityId;
-(void)setCityId:(NSString *)arg1 ;
-(NSString *)pageid;
-(void)setPageid:(NSString *)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(NSString *)phone;
@end

