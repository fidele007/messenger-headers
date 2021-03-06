/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEventDispatcherProtocol.h>

@class NSMutableDictionary, NSString;

@interface MQEventDispatcher : NSObject <MQEventDispatcherProtocol> {

	NSMutableDictionary* _eventListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nextDispatcher;
-(void)_bubbleEvent:(id)arg1 ;
-(BOOL)_invokeEvent:(id)arg1 ;
-(BOOL)hasEventListener:(id)arg1 ;
-(void)removeEventListeners:(id)arg1 ;
-(void)addEventListener:(id)arg1 forType:(id)arg2 ;
-(void)removeEventListener:(id)arg1 forType:(id)arg2 ;
-(void)dispatchEvent:(id)arg1 ;
-(id)init;
@end

