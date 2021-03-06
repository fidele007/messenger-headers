/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNInvitesViewControllerPresenting.h>

@class MNInvitesViewController, MNInvitesInterstitialControllerInjector, NSString;

@interface MNInvitesInterstitialController : NSObject <FBClassInjectable, MNInvitesViewControllerPresenting> {

	MNInvitesViewController* _invitesViewController;
	MNInvitesInterstitialControllerInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(BOOL)_shouldPresentInvitesSheet;
-(void)presentInvitesViewController:(id)arg1 ;
-(void)dismissInvitesViewController:(id)arg1 ;
-(void)showInvitesSheetIfNecessary;
-(id)initWithInjector:(id)arg1 ;
@end

