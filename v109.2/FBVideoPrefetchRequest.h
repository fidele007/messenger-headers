/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPrefetchVideoDownloader;

@interface FBVideoPrefetchRequest : NSObject {

	BOOL _inProgress;
	BOOL _prefetchedFirstChunk;
	FBPrefetchVideoDownloader* _prefetcher;

}

@property (nonatomic,readonly) FBPrefetchVideoDownloader * prefetcher;              //@synthesize prefetcher=_prefetcher - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                       //@synthesize inProgress=_inProgress - In the implementation block
@property (assign,nonatomic) BOOL prefetchedFirstChunk;                             //@synthesize prefetchedFirstChunk=_prefetchedFirstChunk - In the implementation block
-(id)initWithPrefetcher:(id)arg1 ;
-(FBPrefetchVideoDownloader *)prefetcher;
-(BOOL)prefetchedFirstChunk;
-(void)setPrefetchedFirstChunk:(BOOL)arg1 ;
-(void)setInProgress:(BOOL)arg1 ;
-(BOOL)inProgress;
@end

