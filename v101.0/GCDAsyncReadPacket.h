/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface GCDAsyncReadPacket : NSObject {

	NSMutableData* buffer;
	unsigned long long startOffset;
	unsigned long long bytesDone;
	unsigned long long maxLength;
	double timeout;
	unsigned long long readLength;
	NSData* term;
	BOOL bufferOwner;
	unsigned long long originalBufferLength;
	long long tag;

}
-(id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7 ;
-(void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1 ;
-(unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL*)arg2 ;
-(long long)searchForTermAfterPreBuffering:(long long)arg1 ;
@end

