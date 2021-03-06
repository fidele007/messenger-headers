/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBForceTouchHandler.h>

@protocol FBNavigationCoordinator;
@class FBExperimentManager, FBURLHandlerWebViewProvider, NSString;

@interface FBURLForceTouchHandler : NSObject <FBForceTouchHandler> {

	FBExperimentManager* _experimentManager;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBURLHandlerWebViewProvider* _webViewControllerProvider;
	unsigned long long _webViewPresentationMethod;
	unsigned long long _webViewPresentationOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPreviewingContext:(id)arg1 intent:(id)arg2 ;
-(void)commitViewController:(id)arg1 previewingContext:(id)arg2 ;
-(id)initWithExperimentManager:(id)arg1 navigationCoordinator:(id)arg2 webViewControllerProvider:(id)arg3 ;
@end

