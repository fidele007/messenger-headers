/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppService.h>
#import <Messenger/FBUserSessionClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@protocol MNAuthenticationManager;
@class ZRApplicationState, ZRTokenRefreshCoordinator, ZRHeaderRequestCoordinator, ZRBannerDataCache, ZRNetworkActivityDestroyer, NSString;

@interface FBMZeroRatingService : NSObject <FBAppService, FBUserSessionClassProvidable, MNServiceControllable> {

	id<MNAuthenticationManager> _authenticationManager;
	ZRApplicationState* _zeroRatingState;
	ZRTokenRefreshCoordinator* _zeroRatingTokenCoordinator;
	ZRHeaderRequestCoordinator* _zeroRatingHeaderRequestCoordinator;
	ZRBannerDataCache* _zeroRatingBannerDataCache;
	ZRNetworkActivityDestroyer* _zeroRatingNetworkActivityDestroyer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle_DEPRECATED;
-(id)initWithAuthenticationManager:(id)arg1 zeroRatingState:(id)arg2 zeroRatingBannerDataCache:(id)arg3 zeroRatingHeaderRequestCoordinator:(id)arg4 zeroRatingNetworkActivityDestroyer:(id)arg5 zeroRatingTokenCoordinator:(id)arg6 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
