/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSSet, NSDictionary;

@interface FBAnalyticsLoggingPolicyModel : FBValueObject <NSCopying, NSCoding> {

	NSString* _appVersion;
	NSString* _checksum;
	NSSet* _eventBlacklist;
	NSDictionary* _frequencyConfig;

}

@property (nonatomic,copy,readonly) NSString * appVersion;                       //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                         //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy,readonly) NSSet * eventBlacklist;                      //@synthesize eventBlacklist=_eventBlacklist - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * frequencyConfig;              //@synthesize frequencyConfig=_frequencyConfig - In the implementation block
-(NSDictionary *)frequencyConfig;
-(NSSet *)eventBlacklist;
-(id)initWithAppVersion:(id)arg1 checksum:(id)arg2 eventBlacklist:(id)arg3 frequencyConfig:(id)arg4 ;
-(NSString *)checksum;
-(NSString *)appVersion;
@end

