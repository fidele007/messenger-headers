/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBMImageViewDownloader, FBDiodeUnreadThreadViewModelFetcher;

@interface FBMessengerInterstitialUnreadProfileView : UIView {

	UIView* _leftProfileImageView;
	UIView* _rightProfileImageView;
	FBMImageViewDownloader* _imageViewDownloader;
	FBDiodeUnreadThreadViewModelFetcher* _diodeUnreadThreadViewModelFetcher;
	unsigned long long _profileImageCount;

}

@property (assign,nonatomic) unsigned long long profileImageCount;              //@synthesize profileImageCount=_profileImageCount - In the implementation block
-(void)_resetProfileImageViews;
-(void)_fetchDiodeUnreadThreadViewModel;
-(void)_updateProfileImageViewsWithUnreadThreadViewModels:(id)arg1 ;
-(id)initWithImageViewDownloader:(id)arg1 diodeUnreadThreadViewModelFetcher:(id)arg2 ;
-(void)setProfileImageCount:(unsigned long long)arg1 ;
-(unsigned long long)profileImageCount;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

