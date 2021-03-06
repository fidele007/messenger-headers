/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TTransport.h>

@protocol TTransport;
@class NSMutableData, NSString;

@interface TFramedTransport : NSObject <TTransport> {

	id<TTransport> mTransport;
	NSMutableData* writeBuffer;
	NSMutableData* readBuffer;
	unsigned long long readOffset;
	unsigned char dummy_header[4];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)readFrame;
-(void)dealloc;
-(void)flush;
-(id)initWithTransport:(id)arg1 ;
@end

