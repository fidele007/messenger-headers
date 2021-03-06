/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBProgressViewUpdatePolicy.h>

@class NSString;

@interface FBFixedTimeUniformProgressViewUpdatePolicy : NSObject <FBProgressViewUpdatePolicy> {

	double _totalTime;
	double _updateInterval;
	BOOL _animated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id completionBlock; 
-(id)initWithTotalTime:(double)arg1 updateInterval:(double)arg2 animated:(BOOL)arg3 ;
-(float)incrementForCurrentProgress:(double)arg1 ;
-(BOOL)animated;
-(double)updateInterval;
@end

