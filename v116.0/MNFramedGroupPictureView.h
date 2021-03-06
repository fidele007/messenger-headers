/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNFramedGroupPictureViewDelegate;
@class UIImageView, UITapGestureRecognizer, UIImage;

@interface MNFramedGroupPictureView : UIView {

	UIImageView* _groupImageView;
	UIImageView* _groupImageOverlayView;
	UIImageView* _authorProfileImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNFramedGroupPictureViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNFramedGroupPictureViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * groupImage; 
@property (nonatomic,retain) UIImage * authorProfileImage; 
-(void)setGroupImage:(UIImage *)arg1 ;
-(void)setAuthorProfileImage:(UIImage *)arg1 ;
-(UIImage *)groupImage;
-(UIImage *)authorProfileImage;
-(void)_didPerformTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNFramedGroupPictureViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFramedGroupPictureViewDelegate>)delegate;
@end

