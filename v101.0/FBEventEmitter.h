/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

