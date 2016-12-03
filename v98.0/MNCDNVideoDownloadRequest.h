/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface MNCDNVideoDownloadRequest : FBValueObject <NSCopying> {

	NSString* _videoId;
	NSString* _cacheKey;
	unsigned long long _lengthInBytes;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy,readonly) NSString * videoId;                                 //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheKey;                                //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthInBytes;                        //@synthesize lengthInBytes=_lengthInBytes - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) id successBlock;                                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                         //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                        //@synthesize progressBlock=_progressBlock - In the implementation block
-(id)successBlock;
-(NSString *)videoId;
-(id)initWithVideoId:(id)arg1 cacheKey:(id)arg2 lengthInBytes:(unsigned long long)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 progressBlock:(/*^block*/id)arg7 ;
-(unsigned long long)lengthInBytes;
-(NSString *)cacheKey;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)progressBlock;
-(id)failureBlock;
@end

