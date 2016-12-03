/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSString;

@interface FBMThreadParticipationInfoReadReceiptUpdate : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	NSString* _userId;
	unsigned long long _updatedWatermarkTimestamp;
	unsigned long long _updatedLastReadActionTimestamp;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                            //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                         //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) unsigned long long updatedWatermarkTimestamp;                   //@synthesize updatedWatermarkTimestamp=_updatedWatermarkTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long updatedLastReadActionTimestamp;              //@synthesize updatedLastReadActionTimestamp=_updatedLastReadActionTimestamp - In the implementation block
-(id)initWithThreadKey:(id)arg1 userId:(id)arg2 updatedWatermarkTimestamp:(unsigned long long)arg3 updatedLastReadActionTimestamp:(unsigned long long)arg4 ;
-(unsigned long long)updatedWatermarkTimestamp;
-(unsigned long long)updatedLastReadActionTimestamp;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)userId;
@end

