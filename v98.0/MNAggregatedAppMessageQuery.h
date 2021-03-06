/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey;

@interface MNAggregatedAppMessageQuery : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	unsigned long long _limitTimestamp;
	long long _maxNumberOfTotalMessagesAllowed;
	long long _maxNumberOfServerMessagesAllowed;
	long long _maxNumberOfAPNSMessagesAllowed;
	long long _maxNumberOfOutgoingMessagesAllowed;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                       //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) unsigned long long limitTimestamp;                         //@synthesize limitTimestamp=_limitTimestamp - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfTotalMessagesAllowed;                 //@synthesize maxNumberOfTotalMessagesAllowed=_maxNumberOfTotalMessagesAllowed - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfServerMessagesAllowed;                //@synthesize maxNumberOfServerMessagesAllowed=_maxNumberOfServerMessagesAllowed - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfAPNSMessagesAllowed;                  //@synthesize maxNumberOfAPNSMessagesAllowed=_maxNumberOfAPNSMessagesAllowed - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfOutgoingMessagesAllowed;              //@synthesize maxNumberOfOutgoingMessagesAllowed=_maxNumberOfOutgoingMessagesAllowed - In the implementation block
-(id)initWithThreadKey:(id)arg1 limitTimestamp:(unsigned long long)arg2 maxNumberOfTotalMessagesAllowed:(long long)arg3 maxNumberOfServerMessagesAllowed:(long long)arg4 maxNumberOfAPNSMessagesAllowed:(long long)arg5 maxNumberOfOutgoingMessagesAllowed:(long long)arg6 ;
-(long long)maxNumberOfTotalMessagesAllowed;
-(unsigned long long)limitTimestamp;
-(long long)maxNumberOfOutgoingMessagesAllowed;
-(long long)maxNumberOfAPNSMessagesAllowed;
-(long long)maxNumberOfServerMessagesAllowed;
-(FBMSyncedThreadKey *)threadKey;
@end

