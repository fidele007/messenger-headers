/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerPostTypingPayload : FBValueObject <NSCopying> {

	unsigned long long _keystrokesCount;
	unsigned long long _pastesCount;
	unsigned long long _deletesCount;

}

@property (nonatomic,readonly) unsigned long long keystrokesCount;              //@synthesize keystrokesCount=_keystrokesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long pastesCount;                  //@synthesize pastesCount=_pastesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long deletesCount;                 //@synthesize deletesCount=_deletesCount - In the implementation block
-(id)initWithKeystrokesCount:(unsigned long long)arg1 pastesCount:(unsigned long long)arg2 deletesCount:(unsigned long long)arg3 ;
-(unsigned long long)keystrokesCount;
-(unsigned long long)pastesCount;
-(unsigned long long)deletesCount;
@end

