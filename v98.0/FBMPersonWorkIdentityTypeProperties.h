/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMPersonWorkIdentityTypeProperties : FBValueObject <NSCoding, NSCopying> {

	NSString* _companyID;
	NSString* _jobTitle;

}

@property (nonatomic,copy,readonly) NSString * companyID;              //@synthesize companyID=_companyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;               //@synthesize jobTitle=_jobTitle - In the implementation block
-(NSString *)companyID;
-(id)initWithCompanyID:(id)arg1 jobTitle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)jobTitle;
@end

