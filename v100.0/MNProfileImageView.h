/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface MNProfileImageView : UIView {

	NSMutableArray* _imageViews;
	NSArray* _images;
	BOOL _shouldLog;
	BOOL _isPlaceHolderImage;
	id _profileImagesIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) id profileImagesIdentifier;                 //@synthesize profileImagesIdentifier=_profileImagesIdentifier - In the implementation block
-(void)setProfileImages:(id)arg1 animated:(BOOL)arg2 isPlaceHolderImage:(BOOL)arg3 ;
-(void)setProfileImagesIdentifier:(id)arg1 ;
-(void)_layoutOneImage;
-(void)_layoutTwoImages;
-(void)_layoutThreeImages;
-(void)_logProfilePhotoView;
-(double)_horizontalSeparatorLeft;
-(double)_verticalSeparatorTop;
-(void)_prepareImageViews:(unsigned long long)arg1 ;
-(id)profileImagesIdentifier;
-(BOOL)isPlaceHolderImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(NSMutableArray *)imageViews;
@end
