/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNContactSearchNetworkSourceConfiguration : FBValueObject <NSCopying> {

	unsigned long long _minimumQueryLength;
	unsigned long long _resultLimit;

}

@property (nonatomic,readonly) unsigned long long minimumQueryLength;              //@synthesize minimumQueryLength=_minimumQueryLength - In the implementation block
@property (nonatomic,readonly) unsigned long long resultLimit;                     //@synthesize resultLimit=_resultLimit - In the implementation block
-(id)initWithMinimumQueryLength:(unsigned long long)arg1 resultLimit:(unsigned long long)arg2 ;
-(unsigned long long)resultLimit;
-(unsigned long long)minimumQueryLength;
@end
