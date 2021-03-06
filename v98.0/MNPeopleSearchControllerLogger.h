/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class FBAnalytics, NSString, NSMutableArray, NSNumber;

@interface MNPeopleSearchControllerLogger : NSObject <FBClassProvidable> {

	FBAnalytics* _analytics;
	NSString* _sessionId;
	NSString* _targetId;
	NSString* _resultSectionName;
	unsigned long long _numSearchAttempts;
	BOOL _didSelectResult;
	unsigned long long _searchStartTime;
	unsigned long long _surface;
	NSMutableArray* _searchTerms;
	NSNumber* _sectionIndexOfResult;
	NSNumber* _globalIndexOfResult;
	unsigned long long _globalNumberOfResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 ;
-(void)recordSearchResultSelectedWithTargetId:(id)arg1 resultSectionName:(id)arg2 sectionIndexOfResult:(unsigned long long)arg3 globalIndexOfResult:(unsigned long long)arg4 globalNumberOfResults:(unsigned long long)arg5 ;
-(void)recordSearchAttemptWithText:(id)arg1 ;
-(void)startSearchSessionWithSessionId:(id)arg1 surface:(unsigned long long)arg2 ;
-(void)endSearchSessionWithResultIds:(id)arg1 ;
-(void)_logSearchSessionStarted;
-(void)_addSearchTerm:(id)arg1 ;
-(void)_logSearchSessionEndedWithSearchTime:(unsigned long long)arg1 resultIds:(id)arg2 ;
-(void)_resetSearchSession;
@end

