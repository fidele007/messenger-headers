/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedEventListener, NSMutableDictionary;

@interface FBFeedVPVdLoggingPipelineProvider : NSObject {

	unsigned long long _maximumRecentVPVdDeduplicationKeys;
	double _durationThreshold;
	FBFeedEventListener* _feedEventListener;
	BOOL _vpvdLoggingViaAnalyticsCoreEnabled;
	NSMutableDictionary* _analyticsModuleToVPVdLoggingPipeline;
	mutex _analyticsModuleToVPVdLoggingPipelineLock;

}
-(id)initWithMaximumRecentVPVdDeduplicationKeys:(unsigned long long)arg1 durationThreshold:(double)arg2 feedEventListener:(id)arg3 vpvdLoggingViaAnalyticsCoreEnabled:(BOOL)arg4 ;
-(id)vpvdLoggingPipelineForAnalyticsModule:(id)arg1 ;
@end

