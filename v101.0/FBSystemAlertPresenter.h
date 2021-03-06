/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

