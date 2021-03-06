/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLoomManager.h>
#import <FBSharedFramework/FBNetworkerRequestDelegate.h>
#import <Messenger/FBLoomConfigurable.h>

@protocol OS_dispatch_queue, FBLoomUploadManagerDelegate, FBLoomNetworkingSource;
@class NSURL, NSObject, NSNumber, NSDate, NSString;

@interface FBLoomUploadManager : NSObject <FBLoomManager, FBNetworkerRequestDelegate, FBLoomConfigurable> {

	NSURL* _directoryUrl;
	unsigned long long _uploadsInFlight;
	NSObject*<OS_dispatch_queue> _queue;
	mutex _mutex;
	NSNumber* _maximumBytesUploadedPerTimeframe;
	NSNumber* _timeframeDuration;
	id<FBLoomUploadManagerDelegate> _delegate;
	id<FBLoomNetworkingSource> _source;

}

@property (retain) NSNumber * maximumBytesUploadedPerTimeframe; 
@property (retain) NSNumber * timeframeDuration; 
@property (retain) NSDate * timeframeStart; 
@property (assign) unsigned long long bytesUploadedInTimeframe; 
@property (__weak) id<FBLoomUploadManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<FBLoomNetworkingSource> source;                        //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyForConfiguration;
-(void)updateConfigurationWithDictionary:(id)arg1 ;
-(id)initWithUploadDirectory:(id)arg1 ;
-(void)attemptTraceUploads;
-(BOOL)deductBandwidthToUploadFile:(id)arg1 ;
-(void)recordUploadAction:(short)arg1 ;
-(void)setMaximumBytesUploadedPerTimeframe:(NSNumber *)arg1 ;
-(void)setTimeframeDuration:(NSNumber *)arg1 ;
-(NSDate *)timeframeStart;
-(NSNumber *)timeframeDuration;
-(unsigned long long)bytesUploadedInTimeframe;
-(void)setTimeframeStart:(NSDate *)arg1 ;
-(NSNumber *)maximumBytesUploadedPerTimeframe;
-(void)setBytesUploadedInTimeframe:(unsigned long long)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)setDelegate:(id<FBLoomUploadManagerDelegate>)arg1 ;
-(id<FBLoomUploadManagerDelegate>)delegate;
-(void)setSource:(id<FBLoomNetworkingSource>)arg1 ;
-(id<FBLoomNetworkingSource>)source;
-(id)delegateQueue;
-(void)invalidateConfiguration;
@end

