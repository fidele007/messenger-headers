/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNProfileImageUserIdentifier : FBValueObject <NSCopying, NSCoding> {

	NSString* _userId;
	NSString* _profilePicHash;

}

@property (nonatomic,copy,readonly) NSString * userId;                      //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePicHash;              //@synthesize profilePicHash=_profilePicHash - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSString *)profilePicHash;
-(id)initWithUserId:(id)arg1 profilePicHash:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userId;
@end

