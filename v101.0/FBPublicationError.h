/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface FBPublicationError : FBValueObject <NSCopying> {

	unsigned long long _type;
	NSString* _humanizedErrorTitle;
	NSString* _humanizedErrorDescription;
	NSString* _developerFacingDescription;
	long long _errorCode;
	long long _errorSubcode;
	NSError* _serverError;

}

@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * humanizedErrorTitle;                     //@synthesize humanizedErrorTitle=_humanizedErrorTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * humanizedErrorDescription;               //@synthesize humanizedErrorDescription=_humanizedErrorDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * developerFacingDescription;              //@synthesize developerFacingDescription=_developerFacingDescription - In the implementation block
@property (nonatomic,readonly) long long errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) long long errorSubcode;                                  //@synthesize errorSubcode=_errorSubcode - In the implementation block
@property (nonatomic,copy,readonly) NSError * serverError;                              //@synthesize serverError=_serverError - In the implementation block
-(id)initWithType:(unsigned long long)arg1 humanizedErrorTitle:(id)arg2 humanizedErrorDescription:(id)arg3 developerFacingDescription:(id)arg4 errorCode:(long long)arg5 errorSubcode:(long long)arg6 serverError:(id)arg7 ;
-(NSString *)humanizedErrorTitle;
-(NSString *)developerFacingDescription;
-(long long)errorSubcode;
-(NSString *)humanizedErrorDescription;
-(unsigned long long)type;
-(long long)errorCode;
-(NSError *)serverError;
@end

