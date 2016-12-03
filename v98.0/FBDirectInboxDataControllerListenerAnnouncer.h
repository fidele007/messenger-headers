/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBDirectInboxDataControllerListener.h>

@class NSString;

@interface FBDirectInboxDataControllerListenerAnnouncer : FBAnnouncerBase <FBDirectInboxDataControllerListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inboxDataController:(id)arg1 didUpdateDirectInboxBuckets:(id)arg2 ;
-(void)inboxDataController:(id)arg1 didUpdateToBadgeCount:(unsigned long long)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

