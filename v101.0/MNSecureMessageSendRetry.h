/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureOutgoingMessage;

@interface MNSecureMessageSendRetry : FBValueObject <NSCoding, NSCopying> {

	MNSecureOutgoingMessage* _message;
	long long _retryState;
	unsigned long long _orginalSendTime;

}

@property (nonatomic,copy,readonly) MNSecureOutgoingMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long retryState;                                //@synthesize retryState=_retryState - In the implementation block
@property (nonatomic,readonly) unsigned long long orginalSendTime;                  //@synthesize orginalSendTime=_orginalSendTime - In the implementation block
-(id)initWithMessage:(id)arg1 retryState:(long long)arg2 orginalSendTime:(unsigned long long)arg3 ;
-(long long)retryState;
-(unsigned long long)orginalSendTime;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNSecureOutgoingMessage *)message;
@end
