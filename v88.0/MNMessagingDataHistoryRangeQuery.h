/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagingDataHistoryRangeQuery : FBValueObject <NSCopying> {

	long long _maxNumberOfItems;
	unsigned long long _olderThanTimestamp;

}

@property (nonatomic,readonly) long long maxNumberOfItems;                         //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (nonatomic,readonly) unsigned long long olderThanTimestamp;              //@synthesize olderThanTimestamp=_olderThanTimestamp - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithMaxNumberOfItems:(long long)arg1 olderThanTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)olderThanTimestamp;
-(long long)maxNumberOfItems;
@end

