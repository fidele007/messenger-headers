/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBFourRoundedCornerView, UILabel, UIImageView, NSURL;

@interface FBMStickerSearchTagCell : UICollectionViewCell {

	FBFourRoundedCornerView* _roundedCornerView;
	UILabel* _nameLabel;
	UIImageView* _thumbnailImageView;
	NSURL* _imageURL;

}

@property (nonatomic,readonly) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
-(void)configureWithTitle:(id)arg1 roundedCornerColor:(id)arg2 backgroundColor:(id)arg3 imageURL:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(void)_setTitle:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
-(NSURL *)imageURL;
-(void)setThumbnailImage:(id)arg1 ;
@end
