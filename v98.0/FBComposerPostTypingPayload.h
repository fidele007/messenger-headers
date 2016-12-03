/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerPostTypingPayload : FBValueObject <NSCopying> {

	unsigned long long _keystrokesCount;
	unsigned long long _pastesCount;
	unsigned long long _deletesCount;

}

@property (nonatomic,readonly) unsigned long long keystrokesCount;              //@synthesize keystrokesCount=_keystrokesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long pastesCount;                  //@synthesize pastesCount=_pastesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long deletesCount;                 //@synthesize deletesCount=_deletesCount - In the implementation block
-(unsigned long long)keystrokesCount;
-(unsigned long long)deletesCount;
-(unsigned long long)pastesCount;
-(id)initWithKeystrokesCount:(unsigned long long)arg1 pastesCount:(unsigned long long)arg2 deletesCount:(unsigned long long)arg3 ;
@end

