/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
