/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(NSString *)sponsorName;
-(id)initWithSponsorName:(id)arg1 sponsorId:(id)arg2 isVerified:(BOOL)arg3 ;
-(BOOL)isVerified;
@end
