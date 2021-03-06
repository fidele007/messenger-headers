/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocationReporting.h>

@protocol FBClock;
@class FBLocationDuration, NSHashTable, NSMutableDictionary;

@interface FBLocationStats : NSObject <FBLocationReporting> {

	FBLocationDuration* _recordedStats;
	double _sessionStart;
	double _currentAccuracy;
	NSHashTable* _activeManagers;
	NSMutableDictionary* _attribution;
	id<FBClock> _clock;

}
+(id)sharedLocationStats;
-(id)initWithClock:(id)arg1 ;
-(id)getAndResetAttributionData;
-(void)didRegisterForLocationUpdatesWithSubscriber:(id)arg1 ;
-(void)didUnregisterForLocationUpdatesWithSubscriber:(id)arg1 ;
-(void)didStartUpdatingLocationForManager:(id)arg1 ;
-(void)didStopUpdatingLocationForManager:(id)arg1 ;
-(void)didChangeDesiredAccuracyForManager:(id)arg1 ;
-(double)_getAccuracy;
-(void)_updateStats:(id)arg1 withStartTime:(double)arg2 accuracy:(double)arg3 ;
-(void)_updateTotalForAttribution:(id)arg1 ;
-(void)_endSessionAndUpdateTotals;
-(id)init;
-(id)getStats;
@end

