/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRideServiceCUTriggerImpressionInfo : FBValueObject <NSCopying> {

	NSString* _messageId;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) NSString * messageId;                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithMessageId:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(unsigned long long)timestamp;
-(NSString *)messageId;
@end

