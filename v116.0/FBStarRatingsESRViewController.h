/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBStarRatingsESRViewControllerDelegate;
@class FBStarRatingsUserData, FBStarRatingsESRView;

@interface FBStarRatingsESRViewController : UIViewController {

	FBStarRatingsUserData* _userData;
	FBStarRatingsESRView* _esrView;
	id<FBStarRatingsESRViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBStarRatingsESRViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUserData:(id)arg1 ;
-(void)setDelegate:(id<FBStarRatingsESRViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBStarRatingsESRViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

