/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBDateInput : FBGraphQLInput {

	NSNumber* _year;
	NSNumber* _month;
	NSNumber* _day;

}

@property (nonatomic,copy) NSNumber * year;               //@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSNumber * month;              //@synthesize month=_month - In the implementation block
@property (nonatomic,copy) NSNumber * day;                //@synthesize day=_day - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setDay:(NSNumber *)arg1 ;
-(NSNumber *)year;
-(NSNumber *)month;
-(NSNumber *)day;
-(void)setYear:(NSNumber *)arg1 ;
-(void)setMonth:(NSNumber *)arg1 ;
@end

