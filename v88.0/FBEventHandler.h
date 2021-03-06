/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

