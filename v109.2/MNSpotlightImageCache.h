/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSpotlightImageCaching.h>

@protocol OS_dispatch_queue;
@class FBCache, FBDiskCache, NSObject, NSString;

@interface MNSpotlightImageCache : NSObject <MNSpotlightImageCaching> {

	FBCache* _cache;
	FBDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)imageForGroupThreadWithParticipants:(id)arg1 callbackQueue:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)setImage:(id)arg1 forGroupThreadWithParticipants:(id)arg2 ;
-(void)_loadImageFromDiskCacheWithKey:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_loadImageFromInMemoryCacheWithKey:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_setImage:(id)arg1 forKey:(id)arg2 writeToDiskCache:(BOOL)arg3 ;
@end

