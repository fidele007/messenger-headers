/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNRoomSuggestionImpressionTrackerInjector, NSString, NSMutableDictionary;

@interface MNRoomSuggestionImpressionTracker : NSObject <FBClassInjectable> {

	MNRoomSuggestionImpressionTrackerInjector* _injector;
	NSString* _loggingInterface;
	NSMutableDictionary* _impressionDataCache;
	long long _startIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * loggingInterface;              //@synthesize loggingInterface=_loggingInterface - In the implementation block
@property (assign,nonatomic) long long startIndex;                   //@synthesize startIndex=_startIndex - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)setLoggingInterface:(NSString *)arg1 ;
-(void)startTrackingImpressions;
-(void)stopTrackingImpressions;
-(void)willDisplayRoomSuggestion:(id)arg1 atIndex:(long long)arg2 ;
-(void)willEndDisplayRoomSuggestion:(id)arg1 atIndex:(long long)arg2 ;
-(id)impressionDataForRoomSuggestion:(id)arg1 ;
-(NSString *)loggingInterface;
-(void)_updateDurationAndLogEvent:(id)arg1 ;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(void)_initCache;
@end
