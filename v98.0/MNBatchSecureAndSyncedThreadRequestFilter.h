/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBatchSecureThreadFilter, MNBatchThreadMessagingDataFilter;

@interface MNBatchSecureAndSyncedThreadRequestFilter : FBValueObject <NSCopying> {

	MNBatchSecureThreadFilter* _secureThreadFilter;
	MNBatchThreadMessagingDataFilter* _syncedThreadFilter;

}

@property (nonatomic,copy,readonly) MNBatchSecureThreadFilter * secureThreadFilter;                     //@synthesize secureThreadFilter=_secureThreadFilter - In the implementation block
@property (nonatomic,copy,readonly) MNBatchThreadMessagingDataFilter * syncedThreadFilter;              //@synthesize syncedThreadFilter=_syncedThreadFilter - In the implementation block
-(id)initWithSecureThreadFilter:(id)arg1 syncedThreadFilter:(id)arg2 ;
-(MNBatchThreadMessagingDataFilter *)syncedThreadFilter;
-(MNBatchSecureThreadFilter *)secureThreadFilter;
@end

