/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCViewControllerDelegate
@required
-(void)callViewControllerCallStatusDidChange:(id)arg1;
-(void)callViewControllerWillMinimizeCallScreen:(id)arg1 allowVoiceMessage:(BOOL)arg2;
-(void)callViewControllerDidShowStarRating:(id)arg1;
-(void)callViewController:(id)arg1 didSelectStarRating:(unsigned long long)arg2;
-(void)callViewControllerPromptCallSurvey:(id)arg1;
-(void)callViewController:(id)arg1 didRequestCloseAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)callViewControllerIsBackTooltipEnabled:(id)arg1;
-(void)callViewControllerDidFinishCall:(id)arg1;
-(void)callViewControllerDidStartVoicemailExperience:(id)arg1 withActiveCallUI:(BOOL)arg2;
-(void)callViewController:(id)arg1 logAnalyticsValue:(id)arg2 forKey:(id)arg3;
-(void)callViewControllerDidBecomeUsableExpression:(id)arg1;

@end
