/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedStoryPositionTracker;

@interface FBListViewControllerImpressionLoggingConfiguration : NSObject {

	unsigned long long _layoutIdiom;
	Class _expectedEdgeClass;
	FBFeedStoryPositionTracker* _positionTracker;

}

@property (nonatomic,readonly) unsigned long long layoutIdiom;                            //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,readonly) Class expectedEdgeClass;                                   //@synthesize expectedEdgeClass=_expectedEdgeClass - In the implementation block
@property (nonatomic,readonly) FBFeedStoryPositionTracker * positionTracker;              //@synthesize positionTracker=_positionTracker - In the implementation block
-(unsigned long long)layoutIdiom;
-(id)initWithLayoutIdiom:(unsigned long long)arg1 expectedEdgeClass:(Class)arg2 positionTracker:(id)arg3 ;
-(Class)expectedEdgeClass;
-(FBFeedStoryPositionTracker *)positionTracker;
@end

