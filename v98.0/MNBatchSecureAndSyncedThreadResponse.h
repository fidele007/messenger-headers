/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBatchSecureThreadResponse, MNBatchThreadMessagingDataResponse;

@interface MNBatchSecureAndSyncedThreadResponse : FBValueObject <NSCopying> {

	MNBatchSecureThreadResponse* _secureThreadResponse;
	MNBatchThreadMessagingDataResponse* _syncedThreadResponse;

}

@property (nonatomic,copy,readonly) MNBatchSecureThreadResponse * secureThreadResponse;                     //@synthesize secureThreadResponse=_secureThreadResponse - In the implementation block
@property (nonatomic,copy,readonly) MNBatchThreadMessagingDataResponse * syncedThreadResponse;              //@synthesize syncedThreadResponse=_syncedThreadResponse - In the implementation block
-(MNBatchThreadMessagingDataResponse *)syncedThreadResponse;
-(MNBatchSecureThreadResponse *)secureThreadResponse;
-(id)initWithSecureThreadResponse:(id)arg1 syncedThreadResponse:(id)arg2 ;
@end

