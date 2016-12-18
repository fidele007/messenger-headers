/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppendMetadataToLogs.h>

@class NSUserDefaults, FBAnalyticsLoggingPolicyModel, NSString;

@interface FBAnalyticsLoggingPolicy : NSObject <FBAppendMetadataToLogs> {

	NSUserDefaults* _userDefaults;
	FBAnalyticsLoggingPolicyModel* _loggingPolicyModel;

}

@property (retain) FBAnalyticsLoggingPolicyModel * loggingPolicyModel;              //@synthesize loggingPolicyModel=_loggingPolicyModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)samplingFrequencyForEvent:(id)arg1 tag:(id)arg2 ;
-(id)_constructErrorWithCode:(unsigned long long)arg1 ;
-(void)setLoggingPolicyModel:(FBAnalyticsLoggingPolicyModel *)arg1 ;
-(FBAnalyticsLoggingPolicyModel *)loggingPolicyModel;
-(BOOL)updateAnalyticsSamplingConfigFromResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldLogEvent:(id)arg1 ;
-(unsigned long long)samplingFrequencyForEvent:(id)arg1 ;
-(id)version;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)metadata;
-(id)checksum;
@end
