/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>

@class UIViewController, NSMutableArray;

@interface FBRapidReportingNavigationController : UIViewController {

	UIViewController* _currentViewController;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,readonly) CGSize maximumContentSize; 
-(void)replaceViewController:(id)arg1 ;
-(void)popViewController;
-(void)setNeedsContainerSizeUpdate;
-(void)dealloc;
-(id)init;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)initWithViewController:(id)arg1 ;
-(void)pushViewController:(id)arg1 ;
-(CGSize)maximumContentSize;
@end

