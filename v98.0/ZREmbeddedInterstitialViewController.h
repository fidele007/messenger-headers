/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/ZRTariffedUxSentryDelegate.h>

@protocol FBProvider;
@class ZRTariffedUxSentry, ZREmbeddedInterstitialCoordinator;

@interface ZREmbeddedInterstitialViewController : UIViewController <ZRTariffedUxSentryDelegate> {

	id<FBProvider> _interstitialProvider;
	ZRTariffedUxSentry* _sentry;
	BOOL _avoidInterstitialIfPossible;
	BOOL _sharedActivationEnabled;
	ZREmbeddedInterstitialCoordinator* _coordinator;

}

@property (assign,nonatomic) ZREmbeddedInterstitialCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain,readonly) ZRTariffedUxSentry * sentry;                         //@synthesize sentry=_sentry - In the implementation block
@property (assign,nonatomic) BOOL avoidInterstitialIfPossible;                             //@synthesize avoidInterstitialIfPossible=_avoidInterstitialIfPossible - In the implementation block
@property (assign,nonatomic) BOOL sharedActivationEnabled;                                 //@synthesize sharedActivationEnabled=_sharedActivationEnabled - In the implementation block
-(void)nonZeroRatedSessionUxMayActivate:(id)arg1 ;
-(void)nonZeroRatedSessionDidFailToStart:(id)arg1 ;
-(void)nonZeroRatedSessionUxMustDeactivate:(id)arg1 ;
-(void)setCoordinator:(ZREmbeddedInterstitialCoordinator *)arg1 ;
-(id)initWithNonZeroRatedUxSentry:(id)arg1 interstitialProvider:(id)arg2 ;
-(ZRTariffedUxSentry *)sentry;
-(BOOL)avoidInterstitialIfPossible;
-(void)setAvoidInterstitialIfPossible:(BOOL)arg1 ;
-(BOOL)sharedActivationEnabled;
-(void)setSharedActivationEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(ZREmbeddedInterstitialCoordinator *)coordinator;
-(void)activateSession;
@end
