/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCViewControllerDelegate
@required
-(void)callViewControllerCallStatusDidChange:(id)arg1;
-(void)callViewControllerWillMinimizeCallScreen:(id)arg1;
-(void)callViewControllerDidShowStarRating:(id)arg1;
-(void)callViewController:(id)arg1 didSelectStarRating:(unsigned long long)arg2;
-(void)callViewControllerPromptCallSurvey:(id)arg1;
-(void)callViewController:(id)arg1 didRequestCloseAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)callViewControllerIsBackTooltipEnabled:(id)arg1;
-(void)callViewControllerDidFinishCall:(id)arg1;
-(void)callViewControllerDidBecomeUsableExpression:(id)arg1 isUsable:(BOOL)arg2;
-(void)callViewController:(id)arg1 didChangeOrientation:(long long)arg2;
-(void)callViewControllerDidToggleCameras:(id)arg1;
-(void)callViewController:(id)arg1 setAnalyticsValue:(id)arg2 forKey:(id)arg3;
-(void)callViewDidCreateSessionListener:(id)arg1;

@end

