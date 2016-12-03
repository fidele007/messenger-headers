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

@class NSData;

@interface MNSecureMessagingRemoteIdentity : FBValueObject <NSCoding, NSCopying> {

	NSData* _remoteIdentityKey;

}

@property (nonatomic,copy,readonly) NSData * remoteIdentityKey;              //@synthesize remoteIdentityKey=_remoteIdentityKey - In the implementation block
-(NSData *)remoteIdentityKey;
-(id)initWithRemoteIdentityKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
