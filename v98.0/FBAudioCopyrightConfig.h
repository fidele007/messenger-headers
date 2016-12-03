/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBAudioCopyrightConfig : FBValueObject <NSCopying> {

	double _bufferDuration;
	unsigned long long _bufferSize;

}

@property (nonatomic,readonly) double bufferDuration;                      //@synthesize bufferDuration=_bufferDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferSize;              //@synthesize bufferSize=_bufferSize - In the implementation block
-(id)initWithBufferDuration:(double)arg1 bufferSize:(unsigned long long)arg2 ;
-(double)bufferDuration;
-(unsigned long long)bufferSize;
@end

