/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBWebPhotoView, UIView, FBMemPhoto;

@interface FBAlbumThumbnailView : UIView {

	FBWebPhotoView* _frontView;
	UIView* _middleView;
	UIView* _backView;

}

@property (nonatomic,retain) FBMemPhoto * photo; 
@property (nonatomic,retain) UIView * customThumbnailView; 
-(void)setCustomThumbnailView:(UIView *)arg1 ;
-(UIView *)customThumbnailView;
-(void)layoutSubviews;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBMemPhoto *)photo;
@end

