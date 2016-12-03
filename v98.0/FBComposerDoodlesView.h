/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBMediaGalleryTopBarDelegate.h>

@protocol FBComposerDoodlesViewDelegate;
@class NSString, UIImage, UIView, UIImageView, FBMediaGalleryTopBar, FBPhotoCropInfo, FBActionButton, FBMediaGallerySecondaryBar, FBUserSession, FBMediaGalleryTopBarConfiguration;

@interface FBComposerDoodlesView : UIView <UIGestureRecognizerDelegate, FBMediaGalleryTopBarDelegate> {

	NSString* _assetID;
	UIImage* _backgroundImage;
	UIView* _bannerView;
	UIImageView* _doodleImageView;
	UIImage* _doodlesLayer;
	FBMediaGalleryTopBar* _mediaGalleryTopBar;
	UIImageView* _overlayImageView;
	UIImage* _overlayLayer;
	FBPhotoCropInfo* _photoCropInfo;
	FBActionButton* _resetButton;
	UIView* _privacyMessageView;
	FBMediaGallerySecondaryBar* _secondaryBar;
	FBUserSession* _session;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	FBActionButton* _undoButton;
	UIImageView* _backgroundImageView;
	id<FBComposerDoodlesViewDelegate> _delegate;
	double _topLayoutGuideLength;

}

@property (nonatomic,readonly) UIImageView * backgroundImageView;                            //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerDoodlesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL resetDrawingEnabled; 
@property (assign,nonatomic) double topLayoutGuideLength;                                    //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) BOOL undoDrawingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(void)galleryTopBarDidTapSelectButton:(id)arg1 ;
-(void)galleryTopBarDidTapBackButton:(id)arg1 ;
-(void)_undoButtonHit:(id)arg1 ;
-(id)_buttonFromImage:(id)arg1 withTitle:(id)arg2 selector:(SEL)arg3 enabled:(BOOL)arg4 ;
-(void)_resetButtonHit:(id)arg1 ;
-(CGRect)maxBackgroundImageSize;
-(CGRect)getMaxImageRect;
-(id)initWithFrame:(CGRect)arg1 photoOverlayLayer:(id)arg2 doodlesLayer:(id)arg3 photoCropInfo:(id)arg4 backgroundImage:(id)arg5 topBarConfiguration:(id)arg6 session:(id)arg7 assetID:(id)arg8 bannerView:(id)arg9 privacyMessageView:(id)arg10 ;
-(CGRect)getMaxDrawingImageRect;
-(void)addDrawingView:(id)arg1 ;
-(void)setUndoDrawingEnabled:(BOOL)arg1 ;
-(BOOL)undoDrawingEnabled;
-(void)setResetDrawingEnabled:(BOOL)arg1 ;
-(BOOL)resetDrawingEnabled;
-(void)setDelegate:(id<FBComposerDoodlesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBComposerDoodlesViewDelegate>)delegate;
-(UIImageView *)backgroundImageView;
-(double)_topBarHeight;
@end

