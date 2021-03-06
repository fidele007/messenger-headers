/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQPPromotion;

@interface FBMessengerInterstitialType : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBQPPromotion* _qPDiodeBadgeable_promotion;
	unsigned long long _diodeUnread_unreadThreadCount;

}
+(id)updateRoadblock;
+(id)mSiteRoadblock;
+(id)qPDiodeBadgeableWithPromotion:(id)arg1 ;
+(id)diodeUnreadWithUnreadThreadCount:(unsigned long long)arg1 ;
+(id)installRoadblock;
+(id)redirectRoadblock;
+(id)none;
-(void)matchNone:(/*^block*/id)arg1 installRoadblock:(/*^block*/id)arg2 redirectRoadblock:(/*^block*/id)arg3 updateRoadblock:(/*^block*/id)arg4 mSiteRoadblock:(/*^block*/id)arg5 qPDiodeBadgeable:(/*^block*/id)arg6 diodeUnread:(/*^block*/id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

