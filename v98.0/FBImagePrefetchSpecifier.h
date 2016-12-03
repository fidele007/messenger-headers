/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, FBScenePath;

@interface FBImagePrefetchSpecifier : NSObject {

	BOOL _useImageStreamer;
	BOOL _prefetchOnCellular;
	NSURL* _url;
	NSString* _module;
	unsigned long long _desiredImageFlag;
	FBScenePath* _scenePath;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                           //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) BOOL useImageStreamer;                            //@synthesize useImageStreamer=_useImageStreamer - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                          //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) BOOL prefetchOnCellular;                          //@synthesize prefetchOnCellular=_prefetchOnCellular - In the implementation block
-(NSString *)module;
-(FBScenePath *)scenePath;
-(BOOL)useImageStreamer;
-(unsigned long long)desiredImageFlag;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 useImageStreamer:(BOOL)arg4 desiredImageFlag:(unsigned long long)arg5 prefetchOnCellular:(BOOL)arg6 ;
-(BOOL)prefetchOnCellular;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 prefetchOnCellular:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
@end

