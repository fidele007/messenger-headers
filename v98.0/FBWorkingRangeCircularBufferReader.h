/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, FBWorkingRangeCircularBufferReaderDelegate;
@class FBWorkingRangeCircularBuffer, NSObject;

@interface FBWorkingRangeCircularBufferReader : NSObject {

	FBWorkingRangeCircularBuffer* _circularBuffer;
	/*^block*/id _objectReader;
	BOOL _paused;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBWorkingRangeCircularBufferReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWorkingRangeCircularBufferReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCircularBuffer:(id)arg1 withObjectReader:(/*^block*/id)arg2 ;
-(void)_readObjects;
-(void)setDelegate:(id<FBWorkingRangeCircularBufferReaderDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWorkingRangeCircularBufferReaderDelegate>)delegate;
-(void)resume;
-(void)pause;
@end

