/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, MNProfileImageInfo, MNBadgedProfileImageSpec;

@interface MNBadgedProfileImageViewModel : FBValueObject <NSCopying> {

	NSString* _userId;
	FBStringWithRedactedDescription* _name;
	MNProfileImageInfo* _profileImageInfo;
	long long _badgeType;
	MNBadgedProfileImageSpec* _profileImageSpec;

}

@property (nonatomic,copy,readonly) NSString * userId;                                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageInfo * profileImageInfo;                    //@synthesize profileImageInfo=_profileImageInfo - In the implementation block
@property (nonatomic,readonly) long long badgeType;                                           //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,copy,readonly) MNBadgedProfileImageSpec * profileImageSpec;              //@synthesize profileImageSpec=_profileImageSpec - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(MNProfileImageInfo *)profileImageInfo;
-(id)initWithUserId:(id)arg1 name:(id)arg2 profileImageInfo:(id)arg3 badgeType:(long long)arg4 profileImageSpec:(id)arg5 ;
-(MNBadgedProfileImageSpec *)profileImageSpec;
-(FBStringWithRedactedDescription *)name;
-(long long)badgeType;
-(NSString *)userId;
@end

