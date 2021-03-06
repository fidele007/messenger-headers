/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSDate, FBFeedbackReactionDataProvider;

@interface FBFeedbackReactionsInputPresenterAnalytics : NSObject {

	NSMutableDictionary* _analyticsMetadata;
	NSString* _analyticsModule;
	long long _state;
	long long _reactionKey;
	NSDate* _timestamp;
	FBFeedbackReactionDataProvider* _dataProvider;

}
-(void)updateTimeSpentOnReaction:(long long)arg1 ;
-(id)initWithFeedbackGraphQLID:(id)arg1 existingViewerReactionKey:(long long)arg2 reactionDataProvider:(id)arg3 analyticsModule:(id)arg4 ;
-(void)showReactionsInLocation:(unsigned long long)arg1 ;
-(void)swipeReactions;
-(void)highlightReactionWithKey:(long long)arg1 ;
-(void)selectReactionWithKey:(long long)arg1 ;
-(void)dismissReactions:(unsigned long long)arg1 location:(unsigned long long)arg2 ;
-(void)persistReactions;
@end

