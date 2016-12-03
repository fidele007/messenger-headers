/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcNackPayload : NSObject <TBase, NSCoding> {

	long long __nackMessageId;
	int __errorCode;
	BOOL __nackMessageId_isset;
	BOOL __errorCode_isset;

}

@property (assign,setter=setNackMessageId:,getter=nackMessageId,nonatomic) long long nackMessageId; 
@property (assign,setter=setErrorCode:,getter=errorCode,nonatomic) int errorCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)errorCodeIsSet;
-(void)read:(id)arg1 ;
-(void)unsetErrorCode;
-(void)setNackMessageId:(long long)arg1 ;
-(id)initWithNackMessageId:(long long)arg1 errorCode:(int)arg2 ;
-(long long)nackMessageId;
-(BOOL)nackMessageIdIsSet;
-(void)unsetNackMessageId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)write:(id)arg1 ;
@end

