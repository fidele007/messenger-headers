/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIProgressView, UIImageView, FBMStoreStickerPack, UIButton, FBButton, FBNetworkImageView, UILabel;

@interface FBMStickerPackCell : UITableViewCell {

	UIProgressView* _progressBar;
	UIImageView* _downloadedIcon;
	UIImageView* _separatorImageView;
	BOOL _shouldShowSubscriptionCTAViews;
	FBMStoreStickerPack* _stickerPack;
	UIButton* _downloadButton;
	FBButton* _subscriptionFollowButton;
	FBButton* _subscriptionNotNowButton;
	FBNetworkImageView* _stickerPackThumbnailView;
	UILabel* _stickerPackTitleView;
	UILabel* _stickerPackSubtitleView;
	UILabel* _stickerPackSubscriptionView;

}

@property (nonatomic,retain) FBNetworkImageView * stickerPackThumbnailView;              //@synthesize stickerPackThumbnailView=_stickerPackThumbnailView - In the implementation block
@property (nonatomic,retain) UILabel * stickerPackTitleView;                             //@synthesize stickerPackTitleView=_stickerPackTitleView - In the implementation block
@property (nonatomic,retain) UILabel * stickerPackSubtitleView;                          //@synthesize stickerPackSubtitleView=_stickerPackSubtitleView - In the implementation block
@property (nonatomic,retain) UILabel * stickerPackSubscriptionView;                      //@synthesize stickerPackSubscriptionView=_stickerPackSubscriptionView - In the implementation block
@property (nonatomic,retain) UIButton * downloadButton;                                  //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) FBButton * subscriptionFollowButton;                        //@synthesize subscriptionFollowButton=_subscriptionFollowButton - In the implementation block
@property (nonatomic,retain) FBButton * subscriptionNotNowButton;                        //@synthesize subscriptionNotNowButton=_subscriptionNotNowButton - In the implementation block
@property (nonatomic,retain) FBMStoreStickerPack * stickerPack;                          //@synthesize stickerPack=_stickerPack - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                             //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,readonly) UIImageView * downloadedIcon;                             //@synthesize downloadedIcon=_downloadedIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSubscriptionCTAViews;                        //@synthesize shouldShowSubscriptionCTAViews=_shouldShowSubscriptionCTAViews - In the implementation block
+(double)heightForStickerPack:(id)arg1 width:(double)arg2 layoutIdion:(unsigned long long)arg3 reuseIdentifier:(id)arg4 shouldShowSubscriptionCTAViews:(BOOL)arg5 ;
-(void)setStickerPackTitleView:(UILabel *)arg1 ;
-(void)setStickerPackSubtitleView:(UILabel *)arg1 ;
-(void)setStickerPackSubscriptionView:(UILabel *)arg1 ;
-(void)setStickerPackThumbnailView:(FBNetworkImageView *)arg1 ;
-(void)setDownloadButton:(UIButton *)arg1 ;
-(void)setSubscriptionFollowButton:(FBButton *)arg1 ;
-(void)setSubscriptionNotNowButton:(FBButton *)arg1 ;
-(void)_addSeparatorIfNeeded;
-(double)_downloadOriginX;
-(double)_iconOriginX;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 layoutIdiom:(unsigned long long)arg3 imageDownloader:(id)arg4 ;
-(void)setStickerPack:(FBMStoreStickerPack *)arg1 ;
-(FBMStoreStickerPack *)stickerPack;
-(UIButton *)downloadButton;
-(UIImageView *)downloadedIcon;
-(FBButton *)subscriptionFollowButton;
-(FBButton *)subscriptionNotNowButton;
-(BOOL)shouldShowSubscriptionCTAViews;
-(void)setShouldShowSubscriptionCTAViews:(BOOL)arg1 ;
-(FBNetworkImageView *)stickerPackThumbnailView;
-(UILabel *)stickerPackTitleView;
-(UILabel *)stickerPackSubtitleView;
-(UILabel *)stickerPackSubscriptionView;
-(void)layoutSubviews;
-(UIProgressView *)progressBar;
@end

