/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIScrollView, UIImageView, UILabel, NSArray, UITextView, UIButton, UIProgressView;

@interface FBMStickerPackDetailView : UIView {

	UIScrollView* _contentView;
	UIImageView* _profileImageView;
	UILabel* _priceLabel;
	NSArray* _copyrightLabels;
	UITextView* _descriptionTextView;
	UIButton* _downloadButton;
	UIImageView* _previewImageView;
	UIProgressView* _progressBar;
	unsigned long long _layoutIdiom;
	BOOL _compactMode;
	UILabel* _titleLabel;
	UIButton* _stickerPackActionButton;
	double _topLayoutGuideLength;

}

@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * profileImageView;                  //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) UILabel * priceLabel;                            //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,readonly) UITextView * descriptionTextView;                //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,readonly) NSArray * copyrightLabels;                       //@synthesize copyrightLabels=_copyrightLabels - In the implementation block
@property (nonatomic,readonly) UIButton * downloadButton;                       //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,readonly) UIImageView * previewImageView;                  //@synthesize previewImageView=_previewImageView - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                    //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,readonly) UIButton * stickerPackActionButton;              //@synthesize stickerPackActionButton=_stickerPackActionButton - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                       //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(UIImageView *)profileImageView;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(UIButton *)downloadButton;
-(id)initWithFrame:(CGRect)arg1 isCompactMode:(BOOL)arg2 layoutIdiom:(unsigned long long)arg3 ;
-(NSArray *)copyrightLabels;
-(UIButton *)stickerPackActionButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)previewImageView;
-(UIProgressView *)progressBar;
-(id)_actionButton;
-(UILabel *)priceLabel;
-(UITextView *)descriptionTextView;
@end

