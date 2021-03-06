/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAccessStatisticsDelegate;
#import <Messenger/Messenger-Structs.h>
@interface FBAccessStatistics : NSObject {

	mutex _accessMutex;
	BOOL _active;
	double _startTime;
	double _endTime;
	id<FBAccessStatisticsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAccessStatisticsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)enableAccessStatistics;
+(id)sharedInstance;
-(void)incrementForEvent:(unsigned long long)arg1 ;
-(id)markStartForEvent:(unsigned long long)arg1 identifierBlock:(/*^block*/id)arg2 ;
-(void)markStopForEvent:(unsigned long long)arg1 context:(id)arg2 ;
-(void)startCollection;
-(void)stopCollection;
-(void)addDurationEvent:(long long)arg1 endTime:(long long)arg2 duration:(double)arg3 forEvent:(unsigned long long)arg4 identifierBlock:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<FBAccessStatisticsDelegate>)arg1 ;
-(id<FBAccessStatisticsDelegate>)delegate;
@end

