/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@interface FBNativeArticleLoggingIntentTarget : FBIntentTarget {

	unsigned long long _eventName;

}

@property (nonatomic,readonly) unsigned long long eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)loggingTargetWithName:(unsigned long long)arg1 ;
-(id)initWithEventName:(unsigned long long)arg1 ;
-(unsigned long long)eventName;
@end

