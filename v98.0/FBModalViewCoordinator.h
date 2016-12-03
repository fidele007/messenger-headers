/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUberPopoverControllerDelegate.h>

@class NSMutableDictionary, NSNotificationCenter, NSString;

@interface FBModalViewCoordinator : NSObject <FBUberPopoverControllerDelegate> {

	NSMutableDictionary* _modalViewTypeToCountMap;
	NSNotificationCenter* _notificationCenter;
	Class _customPopoverStyleClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)FBActionSheetButtonMetricsWilde;
+(id)FBActionSheetButtonMetricsBalto;
+(double)maximumDialogViewWidth;
+(id)sharedCoordinator;
-(id)alertActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)presentAlertController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)popoverControllerWithContentViewController:(id)arg1 ;
-(id)fbPopoverWithBackgroundViewClass:(Class)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)fbPopoverActionSheet;
-(BOOL)isPopoverShown;
-(id)presentModalDialogWithConfig:(id)arg1 delegate:(id)arg2 inView:(id)arg3 ;
-(BOOL)isPresentingModalView;
-(id)presentModalDialogWithConfig:(id)arg1 buttonHandler:(/*^block*/id)arg2 popoverDelegate:(id)arg3 inView:(id)arg4 width:(double)arg5 ;
-(void)fb_willPresentFbPopoverController:(id)arg1 ;
-(void)_decrementNumShowingPopovers;
-(id)_popoverSet;
-(void)didDismissModalViewOfType:(id)arg1 ;
-(void)willPresentModalViewOfType:(id)arg1 ;
-(BOOL)isPresentingModalViewOfType:(id)arg1 ;
-(void)_incrementNumShowingPopovers;
-(id)fbPopoverMenuWithMenuItems:(id)arg1 ;
-(void)fb_willPresentPopoverController:(id)arg1 ;
-(void)fb_didDismissPopoverController:(id)arg1 ;
-(BOOL)isPresentingAlertController;
-(id)presentModalDialogWithConfig:(id)arg1 delegate:(id)arg2 popoverDelegate:(id)arg3 inView:(id)arg4 ;
-(id)_presentModalDialogWithConfig:(id)arg1 delegate:(id)arg2 popoverDelegate:(id)arg3 inView:(id)arg4 buttonHandler:(/*^block*/id)arg5 width:(double)arg6 ;
-(void)_incrementCounterForType:(id)arg1 ;
-(void)_decrementCounterForType:(id)arg1 ;
-(id)presentModalDialogWithConfig:(id)arg1 inView:(id)arg2 ;
-(id)presentModalDialogWithConfig:(id)arg1 buttonHandler:(/*^block*/id)arg2 inView:(id)arg3 width:(double)arg4 ;
-(id)currentModalViewTypes;
-(void)setModalDialogPopoverStylingClass:(Class)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end

