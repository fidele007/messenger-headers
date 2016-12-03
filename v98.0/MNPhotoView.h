/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FLAnimatedImageView.h>
#import <Messenger/MNOpenableMediaView.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MNPhotoViewDelegate, MNRoundedCornersView, FBCancelable;
@class MNImage, MNPhotoViewModel, UIView, NSString;

@interface MNPhotoView : FLAnimatedImageView <MNOpenableMediaView, NSCopying> {

	MNImage* _photoImage;
	BOOL _showingPlaceholder;
	BOOL _shouldLayoutMaskView;
	BOOL _reportOnNilDelegate;
	MNPhotoViewModel* _photoViewModel;
	id<MNPhotoViewDelegate> _delegate;
	UIView*<MNRoundedCornersView> _maskView;
	id<FBCancelable> _photoViewImageRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<FBCancelable> photoViewImageRequest;                                     //@synthesize photoViewImageRequest=_photoViewImageRequest - In the implementation block
@property (nonatomic,copy) MNPhotoViewModel * photoViewModel;                                  //@synthesize photoViewModel=_photoViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNPhotoViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isShowingPlaceholder,nonatomic) BOOL showingPlaceholder;              //@synthesize showingPlaceholder=_showingPlaceholder - In the implementation block
@property (nonatomic,retain) UIView*<MNRoundedCornersView> maskView;                           //@synthesize maskView=_maskView - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutMaskView;                                        //@synthesize shouldLayoutMaskView=_shouldLayoutMaskView - In the implementation block
@property (assign,nonatomic) BOOL reportOnNilDelegate;                                         //@synthesize reportOnNilDelegate=_reportOnNilDelegate - In the implementation block
-(MNPhotoViewModel *)photoViewModel;
-(void)setReportOnNilDelegate:(BOOL)arg1 ;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(void)setPhotoViewModel:(MNPhotoViewModel *)arg1 ;
-(void)setShouldLayoutMaskView:(BOOL)arg1 ;
-(void)setDisplayMaskView:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDisplayImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)startOpeningAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)startClosingAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_layoutMaskViewIfNeeded;
-(BOOL)shouldLayoutMaskView;
-(BOOL)reportOnNilDelegate;
-(id<FBCancelable>)photoViewImageRequest;
-(void)setPhotoViewImageRequest:(id<FBCancelable>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNPhotoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPhotoViewDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaskView:(UIView*<MNRoundedCornersView>)arg1 ;
-(UIView*<MNRoundedCornersView>)maskView;
-(BOOL)isShowingPlaceholder;
-(void)_updatePlaceholderVisibility;
-(id)photoImage;
@end

