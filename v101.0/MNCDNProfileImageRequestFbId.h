/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNCDNProfileImageRequestFbId : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _profileImage_userId;
	NSString* _threadImage_groupFbId;

}
+(id)profileImageWithUserId:(id)arg1 ;
+(id)threadImageWithGroupFbId:(id)arg1 ;
-(void)matchProfileImage:(/*^block*/id)arg1 threadImage:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

