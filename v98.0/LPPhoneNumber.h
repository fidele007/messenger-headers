/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPhoneNumber.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NBPhoneNumber, NBPhoneNumberUtil, NSError;

@interface LPPhoneNumber : NSObject <FBPhoneNumber, NSCopying> {

	NBPhoneNumber* _impl;
	NBPhoneNumberUtil* _phoneNumberUtil;
	NSString* _rawInput;
	NSString* _isoCountryCode;
	NSString* _rawCountryInput;
	int _callingCode;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
@property (nonatomic,readonly) int callingCode; 
-(id)rawInput;
-(id)formatWithStyle:(int)arg1 ;
-(id)initWithNumber:(id)arg1 defaultCountry:(id)arg2 ;
-(id)formatForCallingFromCountry:(id)arg1 ;
-(id)asTelUrl;
-(int)callingCode;
-(id)initWithE164Number:(id)arg1 ;
-(void)_initPhoneNumerUtilsIfNecessary;
-(BOOL)isPossible;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)isoCountryCode;
@end

