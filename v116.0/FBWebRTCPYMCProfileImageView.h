/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCPYMCProfileImageViewDelegate;
@class UILabel, UIImageView, UILongPressGestureRecognizer, MNProfileImageView, NSString;

@interface FBWebRTCPYMCProfileImageView : UIView {

	double _scale;
	UILabel* _label;
	UIImageView* _selectedImageView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	MNProfileImageView* _profileImageView;
	UIImageView* _profileImageMaskView;
	NSString* _name;
	NSString* _userId;
	id<FBWebRTCPYMCProfileImageViewDelegate> _delegate;

}

@property (assign,nonatomic) double scale;                                                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                               //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * profileImageMaskView;                                  //@synthesize profileImageMaskView=_profileImageMaskView - In the implementation block
@property (nonatomic,copy) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userId;                                                       //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCPYMCProfileImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_profilePicLongPressed:(id)arg1 ;
-(UIImageView *)profileImageMaskView;
-(MNProfileImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBWebRTCPYMCProfileImageViewDelegate>)arg1 ;
-(id<FBWebRTCPYMCProfileImageViewDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
@end

