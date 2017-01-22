/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, FBImpressionTrackingInfo, FBViewBasedImpressionLoggingProperties;

@interface _FBViewableImpressionInfo : NSObject {

	BOOL _holdoutAd;
	BOOL _eligibleForNonViewable;
	UIView* _view;
	FBImpressionTrackingInfo* _trackingInfo;
	FBViewBasedImpressionLoggingProperties* _vpvProperties;

}

@property (nonatomic,__weak,readonly) UIView * view;                                                //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) FBImpressionTrackingInfo * trackingInfo;                             //@synthesize trackingInfo=_trackingInfo - In the implementation block
@property (nonatomic,readonly) FBViewBasedImpressionLoggingProperties * vpvProperties;              //@synthesize vpvProperties=_vpvProperties - In the implementation block
@property (getter=isHoldoutAd,nonatomic,readonly) BOOL holdoutAd;                                   //@synthesize holdoutAd=_holdoutAd - In the implementation block
@property (assign,nonatomic) BOOL eligibleForNonViewable;                                           //@synthesize eligibleForNonViewable=_eligibleForNonViewable - In the implementation block
-(FBImpressionTrackingInfo *)trackingInfo;
-(id)initWithView:(id)arg1 trackingInfo:(id)arg2 vpvProperties:(id)arg3 holdoutAd:(BOOL)arg4 ;
-(FBViewBasedImpressionLoggingProperties *)vpvProperties;
-(BOOL)isHoldoutAd;
-(BOOL)eligibleForNonViewable;
-(void)setEligibleForNonViewable:(BOOL)arg1 ;
-(UIView *)view;
@end
