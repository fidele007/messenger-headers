/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey;

@interface MNIncrementalPersistenceMessageDeleteJobData : FBValueObject <NSCopying> {

	NSString* _messageId;
	FBMSyncedThreadKey* _threadKey;
	long long _threadAction;

}

@property (nonatomic,copy,readonly) NSString * messageId;                        //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) long long threadAction;                           //@synthesize threadAction=_threadAction - In the implementation block
-(long long)threadAction;
-(id)initWithMessageId:(id)arg1 threadKey:(id)arg2 threadAction:(long long)arg3 ;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)messageId;
@end

