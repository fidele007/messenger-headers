/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBDateTimeFieldsElementFields : FBGraphQLInput {

	NSNumber* _year;
	NSNumber* _month;
	NSNumber* _day;
	NSNumber* _dayOfWeek;
	NSNumber* _hour;
	NSNumber* _minute;

}

@property (nonatomic,copy) NSNumber * year;                   //@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSNumber * month;                  //@synthesize month=_month - In the implementation block
@property (nonatomic,copy) NSNumber * day;                    //@synthesize day=_day - In the implementation block
@property (nonatomic,copy) NSNumber * dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,copy) NSNumber * hour;                   //@synthesize hour=_hour - In the implementation block
@property (nonatomic,copy) NSNumber * minute;                 //@synthesize minute=_minute - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setDay:(NSNumber *)arg1 ;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(NSNumber *)year;
-(NSNumber *)month;
-(NSNumber *)day;
-(void)setYear:(NSNumber *)arg1 ;
-(void)setMonth:(NSNumber *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSNumber *)dayOfWeek;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
@end

