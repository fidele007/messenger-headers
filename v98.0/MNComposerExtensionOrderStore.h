/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerExtensionOrderPersisting, OS_dispatch_queue;
@class MNComposerExtensionOrder, NSObject;

@interface MNComposerExtensionOrderStore : NSObject {

	MNComposerExtensionOrder* _extensionOrder;
	id<MNComposerExtensionOrderPersisting> _extensionOrderPersister;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	BOOL _extensionOrderIsFetched;

}
-(id)initWithExtensionOrderPersister:(id)arg1 ;
-(void)persistComposerExtensionOrder:(id)arg1 ;
-(void)loadComposerExtensionOrderWithCompletion:(/*^block*/id)arg1 ;
@end
