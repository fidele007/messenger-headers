/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBListComponentTrackerStateListener.h>

@class NSString;

@interface FBListComponentTrackerStateListenerAnnouncer : FBAnnouncerBase <FBListComponentTrackerStateListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didApplyChangeset:(id)arg1 listComponentTracker:(id)arg2 ;
-(void)componentWillAppearUsingTracker:(id)arg1 ;
-(void)willGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)didGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)willGenerateNewListComponentHierarchy:(id)arg1 ;
-(void)didGenerateListComponentHierarchy:(id)arg1 currentStates:(id)arg2 listComponentTracker:(id)arg3 ;
-(void)didUpdateStateWithOldValues:(id)arg1 allCurrentStates:(id)arg2 tracker:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
