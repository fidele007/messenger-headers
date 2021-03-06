/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBIntentHandler;
@class NSMutableSet, NSObject;

@interface FBNativeArticleBlockVPVLogger : NSObject {

	NSMutableSet* _sentVPVCache;
	NSObject*<OS_dispatch_queue> _workingQueue;
	id<FBIntentHandler> _intentHandler;

}

@property (assign,nonatomic,__weak) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(id<FBIntentHandler>)intentHandler;
-(void)_logVPVIfNecessaryForStoryBlock:(id)arg1 ;
-(void)_emptyVPVCache;
-(void)logVPVForStoryBlockIfNecessary:(id)arg1 ;
-(id)init;
-(void)reset;
@end

