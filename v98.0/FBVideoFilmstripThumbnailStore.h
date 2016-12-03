/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoFilmstripVideoSourceProtocol.h>

@protocol FBVideoFilmstripThumbnailStoreSource;
@class NSMutableDictionary, FBCache, UIImage, NSString;

@interface FBVideoFilmstripThumbnailStore : NSObject <FBVideoFilmstripVideoSourceProtocol> {

	NSMutableDictionary* _frameToCancelBlockMap;
	NSMutableDictionary* _frameToCompletionBlockSetMap;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _frameIndices;
	FBCache* _frameImageCache;
	id<FBVideoFilmstripThumbnailStoreSource> _source;
	double _framerate;
	UIImage* _placeholderImage;
	SCD_Struct_FB26 _timeRange;

}

@property (assign,nonatomic,__weak) id<FBVideoFilmstripThumbnailStoreSource> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB26 timeRange;                                           //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) double framerate;                                                    //@synthesize framerate=_framerate - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                          //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) unsigned long long frameCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)frameImageAtIndex:(unsigned long long)arg1 placeholder:(BOOL*)arg2 ;
-(/*^block*/id)requestImageForFrameAtIndex:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)invalidateStore;
-(SCD_Struct_FB25)_timeForFrameIndex:(unsigned long long)arg1 ;
-(void)_handleFetchOfFrameAtIndex:(unsigned long long)arg1 frameKey:(id)arg2 image:(id)arg3 ;
-(void)_handleCancelOfFrameFetchAtIndex:(unsigned long long)arg1 frameKey:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setSource:(id<FBVideoFilmstripThumbnailStoreSource>)arg1 ;
-(id<FBVideoFilmstripThumbnailStoreSource>)source;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(unsigned long long)frameCount;
-(void)resetCache;
-(SCD_Struct_FB26)timeRange;
-(void)setTimeRange:(SCD_Struct_FB26)arg1 ;
-(double)framerate;
-(void)setFramerate:(double)arg1 ;
@end

