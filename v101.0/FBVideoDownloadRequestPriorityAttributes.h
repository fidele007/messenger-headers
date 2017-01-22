/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScenePath;

@interface FBVideoDownloadRequestPriorityAttributes : NSObject {

	FBScenePath* _scenePath;
	long long _priority;

}

@property (nonatomic,readonly) FBScenePath * scenePath;              //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
-(FBScenePath *)scenePath;
-(id)initWithScenePath:(id)arg1 priority:(long long)arg2 ;
-(long long)priority;
@end
