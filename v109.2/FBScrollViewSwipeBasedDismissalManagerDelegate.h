/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScrollViewSwipeBasedDismissalManagerDelegate <NSObject>
@optional
-(BOOL)scrollViewSwipeBasedDismissalManagerShouldBeginSwipingContainerView:(id)arg1 withDirection:(long long)arg2;
-(void)scrollViewSwipeBasedDismissalManagerWillBeginContainerResetAnimation:(id)arg1;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didEndContainerResetWithAnimation:(BOOL)arg2;
-(void)scrollViewSwipeBasedDismissalManagerDidBeginSwipingContainerView:(id)arg1;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didUpdateContainerTranslationProgress:(double)arg2;

@required
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didDetectDismissalGestureWithDirection:(unsigned long long)arg2 fromView:(id)arg3;

@end

