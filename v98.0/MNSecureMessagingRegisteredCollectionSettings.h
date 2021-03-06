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

@class NSData, FBStringWithRedactedDescription;

@interface MNSecureMessagingRegisteredCollectionSettings : FBValueObject <NSCoding, NSCopying> {

	NSData* _publicKey;
	long long _deviceStatus;
	FBStringWithRedactedDescription* _codeName;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                                      //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long deviceStatus;                                       //@synthesize deviceStatus=_deviceStatus - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * codeName;              //@synthesize codeName=_codeName - In the implementation block
-(FBStringWithRedactedDescription *)codeName;
-(id)initWithPublicKey:(id)arg1 deviceStatus:(long long)arg2 codeName:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)deviceStatus;
-(NSData *)publicKey;
@end

