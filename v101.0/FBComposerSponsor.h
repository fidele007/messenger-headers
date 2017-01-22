/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerSponsor : FBValueObject <NSCopying, NSCoding> {

	BOOL _isVerified;
	NSString* _sponsorName;
	NSString* _sponsorId;

}

@property (nonatomic,copy,readonly) NSString * sponsorName;              //@synthesize sponsorName=_sponsorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sponsorId;                //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                          //@synthesize isVerified=_isVerified - In the implementation block
-(NSString *)sponsorId;
-(id)initWithSponsorName:(id)arg1 sponsorId:(id)arg2 isVerified:(BOOL)arg3 ;
-(NSString *)sponsorName;
-(BOOL)isVerified;
@end
