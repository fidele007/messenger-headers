/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBComposerAlertPresenter.h>

@protocol FBComposerAlertPresentationListener;
@class FBComposerAlert, UIAlertView, NSString;

@interface FBSystemAlertPresenter : NSObject <UIAlertViewDelegate, FBComposerAlertPresenter> {

	id _currentActionListener;
	FBComposerAlert* _currentlyPresentedAlert;
	UIAlertView* _currentlyPresentedAlertView;
	id<FBComposerAlertPresentationListener> _presentationListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAlert:(id)arg1 actionListener:(id)arg2 ;
-(id)initWithPresentationListener:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
