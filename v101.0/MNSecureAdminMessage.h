/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNSecureAdminMessage : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	unsigned long long _error;

}
+(id)primaryDeviceChange;
+(id)deviceRemoved;
+(id)trustedDeviceAdded;
+(id)untrustedDeviceAdded;
+(id)linkDelete;
+(id)error:(unsigned long long)arg1 ;
-(void)matchLinkDelete:(/*^block*/id)arg1 primaryDeviceChange:(/*^block*/id)arg2 deviceRemoved:(/*^block*/id)arg3 trustedDeviceAdded:(/*^block*/id)arg4 untrustedDeviceAdded:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
