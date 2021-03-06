/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, FBFunnelConfig, NSArray;

@interface FBFunnel : NSObject {

	NSMutableArray* _currentTags;
	NSMutableArray* _currentActions;
	NSString* _funnelName;
	FBFunnelConfig* _funnelConfig;
	double _startTime;
	double _lastActiveTime;
	unsigned long long _samplingFreq;

}

@property (nonatomic,copy,readonly) NSString * funnelName;                 //@synthesize funnelName=_funnelName - In the implementation block
@property (nonatomic,retain) FBFunnelConfig * funnelConfig;                //@synthesize funnelConfig=_funnelConfig - In the implementation block
@property (nonatomic,readonly) double startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double lastActiveTime;                      //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplingFreq;              //@synthesize samplingFreq=_samplingFreq - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tags; 
@property (nonatomic,copy,readonly) NSArray * actions; 
-(double)lastActiveTime;
-(NSString *)funnelName;
-(id)initWithFunnelName:(id)arg1 ;
-(void)setSamplingFreq:(unsigned long long)arg1 ;
-(void)setFunnelConfig:(FBFunnelConfig *)arg1 ;
-(unsigned long long)samplingFreq;
-(FBFunnelConfig *)funnelConfig;
-(id)initWithFunnelName:(id)arg1 funnelConfig:(id)arg2 startTime:(double)arg3 lastActiveTime:(double)arg4 samplingFreqency:(unsigned long long)arg5 tags:(id)arg6 actions:(id)arg7 ;
-(id)pseudoCopy;
-(NSArray *)actions;
-(void)start;
-(NSArray *)tags;
-(void)addAction:(id)arg1 ;
-(double)startTime;
-(void)addTag:(id)arg1 ;
@end

