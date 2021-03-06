/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSDictionary;

@interface FBBackgroundTimeState : FBValueObject <NSCopying, NSCoding> {

	NSDate* _dateStateBegan;
	double _backgroundTimeSpent;
	double _activeTimeSpent;
	double _inactiveTimeSpent;
	double _timeContributionFromAPNS;
	double _timeContributionFromBGTasks;
	double _timeContributionFromBGFetch;
	double _timeContributionFromBGLocation;
	double _timeContributionFromBGURLSession;
	double _timeContributionFromAudio;
	double _timeContributionFromPushKit;
	double _timeContributionFromUnknown;
	NSDictionary* _pushKitTypeToTimeMap;
	NSDictionary* _backgroundTaskNameToTimeMap;
	NSDictionary* _backgroundTaskNameToExpireCountMap;
	long long _foregroundColdStarts;
	long long _backgroundColdStarts;

}

@property (nonatomic,copy,readonly) NSDate * dateStateBegan;                                        //@synthesize dateStateBegan=_dateStateBegan - In the implementation block
@property (nonatomic,readonly) double backgroundTimeSpent;                                          //@synthesize backgroundTimeSpent=_backgroundTimeSpent - In the implementation block
@property (nonatomic,readonly) double activeTimeSpent;                                              //@synthesize activeTimeSpent=_activeTimeSpent - In the implementation block
@property (nonatomic,readonly) double inactiveTimeSpent;                                            //@synthesize inactiveTimeSpent=_inactiveTimeSpent - In the implementation block
@property (nonatomic,readonly) double timeContributionFromAPNS;                                     //@synthesize timeContributionFromAPNS=_timeContributionFromAPNS - In the implementation block
@property (nonatomic,readonly) double timeContributionFromBGTasks;                                  //@synthesize timeContributionFromBGTasks=_timeContributionFromBGTasks - In the implementation block
@property (nonatomic,readonly) double timeContributionFromBGFetch;                                  //@synthesize timeContributionFromBGFetch=_timeContributionFromBGFetch - In the implementation block
@property (nonatomic,readonly) double timeContributionFromBGLocation;                               //@synthesize timeContributionFromBGLocation=_timeContributionFromBGLocation - In the implementation block
@property (nonatomic,readonly) double timeContributionFromBGURLSession;                             //@synthesize timeContributionFromBGURLSession=_timeContributionFromBGURLSession - In the implementation block
@property (nonatomic,readonly) double timeContributionFromAudio;                                    //@synthesize timeContributionFromAudio=_timeContributionFromAudio - In the implementation block
@property (nonatomic,readonly) double timeContributionFromPushKit;                                  //@synthesize timeContributionFromPushKit=_timeContributionFromPushKit - In the implementation block
@property (nonatomic,readonly) double timeContributionFromUnknown;                                  //@synthesize timeContributionFromUnknown=_timeContributionFromUnknown - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pushKitTypeToTimeMap;                            //@synthesize pushKitTypeToTimeMap=_pushKitTypeToTimeMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * backgroundTaskNameToTimeMap;                     //@synthesize backgroundTaskNameToTimeMap=_backgroundTaskNameToTimeMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * backgroundTaskNameToExpireCountMap;              //@synthesize backgroundTaskNameToExpireCountMap=_backgroundTaskNameToExpireCountMap - In the implementation block
@property (nonatomic,readonly) long long foregroundColdStarts;                                      //@synthesize foregroundColdStarts=_foregroundColdStarts - In the implementation block
@property (nonatomic,readonly) long long backgroundColdStarts;                                      //@synthesize backgroundColdStarts=_backgroundColdStarts - In the implementation block
-(id)initWithDateStateBegan:(id)arg1 backgroundTimeSpent:(double)arg2 activeTimeSpent:(double)arg3 inactiveTimeSpent:(double)arg4 timeContributionFromAPNS:(double)arg5 timeContributionFromBGTasks:(double)arg6 timeContributionFromBGFetch:(double)arg7 timeContributionFromBGLocation:(double)arg8 timeContributionFromBGURLSession:(double)arg9 timeContributionFromAudio:(double)arg10 timeContributionFromPushKit:(double)arg11 timeContributionFromUnknown:(double)arg12 pushKitTypeToTimeMap:(id)arg13 backgroundTaskNameToTimeMap:(id)arg14 backgroundTaskNameToExpireCountMap:(id)arg15 foregroundColdStarts:(long long)arg16 backgroundColdStarts:(long long)arg17 ;
-(NSDate *)dateStateBegan;
-(double)backgroundTimeSpent;
-(double)inactiveTimeSpent;
-(double)timeContributionFromAPNS;
-(double)timeContributionFromBGTasks;
-(double)timeContributionFromBGFetch;
-(double)timeContributionFromBGLocation;
-(double)timeContributionFromBGURLSession;
-(double)timeContributionFromAudio;
-(double)timeContributionFromPushKit;
-(double)timeContributionFromUnknown;
-(NSDictionary *)pushKitTypeToTimeMap;
-(NSDictionary *)backgroundTaskNameToTimeMap;
-(NSDictionary *)backgroundTaskNameToExpireCountMap;
-(long long)foregroundColdStarts;
-(long long)backgroundColdStarts;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)activeTimeSpent;
@end

