/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponentTrackerStateListener.h>

@class FBSectionComponentTracker, FBSectionComponentDebugHelperUpdateListenerAnnouncer, NSString;

@interface FBSectionComponentDebugHelper : NSObject <FBSectionComponentTrackerStateListener> {

	FBSectionComponentTracker* _relevantTracker;
	FBSectionComponentDebugHelperUpdateListenerAnnouncer* _announcer;
	BOOL _announceDebuggerUpdates;
	BOOL _announceUpdates;

}

@property (assign,nonatomic) BOOL announceDebuggerUpdates; 
@property (assign,nonatomic) BOOL announceUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allChangesets;
+(id)sectionComponentHierarchy;
+(id)stateUpdateEvents;
+(id)lastChangesetApplied;
+(id)previousSectionComponentHierarchy;
+(id)sectionComponentHierarchiesDelta;
+(id)count;
-(void)addUpdateListener:(id)arg1 ;
-(BOOL)announceUpdates;
-(void)setAnnounceDebuggerUpdates:(BOOL)arg1 ;
-(void)setAnnounceUpdates:(BOOL)arg1 ;
-(void)didApplyChangeset:(id)arg1 sectionComponentTracker:(id)arg2 ;
-(void)componentWillAppearUsingTracker:(id)arg1 ;
-(void)willGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)didGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)willGenerateNewSectionComponentHierarchy:(id)arg1 ;
-(void)didGenerateSectionComponentHierarchy:(id)arg1 currentStates:(id)arg2 sectionComponentTracker:(id)arg3 ;
-(void)didUpdateStateWithOldValues:(id)arg1 allCurrentStates:(id)arg2 tracker:(id)arg3 ;
-(void)_announceUpdate;
-(BOOL)announceDebuggerUpdates;
-(void)dealloc;
-(id)init;
@end

