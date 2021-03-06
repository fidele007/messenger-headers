/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNThreadMessagingStatus : NSObject <NSCopying> {

	unsigned long long _subtype;
	unsigned long long _recieptState_receiptState;
	NSArray* _recieptState_sortedReadUsers;

}
+(id)recieptStateWithReceiptState:(unsigned long long)arg1 sortedReadUsers:(id)arg2 ;
+(id)muted;
+(id)failed;
-(void)matchFailed:(/*^block*/id)arg1 muted:(/*^block*/id)arg2 recieptState:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

