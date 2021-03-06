/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, NSArray;

@interface MNMessagesViewModel : FBValueObject <NSCopying> {

	FBMThreadKey* _threadKey;
	NSArray* _messageRows;
	long long _loadingMoreMessagesContent;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                     //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messageRows;                        //@synthesize messageRows=_messageRows - In the implementation block
@property (nonatomic,readonly) long long loadingMoreMessagesContent;              //@synthesize loadingMoreMessagesContent=_loadingMoreMessagesContent - In the implementation block
-(long long)loadingMoreMessagesContent;
-(id)initWithThreadKey:(id)arg1 messageRows:(id)arg2 loadingMoreMessagesContent:(long long)arg3 ;
-(NSArray *)messageRows;
-(FBMThreadKey *)threadKey;
@end

