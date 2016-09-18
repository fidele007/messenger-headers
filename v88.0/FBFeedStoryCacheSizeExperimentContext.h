/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBFeedStoryCacheSizeExperimentContext : FBExperimentContext {

	unsigned long long _persistedEdgeCount;
	unsigned long long _initialPageLoadCount;
	unsigned long long _subsequentPageLoadCount;

}

@property (nonatomic,readonly) unsigned long long persistedEdgeCount;                   //@synthesize persistedEdgeCount=_persistedEdgeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long initialPageLoadCount;                 //@synthesize initialPageLoadCount=_initialPageLoadCount - In the implementation block
@property (nonatomic,readonly) unsigned long long subsequentPageLoadCount;              //@synthesize subsequentPageLoadCount=_subsequentPageLoadCount - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(unsigned long long)persistedEdgeCount;
-(unsigned long long)initialPageLoadCount;
-(unsigned long long)subsequentPageLoadCount;
@end
