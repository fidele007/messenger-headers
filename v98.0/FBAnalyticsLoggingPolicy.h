/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(unsigned long long)samplingFrequencyForEvent:(id)arg1 ;
-(id)_constructErrorWithCode:(unsigned long long)arg1 ;
-(void)setLoggingPolicyModel:(FBAnalyticsLoggingPolicyModel *)arg1 ;
-(FBAnalyticsLoggingPolicyModel *)loggingPolicyModel;
-(BOOL)updateAnalyticsSamplingConfigFromResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldLogEvent:(id)arg1 ;
-(id)version;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)metadata;
-(id)checksum;
@end

