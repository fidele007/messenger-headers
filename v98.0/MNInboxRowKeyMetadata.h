/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMLocalThreadKey, NSString, MNInboxMontageMetadata;

@interface MNInboxRowKeyMetadata : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMLocalThreadKey* _threadRow_threadKey;
	NSString* _title_title;
	NSString* _activeNow_activeNowUserId;
	MNInboxMontageMetadata* _montage;

}
+(id)seeAll;
+(id)threadRowWithThreadKey:(id)arg1 ;
+(id)titleWithTitle:(id)arg1 ;
+(id)activeNowWithActiveNowUserId:(id)arg1 ;
+(id)montage:(id)arg1 ;
+(id)collapsed;
-(void)matchThreadRow:(/*^block*/id)arg1 title:(/*^block*/id)arg2 activeNow:(/*^block*/id)arg3 collapsed:(/*^block*/id)arg4 montage:(/*^block*/id)arg5 seeAll:(/*^block*/id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
