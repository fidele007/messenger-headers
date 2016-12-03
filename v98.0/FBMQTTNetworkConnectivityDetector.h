/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTNetworkDetectDelegate;
@class NSURLSession, NSURL, NSURLSessionDataTask;

@interface FBMQTTNetworkConnectivityDetector : NSObject {

	NSURLSession* _session;
	unsigned long long _lastDetectionTime;
	unsigned _reachabilityFlags;
	NSURL* _fbURL;
	NSURLSessionDataTask* _currentOutgoingDetect;
	id<FBMQTTNetworkDetectDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMQTTNetworkDetectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_detectIfNeeded:(id)arg1 appForeground:(BOOL)arg2 ;
-(void)_detect:(id)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 forConnErr:(id)arg3 ;
-(id)_constructResult:(BOOL)arg1 error:(id)arg2 startTS:(double)arg3 ;
-(void)_logDetectionResultIfNeeded:(id)arg1 detectResult:(id)arg2 ;
-(void)onConnectFailure:(id)arg1 appForeground:(BOOL)arg2 ;
-(void)onReachabilityChanged:(unsigned)arg1 ;
-(void)setDelegate:(id<FBMQTTNetworkDetectDelegate>)arg1 ;
-(id)init;
-(id<FBMQTTNetworkDetectDelegate>)delegate;
@end

