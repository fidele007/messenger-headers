/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBWebImageViewListener.h>

@class UIView, UIImageView, NSString;

@interface MNPSConsumerAppointmentDetailHeaderView : UIView <FBWebImageViewListener> {

	UIView* _dividerView;
	UIImageView* _headerView;
	UIView* _imageBorderView;
	UIView* _imageView;
	UIView* _titleLabel;
	UIView* _subtitleLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)fb_addDividerView;
-(void)fb_addHeaderView;
-(void)fb_addImageBorderView;
-(void)fb_addImageViewWithDownloaderFactory:(id)arg1 imageURL:(id)arg2 ;
-(void)fb_addTitleLabelWithText:(id)arg1 ;
-(void)fb_addSubtitleLabelWithText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dataModel:(id)arg2 downloaderFactory:(id)arg3 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

