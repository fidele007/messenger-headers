/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MNInvoiceShippingViewControllerDelegate;
@interface MNInvoiceShippingViewController : UIViewController {

	id<MNInvoiceShippingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInvoiceShippingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MNInvoiceShippingViewControllerDelegate>)arg1 ;
-(id<MNInvoiceShippingViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

