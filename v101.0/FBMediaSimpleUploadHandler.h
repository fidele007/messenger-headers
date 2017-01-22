/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBMediaUploadJobFactory, FBNetworkDispatch;
@class NSObject;

@interface FBMediaSimpleUploadHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBMediaUploadJobFactory> _uploadJobFactory;
	id<FBNetworkDispatch> _networkDispatcher;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)startUploadJobWithContentSource:(id)arg1 config:(id)arg2 listener:(id)arg3 ;
-(void)cancelUploadJob:(id)arg1 ;
-(id)initWithNetworkDispatcher:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
