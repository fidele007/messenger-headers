/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPrefetchVideoDownloader;

@interface FBVideoPrefetchRequest : NSObject {

	BOOL _inProgress;
	BOOL _useQueue;
	BOOL _prefetchedFirstChunk;
	FBPrefetchVideoDownloader* _prefetcher;

}

@property (nonatomic,readonly) FBPrefetchVideoDownloader * prefetcher;              //@synthesize prefetcher=_prefetcher - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                       //@synthesize inProgress=_inProgress - In the implementation block
@property (nonatomic,readonly) BOOL useQueue;                                       //@synthesize useQueue=_useQueue - In the implementation block
@property (assign,nonatomic) BOOL prefetchedFirstChunk;                             //@synthesize prefetchedFirstChunk=_prefetchedFirstChunk - In the implementation block
-(id)initWithPrefetcher:(id)arg1 useQueue:(BOOL)arg2 ;
-(FBPrefetchVideoDownloader *)prefetcher;
-(BOOL)useQueue;
-(BOOL)prefetchedFirstChunk;
-(void)setPrefetchedFirstChunk:(BOOL)arg1 ;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end

