/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSArray, FBInstantGameReferralInfo;

@interface FBQuicksilverSessionInfo : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfo* _player;
	NSArray* _opponents;
	FBInstantGameReferralInfo* _referralInfo;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,copy,readonly) NSArray * opponents;                                   //@synthesize opponents=_opponents - In the implementation block
@property (nonatomic,copy,readonly) FBInstantGameReferralInfo * referralInfo;              //@synthesize referralInfo=_referralInfo - In the implementation block
-(id)initWithPlayer:(id)arg1 opponents:(id)arg2 referralInfo:(id)arg3 ;
-(FBInstantGameReferralInfo *)referralInfo;
-(NSArray *)opponents;
-(FBQuicksilverPlayerInfo *)player;
@end

