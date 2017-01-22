/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface FBEventHandler : NSObject {

	id<NSObject> _target;
	SEL _selectorToPerformOnEvent;

}

@property (nonatomic,__weak,readonly) id<NSObject> target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selectorToPerformOnEvent;              //@synthesize selectorToPerformOnEvent=_selectorToPerformOnEvent - In the implementation block
-(BOOL)isEqualToEventHandler:(id)arg1 ;
-(SEL)selectorToPerformOnEvent;
-(id)initWithTarget:(id)arg1 selectorToPerformOnEvent:(SEL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)target;
@end
