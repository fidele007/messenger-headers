/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, NSString;

@interface FBMMessageReceivedPayload : FBValueObject <NSCopying> {

	BOOL _isLocalSend;
	FBMThreadKey* _threadKey;
	NSString* _senderId;
	unsigned long long _pushSource;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                   //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) unsigned long long pushSource;              //@synthesize pushSource=_pushSource - In the implementation block
@property (nonatomic,readonly) BOOL isLocalSend;                           //@synthesize isLocalSend=_isLocalSend - In the implementation block
-(NSString *)senderId;
-(BOOL)isLocalSend;
-(unsigned long long)pushSource;
-(id)initWithThreadKey:(id)arg1 senderId:(id)arg2 pushSource:(unsigned long long)arg3 isLocalSend:(BOOL)arg4 ;
-(FBMThreadKey *)threadKey;
@end

