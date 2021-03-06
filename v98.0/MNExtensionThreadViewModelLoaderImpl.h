/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNExtensionThreadViewModelLoading.h>

@protocol MNAuthenticationManager, OS_dispatch_queue;
@class MNThreadViewModelLoader, MNThreadImageManager, MNAppMessageAttachmentUtils, NSObject, NSString;

@interface MNExtensionThreadViewModelLoaderImpl : NSObject <MNExtensionThreadViewModelLoading> {

	MNThreadViewModelLoader* _threadViewModelLoader;
	id<MNAuthenticationManager> _authenticationManager;
	MNThreadImageManager* _threadImageManager;
	MNAppMessageAttachmentUtils* _attachmentUtils;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadExtensionThreadViewModelForThreadKeys:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithThreadViewModelLoader:(id)arg1 authenticationManager:(id)arg2 threadImageManager:(id)arg3 attachmentUtils:(id)arg4 queue:(id)arg5 ;
-(void)_didLoadSyncedThreadKey:(id)arg1 withThreadViewModel:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

