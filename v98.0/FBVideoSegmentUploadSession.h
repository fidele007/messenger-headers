/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBMediaUploadListener.h>

@protocol FBPersistentKeyValueStoreProtocol, FBNetworkDispatch, FBMediaUploadJob, FBVideoSegmentUploadSessionLogger, FBVideoSegmentUploadSessionDelegate;
@class FBVideoUploadSegmentDetail, NSString, FBMediaSimpleUploadHandler, FBNetworkerRequest;

@interface FBVideoSegmentUploadSession : NSObject <FBNetworkerRequestDelegate, FBMediaUploadListener> {

	FBVideoUploadSegmentDetail* _segmentDetail;
	NSString* _uploadSessionID;
	NSString* _targetID;
	NSString* _waterfallID;
	NSString* _userFBID;
	NSString* _videoHandle;
	id<FBPersistentKeyValueStoreProtocol> _pkvStore;
	id<FBNetworkDispatch> _networkDispatcher;
	FBMediaSimpleUploadHandler* _uploadHandler;
	FBNetworkerRequest* _uploadRequest;
	id<FBMediaUploadJob> _uploadJob;
	double _progress;
	unsigned long long _state;
	id<FBVideoSegmentUploadSessionLogger> _logger;
	BOOL _useFileStreaming;
	BOOL _useDataCenterRouting;
	id<FBVideoSegmentUploadSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoSegmentUploadSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBVideoUploadSegmentDetail * segmentDetail;                         //@synthesize segmentDetail=_segmentDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(void)cancelUpload;
-(BOOL)_isAtTerminalState;
-(void)_startRUploadRequestWithFileKey:(id)arg1 ;
-(void)_startRUploadRequestWithFileURL:(id)arg1 ;
-(void)_startRUploadRequestWithContentSource:(id)arg1 jobID:(id)arg2 ;
-(void)_startGraphUploadRequest;
-(id)initWithSegment:(id)arg1 uploadSessionID:(id)arg2 targetID:(id)arg3 waterfallID:(id)arg4 userFBID:(id)arg5 pkvStore:(id)arg6 uploadServiceHandler:(id)arg7 networkDispatcher:(id)arg8 delegate:(id)arg9 logger:(id)arg10 useFileStreaming:(BOOL)arg11 useDataCenterRouting:(BOOL)arg12 ;
-(FBVideoUploadSegmentDetail *)segmentDetail;
-(void)setDelegate:(id<FBVideoSegmentUploadSessionDelegate>)arg1 ;
-(id<FBVideoSegmentUploadSessionDelegate>)delegate;
-(void)startUpload;
@end

