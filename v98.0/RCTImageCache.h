/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTImageCache.h>

@protocol RCTImageCache <NSObject>
@required
-(id)imageForUrl:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 responseDate:(id)arg5;
-(void)addImageToCache:(id)arg1 URL:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 resizeMode:(long long)arg5 responseDate:(id)arg6;

@end


@class NSOperationQueue, NSCache, NSString;

@interface RCTImageCache : NSObject <RCTImageCache> {

	NSOperationQueue* _imageDecodeQueue;
	NSCache* _decodedImageCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addImageToCache:(id)arg1 forKey:(id)arg2 ;
-(id)imageForUrl:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 responseDate:(id)arg5 ;
-(void)addImageToCache:(id)arg1 URL:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 resizeMode:(long long)arg5 responseDate:(id)arg6 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
@end

