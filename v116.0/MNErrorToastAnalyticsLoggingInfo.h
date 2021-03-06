/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError, NSDictionary;

@interface MNErrorToastAnalyticsLoggingInfo : FBValueObject <NSCopying> {

	NSString* _callsiteTag;
	NSError* _error;
	NSDictionary* _extra;

}

@property (nonatomic,copy,readonly) NSString * callsiteTag;              //@synthesize callsiteTag=_callsiteTag - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;                //@synthesize extra=_extra - In the implementation block
-(id)initWithCallsiteTag:(id)arg1 error:(id)arg2 extra:(id)arg3 ;
-(NSString *)callsiteTag;
-(NSDictionary *)extra;
-(NSError *)error;
@end

