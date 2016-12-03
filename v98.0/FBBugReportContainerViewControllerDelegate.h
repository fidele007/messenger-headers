/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBugReportContainerViewControllerDelegate <NSObject>
@required
-(void)didDismissBugReportingFlow;
-(void)sendGeneralFeedback:(id)arg1 successBlock:(/*^block*/id)arg2;
-(void)presentPhotoPermissionsRequest;
-(void)setChosenCategory:(id)arg1;
-(id)chosenCategory;
-(void)presentHelpCenterForAbusiveContent;
-(void)presentHelpCenterForGeneralFeedback;
-(void)presentHelpCenterForPrivacy;
-(void)setShakeToReportEnabled;
-(void)setShakeToReportDisabled;
-(void)incrementNumCancelIfShakeOn;
-(void)resetNumCancelAfterShakeOff;
-(void)incrementNumReportIfShakeOff;
-(void)resetNumReportAfterShakeOn;
-(void)sendBugWithDescription:(id)arg1 category:(id)arg2 successBlock:(/*^block*/id)arg3;
-(void)setBugDescription:(id)arg1;
-(id)bugDescription;
-(void)willChangeCategory;
-(void)dismissBugComposerAndAllowUserToTakeScreenshot;
-(void)dismissBugComposerAndStartVideoRecording;

@end

