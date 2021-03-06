/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSMutableArray, NSString, NSDate, FBAnalytics;

@interface FBWebRedirectTracker : NSObject {

	NSTimer* _redirectChainLoggingTimer;
	NSMutableArray* _redirectChain;
	NSString* _originalUrl;
	BOOL _hasDataToLog;
	NSDate* _startDate;
	FBAnalytics* _analytics;
	BOOL _recording;

}

@property (getter=isRecording,nonatomic,readonly) BOOL recording;              //@synthesize recording=_recording - In the implementation block
-(void)_logRedirectChain;
-(id)_normalizeHost:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 userSession:(id)arg2 ;
-(void)recordURL:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)stopRecording;
-(BOOL)isRecording;
@end

