/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(MNBatchThreadMessagingDataFilter *)syncedThreadFilter;
-(MNBatchSecureThreadFilter *)secureThreadFilter;
-(id)initWithSecureThreadFilter:(id)arg1 syncedThreadFilter:(id)arg2 ;
@end
