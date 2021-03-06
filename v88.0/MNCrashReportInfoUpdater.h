/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNavigationListener.h>

@class FBExceptionHandler, NSString;

@interface MNCrashReportInfoUpdater : NSObject <MNNavigationListener> {

	FBExceptionHandler* _exceptionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_addApplicationStateObserver;
-(id)initWithExceptionHandler:(id)arg1 ;
-(void)_updateApplicationStateAsync;
-(void)_updateVisibleViewControllerInfo;
-(id)_navigationStackInfo;
-(void)splitViewControllerWillChangeState:(BOOL)arg1 ;
-(void)tabBarControllerDidSelectViewController:(id)arg1 ;
-(void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4 ;
-(void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)didPresentViewController:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)_updateApplicationState;
@end

