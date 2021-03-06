/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBAcceptOrRejectSuggestionProtocol.h>

@protocol FBPhotoLocationSuggestionViewDelegate;
@class FBItemView, FBItemViewConfigBuilder, FBNetworkImageView, UIView, FBAcceptOrRejectSuggestionView, FBUserSession, FBMemPhoto, NSMutableAttributedString, NSString;

@interface FBPhotoLocationSuggestionView : UIView <FBAcceptOrRejectSuggestionProtocol> {

	FBItemView* _contentView;
	FBItemViewConfigBuilder* _contentViewConfigBuilder;
	FBNetworkImageView* _leftImageView;
	UIView* _middleView;
	FBAcceptOrRejectSuggestionView* _rightView;
	FBUserSession* _session;
	FBMemPhoto* _photo;
	NSMutableAttributedString* _title;
	NSMutableAttributedString* _subtitle;
	id<FBPhotoLocationSuggestionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotoLocationSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapAcceptButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 photo:(id)arg2 ;
-(void)updateSuggestionForPhoto:(id)arg1 ;
-(void)setUpThumbnailAndContentView;
-(id)_setUpRightView;
-(id)_setUpMiddleView;
-(void)didTapRejectButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPhotoLocationSuggestionViewDelegate>)arg1 ;
-(id<FBPhotoLocationSuggestionViewDelegate>)delegate;
@end

