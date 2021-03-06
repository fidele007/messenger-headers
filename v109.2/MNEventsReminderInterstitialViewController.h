/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/FBNetworkImageViewDelegate.h>
#import <Messenger/MNEventsReminderInterstitialViewDelegate.h>

@protocol MNEventsReminderInterstitialViewControllerDelegate;
@class MNEventsReminderInterstitialViewControllerInjector, MNEventsReminderInterstitialView, FBNetworkImageView, NSString;

@interface MNEventsReminderInterstitialViewController : UIViewController <FBClassInjectable, FBNetworkImageViewDelegate, MNEventsReminderInterstitialViewDelegate> {

	MNEventsReminderInterstitialViewControllerInjector* _injector;
	MNEventsReminderInterstitialView* _eventsReminderInterstitialView;
	FBNetworkImageView* _imageView;
	id<MNEventsReminderInterstitialViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNEventsReminderInterstitialViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(void)eventsReminderInterstitialViewDidTapCreateButton:(id)arg1 ;
-(void)eventsReminderInterstitialViewDidTapDismissButton:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)setDelegate:(id<MNEventsReminderInterstitialViewControllerDelegate>)arg1 ;
-(id<MNEventsReminderInterstitialViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
@end

