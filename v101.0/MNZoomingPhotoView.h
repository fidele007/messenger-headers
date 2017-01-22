/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/MNPhotoViewDelegate.h>

@protocol MNZoomingPhotoViewDelegate;
@class MNCenteringScrollView, MNLoadingIndicator, FBKVOController, MNPhotoView, UITapGestureRecognizer, NSString;

@interface MNZoomingPhotoView : UIView <UIScrollViewDelegate, MNPhotoViewDelegate> {

	MNCenteringScrollView* _scrollView;
	MNLoadingIndicator* _loadingIndicator;
	FBKVOController* _kvoController;
	MNPhotoView* _photoView;
	UITapGestureRecognizer* _doubleTapToZoomGestureRecognizer;
	id<MNZoomingPhotoViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNPhotoView * photoView;                                                //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapToZoomGestureRecognizer;              //@synthesize doubleTapToZoomGestureRecognizer=_doubleTapToZoomGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<MNZoomingPhotoViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photoViewWillDisplayImage:(id)arg1 ;
-(void)photoViewDidEndDisplayImage:(id)arg1 ;
-(void)_showLoadingIndicator;
-(UITapGestureRecognizer *)doubleTapToZoomGestureRecognizer;
-(void)startLoadingImage;
-(void)_photoViewModelDidChange;
-(void)_doubleTapped:(id)arg1 ;
-(void)_setZoomScale:(double)arg1 animated:(BOOL)arg2 ;
-(void)_toggleZoomAtPoint:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNZoomingPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<MNZoomingPhotoViewDelegate>)delegate;
-(BOOL)isLoading;
-(BOOL)isZoomed;
-(void)_hideLoadingIndicator;
-(MNPhotoView *)photoView;
@end
