/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSDecimalNumber, NSString, NSURL, NSDate, MNInternalToolCommand;

@interface MNDetectedData : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSDictionary* _detectedAddress_addressComponents;
	NSDecimalNumber* _detectedCurrencyAmount_amount;
	NSString* _detectedPhoneNumber_phoneNumber;
	NSURL* _detectedURL_uRL;
	NSDate* _detectedDate_date;
	NSString* _detectedDate_dateString;
	MNInternalToolCommand* _detectedInternalToolCommand_command;
	NSString* _profileRange_fbid;

}
+(id)profileRangeWithFbid:(id)arg1 ;
+(id)detectedCurrencyAmountWithAmount:(id)arg1 ;
+(id)detectedInternalToolCommandWithCommand:(id)arg1 ;
+(id)detectedAddressWithAddressComponents:(id)arg1 ;
+(id)detectedPhoneNumberWithPhoneNumber:(id)arg1 ;
+(id)detectedURLWithURL:(id)arg1 ;
+(id)detectedDateWithDate:(id)arg1 dateString:(id)arg2 ;
-(void)matchDetectedAddress:(/*^block*/id)arg1 detectedCurrencyAmount:(/*^block*/id)arg2 detectedPhoneNumber:(/*^block*/id)arg3 detectedURL:(/*^block*/id)arg4 detectedDate:(/*^block*/id)arg5 detectedInternalToolCommand:(/*^block*/id)arg6 profileRange:(/*^block*/id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

