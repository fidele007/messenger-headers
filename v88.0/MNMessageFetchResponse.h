/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, FBMIndexedMessageSet;

@interface MNMessageFetchResponse : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	FBMIndexedMessageSet* _messageSet;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                 //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) FBMIndexedMessageSet * messageSet;              //@synthesize messageSet=_messageSet - In the implementation block
-(FBMIndexedMessageSet *)messageSet;
-(id)initWithThreadKey:(id)arg1 messageSet:(id)arg2 ;
-(FBMSyncedThreadKey *)threadKey;
@end

