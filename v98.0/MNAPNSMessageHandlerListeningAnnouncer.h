/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNAPNSMessageHandlerListening.h>

@class NSString;

@interface MNAPNSMessageHandlerListeningAnnouncer : FBAnnouncerBase <MNAPNSMessageHandlerListening>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willHandleAPNSMessage:(id)arg1 fromSource:(long long)arg2 ;
-(void)didHandleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 ;
-(void)didFailHandlingAPNSMessage:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
