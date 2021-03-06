/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(NSArray *)messageRows;
-(long long)loadingMoreMessagesContent;
-(id)initWithThreadKey:(id)arg1 messageRows:(id)arg2 loadingMoreMessagesContent:(long long)arg3 ;
-(FBMThreadKey *)threadKey;
@end

