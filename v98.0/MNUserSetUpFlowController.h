/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSetUpDataFetcherControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserSetUpStepCompletion.h>

@protocol MNUserSetUpStepViewController, FBProvider, MNUserSetUpFlowControllerDelegate, MNUserSetUpPresentationHandler;
@class MNUserSetUpDataFetcherController, UIViewController, NSArray, NSString;

@interface MNUserSetUpFlowController : NSObject <MNUserSetUpDataFetcherControllerDelegate, FBClassProvidable, MNUserSetUpStepCompletion> {

	MNUserSetUpDataFetcherController* _userSetUpDataFetcherController;
	UIViewController*<MNUserSetUpStepViewController> _vcForCurrentStep;
	id<FBProvider> _userSetUpLoadingVCProvider;
	long long _currentStep;
	id<MNUserSetUpFlowControllerDelegate> _delegate;
	NSArray* _viewControllerProviders;
	id<MNUserSetUpPresentationHandler> _presentationHandler;

}

@property (assign,nonatomic,__weak) id<MNUserSetUpFlowControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * viewControllerProviders;                                     //@synthesize viewControllerProviders=_viewControllerProviders - In the implementation block
@property (nonatomic,retain) id<MNUserSetUpPresentationHandler> presentationHandler;              //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)userSetUpStepViewControllerDidCompleteStep:(id)arg1 ;
-(void)userSetUpStepViewControllerDidFailStep:(id)arg1 ;
-(void)setViewControllerProviders:(NSArray *)arg1 ;
-(void)startFlowWithLoadingScreen:(BOOL)arg1 ;
-(id)initWithUserSetUpLoadingVCProvider:(id)arg1 userSetUpDataFetcherController:(id)arg2 ;
-(void)setVcForCurrentStep:(id)arg1 ;
-(void)_moveToNextStep;
-(void)_executeStepForStepViewController:(id)arg1 ;
-(void)userSetUpDataFetcherController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userSetUpDataFetcherController:(id)arg1 didFetchUserData:(id)arg2 ;
-(NSArray *)viewControllerProviders;
-(void)setDelegate:(id<MNUserSetUpFlowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNUserSetUpFlowControllerDelegate>)delegate;
-(void)setPresentationHandler:(id<MNUserSetUpPresentationHandler>)arg1 ;
-(id<MNUserSetUpPresentationHandler>)presentationHandler;
@end

