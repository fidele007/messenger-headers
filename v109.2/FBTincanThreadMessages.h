/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBTincanThreadMessages : FBGraphQLInput {

	NSString* _senderId;
	NSNumber* _sendTime;
	NSString* _salamanderThrift;
	NSString* _hmac;

}

@property (nonatomic,copy) NSString * senderId;                      //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy) NSNumber * sendTime;                      //@synthesize sendTime=_sendTime - In the implementation block
@property (nonatomic,copy) NSString * salamanderThrift;              //@synthesize salamanderThrift=_salamanderThrift - In the implementation block
@property (nonatomic,copy) NSString * hmac;                          //@synthesize hmac=_hmac - In the implementation block
-(void)setSalamanderThrift:(NSString *)arg1 ;
-(void)setHmac:(NSString *)arg1 ;
-(NSString *)salamanderThrift;
-(NSString *)hmac;
-(NSString *)senderId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSenderId:(NSString *)arg1 ;
-(void)setSendTime:(NSNumber *)arg1 ;
-(NSNumber *)sendTime;
@end

