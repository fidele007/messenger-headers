/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverAnimationProvider.h>

@class POPSpringAnimation, NSString;

@interface FBPopoverControllerScaleAnimation : NSObject <FBPopoverAnimationProvider> {

	POPSpringAnimation* _scaleAnimation;
	POPSpringAnimation* _stretchAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopAnimatingPopover:(id)arg1 ;
-(void)animatePresentationWithView:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)animateDismissalWithView:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performInitialPopoverConfigurationWithView:(id)arg1 ;
-(void)animateInteractiveDismissalOfPopover:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 progress:(double)arg4 ;
-(void)resetPopoverAppearance:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 velocity:(CGPoint)arg4 ;
-(id)init;
@end
