/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface FBBackgroundActivityInterval : FBValueObject <NSCopying> {

	double _timeSpentInInterval;
	double _timeSpentOnScreen;
	NSDate* _intervalStartTime;
	NSDate* _intervalEndTime;

}

@property (nonatomic,readonly) double timeSpentInInterval;                   //@synthesize timeSpentInInterval=_timeSpentInInterval - In the implementation block
@property (nonatomic,readonly) double timeSpentOnScreen;                     //@synthesize timeSpentOnScreen=_timeSpentOnScreen - In the implementation block
@property (nonatomic,copy,readonly) NSDate * intervalStartTime;              //@synthesize intervalStartTime=_intervalStartTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * intervalEndTime;                //@synthesize intervalEndTime=_intervalEndTime - In the implementation block
-(id)initWithTimeSpentInInterval:(double)arg1 timeSpentOnScreen:(double)arg2 intervalStartTime:(id)arg3 intervalEndTime:(id)arg4 ;
-(double)timeSpentInInterval;
-(double)timeSpentOnScreen;
-(NSDate *)intervalStartTime;
-(NSDate *)intervalEndTime;
@end

