/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBAnalyticsCounter : NSObject {

	unsigned long long _count;
	NSString* _eventName;
	double _sum;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
-(id)initWithValue:(double)arg1 eventName:(id)arg2 ;
-(id)jsonObject;
-(void)addValue:(double)arg1 ;
-(NSString *)eventName;
@end
