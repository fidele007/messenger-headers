/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTranscodingHandler.h>

@protocol OS_dispatch_queue, FBTranscodingHandlerDelegate;
@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetReader, AVAssetReaderTrackOutput, NSObject, NSString;

@interface FBPixelBufferTranscodingHandler : NSObject <FBTranscodingHandler> {

	AVAssetWriter* _writer;
	AVAssetWriterInput* _writerInput;
	AVAssetWriterInputPixelBufferAdaptor* _pixelBufferAdaptor;
	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _readerTrackOutput;
	opaqueCMSampleBufferRef _firstSampleBuffer;
	long long _videoOrientation;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _done;
	id<FBTranscodingHandlerDelegate> _delegate;
	SCD_Struct_FB25 _presentationTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL done;                                                   //@synthesize done=_done - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 presentationTime;                            //@synthesize presentationTime=_presentationTime - In the implementation block
@property (assign,nonatomic,__weak) id<FBTranscodingHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startTranscodingWhenReady;
-(id)initWithAssetWriter:(id)arg1 writerInput:(id)arg2 pixelBufferAdaptor:(id)arg3 assetReader:(id)arg4 readerTrackOutput:(id)arg5 firstSampleBuffer:(opaqueCMSampleBufferRef)arg6 videoOrientation:(long long)arg7 queue:(id)arg8 ;
-(void)setDelegate:(id<FBTranscodingHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBTranscodingHandlerDelegate>)delegate;
-(BOOL)done;
-(SCD_Struct_FB25)presentationTime;
@end

