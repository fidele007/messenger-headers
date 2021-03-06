/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, NSString, MNMontageViewModelThreadKeyDescriptor, MNThreadMontageThumbnailContent;

@interface MNThreadMontageThumbnail : FBValueObject <NSCopying> {

	BOOL _isUnread;
	FBMMessageKey* _messageKey;
	NSString* _authorId;
	MNMontageViewModelThreadKeyDescriptor* _threadKeyDescriptor;
	MNThreadMontageThumbnailContent* _content;
	unsigned long long _sendState;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                                               //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * authorId;                                                      //@synthesize authorId=_authorId - In the implementation block
@property (nonatomic,copy,readonly) MNMontageViewModelThreadKeyDescriptor * threadKeyDescriptor;              //@synthesize threadKeyDescriptor=_threadKeyDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL isUnread;                                                                 //@synthesize isUnread=_isUnread - In the implementation block
@property (nonatomic,copy,readonly) MNThreadMontageThumbnailContent * content;                                //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) unsigned long long sendState;                                                  //@synthesize sendState=_sendState - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(MNMontageViewModelThreadKeyDescriptor *)threadKeyDescriptor;
-(id)initWithMessageKey:(id)arg1 authorId:(id)arg2 threadKeyDescriptor:(id)arg3 isUnread:(BOOL)arg4 content:(id)arg5 sendState:(unsigned long long)arg6 ;
-(unsigned long long)sendState;
-(MNThreadMontageThumbnailContent *)content;
-(FBMMessageKey *)messageKey;
-(NSString *)authorId;
-(BOOL)isUnread;
@end

