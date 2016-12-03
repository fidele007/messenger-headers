/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNProfileImageModel;

@interface MNGroupsRoomShareBannerViewModel : FBValueObject <NSCopying> {

	NSString* _joinableLink;
	MNProfileImageModel* _profileImageModel;

}

@property (nonatomic,copy,readonly) NSString * joinableLink;                              //@synthesize joinableLink=_joinableLink - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;              //@synthesize profileImageModel=_profileImageModel - In the implementation block
-(MNProfileImageModel *)profileImageModel;
-(NSString *)joinableLink;
-(id)initWithJoinableLink:(id)arg1 profileImageModel:(id)arg2 ;
@end
