/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FBDataWithRedactedDescription;

@interface MNSecureMessagingKeyPair : FBValueObject <NSCoding, NSCopying> {

	NSData* _publicKey;
	FBDataWithRedactedDescription* _privateKey;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                                      //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) FBDataWithRedactedDescription * privateKey;              //@synthesize privateKey=_privateKey - In the implementation block
-(id)initWithPublicKey:(id)arg1 privateKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBDataWithRedactedDescription *)privateKey;
-(NSData *)publicKey;
@end
