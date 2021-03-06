/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBAThriftAnalyticsDeviceStatusCPULoadAvg, FBAThriftAnalyticsDeviceStatusCPUTime, NSString;

@interface FBAThriftAnalyticsDeviceStatusCPUInfo : TBaseStruct <TBase, NSCoding> {

	FBAThriftAnalyticsDeviceStatusCPULoadAvg* __thrift_loadAvg;
	FBAThriftAnalyticsDeviceStatusCPUTime* __thrift_cpuTime;
	BOOL __thrift_loadAvg_set;
	BOOL __thrift_cpuTime_set;

}

@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusCPULoadAvg * loadAvg; 
@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusCPUTime * cpuTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)initWithLoadAvg:(id)arg1 cpuTime:(id)arg2 ;
-(id)toDict;
-(void)setLoadAvg:(FBAThriftAnalyticsDeviceStatusCPULoadAvg *)arg1 ;
-(void)setCpuTime:(FBAThriftAnalyticsDeviceStatusCPUTime *)arg1 ;
-(FBAThriftAnalyticsDeviceStatusCPULoadAvg *)loadAvg;
-(BOOL)loadAvgIsSet;
-(void)unsetLoadAvg;
-(FBAThriftAnalyticsDeviceStatusCPUTime *)cpuTime;
-(BOOL)cpuTimeIsSet;
-(void)unsetCpuTime;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

