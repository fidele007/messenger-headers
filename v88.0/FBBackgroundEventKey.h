/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBBackgroundEventKey : FBValueObject <NSCopying> {

	unsigned long long _eventType;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) unsigned long long eventType;                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 eventIdentifier:(id)arg2 ;
-(unsigned long long)eventType;
-(NSString *)eventIdentifier;
@end

