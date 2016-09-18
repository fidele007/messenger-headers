/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class FBGradientView;

@interface _FBCoverPhotoImageView : UIImageView {

	FBGradientView* _gradientView;

}

@property (nonatomic,readonly) FBGradientView * gradientView;                    //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) BOOL showsGradientOverBackgroundImage; 
-(void)_updateHiddenStateWithImage:(id)arg1 ;
-(BOOL)showsGradientOverBackgroundImage;
-(void)setShowsGradientOverBackgroundImage:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 ;
-(FBGradientView *)gradientView;
@end
