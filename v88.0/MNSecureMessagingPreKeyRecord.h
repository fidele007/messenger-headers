/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureMessagingKeyPair;

@interface MNSecureMessagingPreKeyRecord : FBValueObject <NSCoding, NSCopying> {

	int _preKeyId;
	MNSecureMessagingKeyPair* _keyPair;

}

@property (nonatomic,readonly) int preKeyId;                                         //@synthesize preKeyId=_preKeyId - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessagingKeyPair * keyPair;              //@synthesize keyPair=_keyPair - In the implementation block
-(MNSecureMessagingKeyPair *)keyPair;
-(int)preKeyId;
-(id)initWithPreKeyId:(int)arg1 keyPair:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

