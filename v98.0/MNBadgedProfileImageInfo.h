/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNProfileImageInfo;

@interface MNBadgedProfileImageInfo : FBValueObject <NSCopying, NSCoding> {

	MNProfileImageInfo* _profileImageInfo;
	long long _style;
	long long _badgeType;

}

@property (nonatomic,copy,readonly) MNProfileImageInfo * profileImageInfo;              //@synthesize profileImageInfo=_profileImageInfo - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long badgeType;                                     //@synthesize badgeType=_badgeType - In the implementation block
-(MNProfileImageInfo *)profileImageInfo;
-(id)initWithProfileImageInfo:(id)arg1 style:(long long)arg2 badgeType:(long long)arg3 ;
-(long long)style;
-(long long)badgeType;
@end

