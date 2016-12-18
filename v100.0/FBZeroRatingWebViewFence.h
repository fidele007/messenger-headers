/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZRFenceBase.h>
#import <Messenger/FBZeroRatingInterstitialWebViewControllerDelegate.h>

@protocol FBZeroRatingFenceNavigationDelegate;
@class ZRApplicationState, NSURL, NSString;

@interface FBZeroRatingWebViewFence : ZRFenceBase <FBZeroRatingInterstitialWebViewControllerDelegate> {

	ZRApplicationState* _zeroRatingState;
	NSURL* _url;
	id<FBZeroRatingFenceNavigationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)upsellInterstitial:(id)arg1 exitedSuccessfully:(BOOL)arg2 ;
-(id)initWithZeroRatingState:(id)arg1 session:(id)arg2 url:(id)arg3 delegate:(id)arg4 ;
-(void)show;
@end
