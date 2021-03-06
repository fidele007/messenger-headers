/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSString, FBMExtensibleMessagePropertyDiskUpdateData;

@interface FBMExtensibleMessagePropertyDiskUpdate : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _syncedThreadKey;
	NSString* _messageId;
	FBMExtensibleMessagePropertyDiskUpdateData* _jobData;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * syncedThreadKey;                              //@synthesize syncedThreadKey=_syncedThreadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;                                              //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) FBMExtensibleMessagePropertyDiskUpdateData * jobData;              //@synthesize jobData=_jobData - In the implementation block
-(FBMSyncedThreadKey *)syncedThreadKey;
-(id)initWithSyncedThreadKey:(id)arg1 messageId:(id)arg2 jobData:(id)arg3 ;
-(FBMExtensibleMessagePropertyDiskUpdateData *)jobData;
-(NSString *)messageId;
@end

