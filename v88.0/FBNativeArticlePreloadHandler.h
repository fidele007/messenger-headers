/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeArticlePreloadHandlerDelegate, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSSet;

@interface FBNativeArticlePreloadHandler : NSObject {

	id<FBNativeArticlePreloadHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workingQueue;
	NSSet* _blockControllersInPreloadViewport;
	CGRect _preloadViewport;

}

@property (nonatomic,copy) NSSet * blockControllersInPreloadViewport;              //@synthesize blockControllersInPreloadViewport=_blockControllersInPreloadViewport - In the implementation block
@property (assign,nonatomic) CGRect preloadViewport;                               //@synthesize preloadViewport=_preloadViewport - In the implementation block
-(id)initWithDelegate:(id)arg1 workingQueue:(id)arg2 ;
-(CGRect)preloadViewport;
-(void)setPreloadViewport:(CGRect)arg1 ;
-(void)_updateStateForPreloadViewport:(CGRect)arg1 ;
-(void)setBlockControllersInPreloadViewport:(NSSet *)arg1 ;
-(void)_notifyBlockControllers:(id)arg1 forPreloadViewportTransition:(unsigned long long)arg2 ;
-(NSSet *)blockControllersInPreloadViewport;
@end

