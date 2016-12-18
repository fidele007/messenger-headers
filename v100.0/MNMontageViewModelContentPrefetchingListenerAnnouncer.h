/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNMontageViewModelContentPrefetchingListener.h>

@class NSString;

@interface MNMontageViewModelContentPrefetchingListenerAnnouncer : FBAnnouncerBase <MNMontageViewModelContentPrefetchingListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)montageViewModelContentPrefetchingProgressed:(id)arg1 completedMessages:(id)arg2 remainingMessages:(id)arg3 ;
-(void)montageViewModelContentPrefetchingCompleted:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
