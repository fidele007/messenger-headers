/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNRoundedCornersView.h>

@class UIImageView, FBRoundedRectImageSpec;

@interface MNPhotoMaskView : UIView <MNRoundedCornersView> {

	UIImageView* _maskView;
	FBRoundedRectImageSpec* _imageSpec;

}

@property (nonatomic,retain) FBRoundedRectImageSpec * imageSpec;              //@synthesize imageSpec=_imageSpec - In the implementation block
-(void)setImageSpec:(FBRoundedRectImageSpec *)arg1 ;
-(void)setRoundedCorners:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(FBRoundedRectImageSpec *)imageSpec;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

