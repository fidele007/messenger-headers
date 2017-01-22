/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject;

@interface FBCameraCaptureImageAction : NSObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CGSize _previewSize;

}

@property (nonatomic,readonly) CGSize previewSize;                                      //@synthesize previewSize=_previewSize - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(id)initWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 previewSize:(CGSize)arg3 ;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(CGSize)previewSize;
@end
