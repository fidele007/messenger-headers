/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol FBRefactoredNavigationCoordinatorInternal
@property (nonatomic,__weak,readonly) UIViewController * modalPresentingViewController; 
@required
-(BOOL)openViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 whenClosed:(/*^block*/id)arg7;
-(void)dismissOpenedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)hasNonStackModalViewController;
-(UIViewController *)modalPresentingViewController;

@end

