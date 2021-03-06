/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, UILabel, UIView, NSString;

@interface FBIOSLocationAuthorizationSettingsViewController : UIViewController <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	int _targetStatus;
	UILabel* _titleLabel;
	UIView* _instructionList;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWithTitle:(id)arg1 desiredAuthorization:(int)arg2 ;
-(void)_didTapSettingsButton:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end

