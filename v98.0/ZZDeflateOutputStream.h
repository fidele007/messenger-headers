/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@protocol ZZChannelOutput;
@class NSError;

@interface ZZDeflateOutputStream : NSOutputStream {

	id<ZZChannelOutput> _channelOutput;
	unsigned long long _compressionLevel;
	unsigned long long _status;
	NSError* _error;
	unsigned _crc32;
	z_stream_s* _stream;

}

@property (nonatomic,readonly) unsigned crc32;                         //@synthesize crc32=_crc32 - In the implementation block
@property (nonatomic,readonly) unsigned compressedSize; 
@property (nonatomic,readonly) unsigned uncompressedSize; 
-(id)initWithChannelOutput:(id)arg1 compressionLevel:(unsigned long long)arg2 ;
-(unsigned)uncompressedSize;
-(void)close;
-(void)open;
-(unsigned)compressedSize;
-(unsigned)crc32;
-(unsigned long long)streamStatus;
-(id)streamError;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end
