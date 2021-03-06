/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <Messenger/FBRtmpSocketDelegate.h>
#import <Messenger/FBVideoStreamingErrorProcessor.h>

@protocol FBRtmpSessionDelegate, FBVideoStreamingLogger, FBThroughputMonitor, FBFlvWriter;
@class NSOutputStream, NSInputStream, NSURL, FBRtmpSocket, NSThread, NSData, NSString;

@interface FBRtmpSession : NSObject <NSStreamDelegate, FBRtmpSocketDelegate, FBVideoStreamingErrorProcessor> {

	NSOutputStream* _outputStream;
	NSInputStream* _inputStream;
	NSURL* _url;
	id<FBRtmpSessionDelegate> _delegate;
	FBRtmpSocket* _rtmpClient;
	FBAudioStreamingConfig _audioConfig;
	FBVideoStreamingConfig _videoConfig;
	SCD_Struct_FB878 _networkConfig;
	FBFLVFrame _ascFrame;
	deque<FBFLVFrame, std::__1::allocator<FBFLVFrame> >* _videoQueue;
	deque<FBFLVFrame, std::__1::allocator<FBFLVFrame> >* _audioQueue;
	atomic<long long> _hadConnection;
	atomic<long long> _queuedFramesCount;
	atomic<long long> _queueSizeInBytes;
	atomic<double> _videoQueueSizeInSeconds;
	atomic<double> _audioQueueSizeInSeconds;
	Stats _audioStats;
	Stats _videoStats;
	mutex _frameQueuesMutex;
	mutex _runLoopMutex;
	NSThread* _networkThread;
	CFRunLoopRef _networkRunLoop;
	CFRunLoopSourceRef _newFrameAvailableSignal;
	CFRunLoopSourceRef _reconnectSignal;
	CFRunLoopSourceRef _sendStreamInterruptedSignal;
	atomic<FBRtmpSessionState> _state;
	atomic<int> _retryCount;
	atomic<CMTime> _lastSentVideoPacketPts;
	atomic<CMTime> _lastSentAudioPacketPts;
	atomic<int> _connectionCounter;
	atomic<CMTime> _baseTimestamp;
	BOOL _firstPacket;
	BOOL _performSpeedTest;
	BOOL _disconnectWithoutSealing;
	mutex _measurementsMutex;
	FBRtmpConnectionMeasurements _measurements;
	unsigned long long _lastMeasuredTotalBytesSent;
	double _lastMeasuredAbsoluteTime;
	NSData* _connectionToken;
	shared_ptr<facebook::livestreaming::RtmpSSLFactory>* _sslFactory;
	shared_ptr<facebook::mobile::xplat::reachability::ReachabilityAnnouncer>* _reachabilityAnnouncer;
	InlineSyncExecutor* _executor;
	shared_ptr<(anonymous namespace)::StreamingReachabilityEvent>* _reachabilityEvent;
	BandwidthMonitorRef _bandwidthMonitor;
	id<FBVideoStreamingLogger> _logger;
	id<FBThroughputMonitor> _throughputMonitor;
	id<FBFlvWriter> _flvWriter;

}

@property (assign,nonatomic,__weak) id<FBRtmpSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBThroughputMonitor> throughputMonitor;              //@synthesize throughputMonitor=_throughputMonitor - In the implementation block
@property (nonatomic,retain) id<FBFlvWriter> flvWriter;                              //@synthesize flvWriter=_flvWriter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(int)arg1 from:(int)arg2 ;
-(deque<FBFLVFrame, std::__1::allocator<FBFLVFrame> >*)videoQueue;
-(deque<FBFLVFrame, std::__1::allocator<FBFLVFrame> >*)audioQueue;
-(void)sendFLVFrame:(FBFLVFrame*)arg1 frameType:(unsigned char)arg2 ;
-(void)processError:(id)arg1 ;
-(void)droppedPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg1 withReason:(id)arg2 ;
-(void)dropOldFramesIfNeeded;
-(void)_networkThreadMain:(id)arg1 ;
-(void)_flushFrameQueue:(BOOL)arg1 ;
-(void)sendStreamInterrupted;
-(void)prepareToReconnect;
-(void)reconnectImpl;
-(id)closeRtmpClient;
-(void)closeStreams;
-(id<FBFlvWriter>)flvWriter;
-(void)write:(const FBFLVFrame*)arg1 type:(unsigned char)arg2 ;
-(Either<NSError *, int>*)getNativeSocketFromStream:(CFWriteStreamRef)arg1 ;
-(void)setupRtmpWithExternalSocket:(int)arg1 ;
-(void)rtmpSocketRequireReconnectDueToError:(id)arg1 ;
-(BOOL)writeFLVPacket:(const vector<unsigned char, std::__1::allocator<unsigned char> >*)arg1 packetType:(int)arg2 timestamp:(unsigned)arg3 ;
-(void)performMeasurements:(double)arg1 ;
-(void)tryReconnectAfterError:(id)arg1 ;
-(void)rtmpSocketOnConnectWithSpeedTestStatus:(FBNetworkSpeedTestStatus)arg1 ;
-(void)rtmpSocketOnError:(id)arg1 ;
-(void)rtmpSocket:(id)arg1 completedSpeedTestWithStatus:(FBNetworkSpeedTestStatus)arg2 ;
-(id)initWithURL:(id)arg1 base64ConnectionToken:(id)arg2 audioConfig:(FBAudioStreamingConfig)arg3 videoConfig:(FBVideoStreamingConfig)arg4 networkConfig:(SCD_Struct_FB878)arg5 sslFactory:(shared_ptr<facebook::livestreaming::RtmpSSLFactory>*)arg6 reachabilityAnnouncer:(shared_ptr<facebook::mobile::xplat::reachability::ReachabilityAnnouncer>*)arg7 bandwidthMonitor:(BandwidthMonitorRef)arg8 delegate:(id)arg9 logger:(id)arg10 ;
-(void)setBaseTimestamp:(SCD_Struct_FB33)arg1 ;
-(SCD_Struct_FB33)baseTimestamp;
-(SCD_Struct_FB33)lastSentVideoPacketPts;
-(SCD_Struct_FB33)lastSentAudioPacketPts;
-(unsigned long long)queueSizeInBytes;
-(double)videoQueueSizeInSeconds;
-(double)audioQueueSizeInSeconds;
-(void)disconnectWithoutSealing:(BOOL)arg1 ;
-(void)sendStreamInterruptedImpl;
-(id<FBThroughputMonitor>)throughputMonitor;
-(void)setThroughputMonitor:(id<FBThroughputMonitor>)arg1 ;
-(void)setFlvWriter:(id<FBFlvWriter>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBRtmpSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<FBRtmpSessionDelegate>)delegate;
-(void)connect;
-(void)failWithError:(id)arg1 ;
-(void)_reconnect;
-(FBRtmpConnectionMeasurements)measurements;
@end

