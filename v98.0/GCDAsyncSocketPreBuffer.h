/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GCDAsyncSocketPreBuffer : NSObject {

	char* preBuffer;
	unsigned long long preBufferSize;
	char* readPointer;
	char* writePointer;

}
-(char*)writeBuffer;
-(void)ensureCapacityForWrite:(unsigned long long)arg1 ;
-(void)getReadBuffer:(char**)arg1 availableBytes:(unsigned long long*)arg2 ;
-(void)didRead:(unsigned long long)arg1 ;
-(void)getWriteBuffer:(char**)arg1 availableSpace:(unsigned long long*)arg2 ;
-(void)didWrite:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)reset;
-(unsigned long long)availableSpace;
-(char*)readBuffer;
-(unsigned long long)availableBytes;
@end
