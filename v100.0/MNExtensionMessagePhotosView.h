/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNMessagePhotosLayoutStrategy, MNPhotoViewImageDownloadControlling;
@class UIImageView, NSMutableArray, NSArray, MNExtensionMessagePhotosViewMaskAttributes;

@interface MNExtensionMessagePhotosView : UIView {

	id<MNMessagePhotosLayoutStrategy> _photosLayoutStrategy;
	UIImageView* _photosMaskingOverlayView;
	NSMutableArray* _photoViews;
	id<MNPhotoViewImageDownloadControlling> _photoViewImageDownloadController;
	BOOL _alignsToRight;
	NSArray* _photoViewModels;
	MNExtensionMessagePhotosViewMaskAttributes* _photosMaskAttributes;

}

@property (nonatomic,copy,readonly) NSArray * photoViewModels;                                                      //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (nonatomic,copy,readonly) MNExtensionMessagePhotosViewMaskAttributes * photosMaskAttributes;              //@synthesize photosMaskAttributes=_photosMaskAttributes - In the implementation block
@property (nonatomic,readonly) BOOL alignsToRight;                                                                  //@synthesize alignsToRight=_alignsToRight - In the implementation block
-(NSArray *)photoViewModels;
-(BOOL)alignsToRight;
-(id)initWithPhotoViewImageDownloadController:(id)arg1 photosLayoutStrategy:(id)arg2 ;
-(void)setPhotoViewModels:(id)arg1 photosMaskAttributes:(id)arg2 alignsToRight:(BOOL)arg3 ;
-(void)_updateAllPhotoViews;
-(void)_updatePhotosOverlayMaskView;
-(MNExtensionMessagePhotosViewMaskAttributes *)photosMaskAttributes;
-(void)layoutSubviews;
@end

