/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@class MNSMSBridgeTooltipControllerInjector, MNTooltipOverlayController, MNThreadViewModel, FBNuxTooltip, NSString;

@interface MNSMSBridgeTooltipController : NSObject <FBClassInjectable, MNThreadViewModelConfigurable> {

	MNSMSBridgeTooltipControllerInjector* _injector;
	MNTooltipOverlayController* _tooltipController;
	MNThreadViewModel* _threadViewModel;
	FBNuxTooltip* _tooltip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(void)showMessagesViewTooltipIfNeededInView:(id)arg1 anchoredToPoint:(CGPoint)arg2 inView:(id)arg3 ;
-(void)hideTooltipAnimated:(BOOL)arg1 ;
-(void)updateTooltipPoint:(CGPoint)arg1 ;
-(BOOL)cantShowTooltip;
-(void)showThreadDetailsTooltipIfNeededInView:(id)arg1 anchoredToPoint:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithInjector:(id)arg1 ;
@end

