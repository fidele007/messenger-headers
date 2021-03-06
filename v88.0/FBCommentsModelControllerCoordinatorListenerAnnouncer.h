/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBCommentsModelControllerCoordinatorListener.h>

@class NSString;

@interface FBCommentsModelControllerCoordinatorListenerAnnouncer : FBAnnouncerBase <FBCommentsModelControllerCoordinatorListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modelControllerCoordinator:(id)arg1 didInsertHeadComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didInsertTailComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didUpdateComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didRemoveComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinatorWillStartNeckLoading:(id)arg1 ;
-(void)modelControllerCoordinatorWillStartTailLoading:(id)arg1 ;
-(void)modelControllerCoordinatorWillStartHeadLoading:(id)arg1 ;
-(void)modelControllerCoordinatorDidFinishNeckLoading:(id)arg1 ;
-(void)modelControllerCoordinatorDidFinishTailLoading:(id)arg1 ;
-(void)modelControllerCoordinatorDidFinishHeadLoading:(id)arg1 ;
-(void)modelControllerCoordinator:(id)arg1 didEditComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToEditComment:(id)arg2 error:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didPostComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToDeleteComment:(id)arg2 error:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didUnhideComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToUnhideComment:(id)arg2 error:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

