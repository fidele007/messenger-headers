/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface FBTransientStatusBarManager : NSObject {

	BOOL _appStatusBarHidden;
	long long _appStatusBarStyle;
	NSMapTable* _statusBarStatesByVC;

}
+(id)sharedManager;
-(id)initWithAppStatusBarStyle:(long long)arg1 appStatusBarHidden:(BOOL)arg2 ;
-(void)_updateStatusBarForPresentationState:(id)arg1 forViewController:(id)arg2 ;
-(BOOL)_shouldUpdateStatusBarForViewControllerPresentation:(id)arg1 ;
-(id)_stateForViewController:(id)arg1 ;
-(void)_restoreStatusBarStateToInitialState:(id)arg1 forViewController:(id)arg2 afterDelay:(double)arg3 ;
-(void)_immediatelyRestoreStatusBarStateIfNecessary:(id)arg1 forViewController:(id)arg2 ;
-(BOOL)_shouldAnimateStatusBarHidden:(BOOL)arg1 forViewController:(id)arg2 ;
-(void)willPresentViewController:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(long long)preferredStatusBarStyleForViewController:(id)arg1 ;
-(BOOL)prefersStatusBarHiddenForViewController:(id)arg1 ;
-(void)setStatusBarVisible:(BOOL)arg1 forViewController:(id)arg2 ;
@end

