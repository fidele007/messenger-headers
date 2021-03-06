/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/PHLivePhotoViewDelegate.h>

@protocol FBLivePhotoViewDelegate;
@class NSString, UIGestureRecognizer, UITapGestureRecognizer, PHLivePhotoView;

@interface FBLivePhotoView : UIView <PHLivePhotoViewDelegate> {

	NSString* _assetID;
	long long _currentFetchingRequestID;
	UIGestureRecognizer* _livePhotoGestureRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	BOOL _livePhotoIsPlaying;
	PHLivePhotoView* _livePhotoView;
	id<FBLivePhotoViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLivePhotoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTap:(id)arg1 ;
-(void)_setupLivePhoto:(id)arg1 autoPlay:(BOOL)arg2 ;
-(void)fetchLivePhotoWithAssetID:(id)arg1 targetDimension:(long long)arg2 autoPlay:(BOOL)arg3 ;
-(void)clearLivePhoto;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBLivePhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLivePhotoViewDelegate>)delegate;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
@end

