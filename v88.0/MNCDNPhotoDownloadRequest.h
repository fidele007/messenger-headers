/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSObject;

@interface MNCDNPhotoDownloadRequest : FBValueObject <NSCopying> {

	BOOL _disableStreamingDownload;
	NSString* _photoId;
	unsigned long long _size;
	NSSet* _analyticsTags;
	unsigned long long _imageFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,copy,readonly) NSString * photoId;                                 //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSSet * analyticsTags;                              //@synthesize analyticsTags=_analyticsTags - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;                            //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) BOOL disableStreamingDownload;                           //@synthesize disableStreamingDownload=_disableStreamingDownload - In the implementation block
@property (nonatomic,readonly) id successBlock;                                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                         //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)successBlock;
-(id)initWithPhotoId:(id)arg1 size:(unsigned long long)arg2 analyticsTags:(id)arg3 imageFlag:(unsigned long long)arg4 callbackQueue:(id)arg5 disableStreamingDownload:(BOOL)arg6 successBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8 ;
-(unsigned long long)imageFlag;
-(NSSet *)analyticsTags;
-(BOOL)disableStreamingDownload;
-(unsigned long long)size;
-(NSString *)photoId;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)failureBlock;
@end

