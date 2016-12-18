/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBEventEmitter : NSObject {

	NSMutableDictionary* _events;

}
-(void)addTarget:(id)arg1 forEvent:(id)arg2 selectorToPerformOnEvent:(SEL)arg3 ;
-(void)emitEvent:(id)arg1 withObject:(id)arg2 ;
-(void)emitEvent:(id)arg1 ;
-(void)emitEvent:(id)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)removeTarget:(id)arg1 forEvent:(id)arg2 selectorToPerformOnEvent:(SEL)arg3 ;
-(id)init;
@end
