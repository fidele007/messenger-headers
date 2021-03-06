/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBannerArrowPositioner.h>
#import <Messenger/MNComposeViewControllerListener.h>

@protocol MNBannerArrowPositionerDelegate;
@class MNComposeViewController, MNQuickPromotionBannerView, MNQuickPromotionBannerArrowLocation, NSString;

@interface MNQuickPromotionComposerBannerBottomArrowPositioner : NSObject <MNBannerArrowPositioner, MNComposeViewControllerListener> {

	MNComposeViewController* _composeViewController;
	MNQuickPromotionBannerView* _composerBannerView;
	MNQuickPromotionBannerArrowLocation* _arrowLocation;
	id<MNBannerArrowPositionerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL bannerArrowVisible; 
@property (nonatomic,readonly) double bannerArrowHeight; 
@property (assign,nonatomic,__weak) id<MNBannerArrowPositionerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didUpdateTabBar;
-(id)initWithComposerBannerView:(id)arg1 arrowLocation:(id)arg2 composeViewController:(id)arg3 ;
-(BOOL)bannerArrowVisible;
-(void)updateBannerArrowPosition;
-(double)bannerArrowHeight;
-(id)_composerExtensionTabIdentifier;
-(BOOL)_composerBannerBottomArrowOverflowsToMoreTab;
-(void)setDelegate:(id<MNBannerArrowPositionerDelegate>)arg1 ;
-(id<MNBannerArrowPositionerDelegate>)delegate;
@end

