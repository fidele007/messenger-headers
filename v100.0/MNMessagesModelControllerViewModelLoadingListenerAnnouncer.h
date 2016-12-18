/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNMessagesModelControllerViewModelLoadingListener.h>

@class NSString;

@interface MNMessagesModelControllerViewModelLoadingListenerAnnouncer : FBAnnouncerBase <MNMessagesModelControllerViewModelLoadingListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messagesModelController:(id)arg1 didBeginThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)messagesModelController:(id)arg1 didBeginLongOperationForThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)messagesModelController:(id)arg1 didFinishThreadViewModelLoadingWithRequest:(unsigned long long)arg2 threadViewModel:(id)arg3 ;
-(void)messagesModelController:(id)arg1 didFinishPropagatingThreadViewModelLoadingWithRequest:(unsigned long long)arg2 threadViewModel:(id)arg3 ;
-(void)messagesModelController:(id)arg1 didFailThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)messagesModelController:(id)arg1 didCancelThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
