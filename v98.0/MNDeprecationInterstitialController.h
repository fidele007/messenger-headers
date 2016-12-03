/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNDeprecationInterstitialViewControllerDelegate.h>

@protocol MNDeprecationInterstitialExperienceDescribing;
@class MNDeprecationInterstitialControllerInjector, MNDeprecationInterstitialViewController, NSString;

@interface MNDeprecationInterstitialController : NSObject <FBClassInjectable, MNDeprecationInterstitialViewControllerDelegate> {

	MNDeprecationInterstitialControllerInjector* _injector;
	id<MNDeprecationInterstitialExperienceDescribing> _currentExperienceDescriber;
	MNDeprecationInterstitialViewController* _deprecationInterstitialViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_dismissDeprecationInterstitialViewControllerWithCompletion:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canShowDeprecationInterstitial;
-(void)_showDeprecationInterstitialWithViewModel:(id)arg1 ;
-(id)_deprecationInterstitialViewControllerWithDelegate:(id)arg1 ;
-(void)deprecationInterstitialViewControllerDidTapPrimaryActionButton:(id)arg1 ;
-(void)deprecationInterstitialViewControllerDidTapSecondaryActionButton:(id)arg1 ;
-(void)showDeprecationInterstitialIfPossible;
@end

