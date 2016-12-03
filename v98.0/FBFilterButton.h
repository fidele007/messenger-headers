/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, UIView, UIImage, FBGLFilter, FBCPUImageFilterState;

@interface FBFilterButton : UIButton {

	UIImageView* _roundedCornerOverlayView;
	UIView* _selectionBottomBar;
	UIImage* _thumbnailImage;
	FBGLFilter* _filter;
	FBCPUImageFilterState* _cpuFilterState;
	UIImageView* _selectionOverlay;

}

@property (nonatomic,retain) UIImageView * selectionOverlay;                      //@synthesize selectionOverlay=_selectionOverlay - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                            //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) FBGLFilter * filter;                                 //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) FBCPUImageFilterState * cpuFilterState;              //@synthesize cpuFilterState=_cpuFilterState - In the implementation block
-(FBCPUImageFilterState *)cpuFilterState;
-(void)setCpuFilterState:(FBCPUImageFilterState *)arg1 ;
-(UIImageView *)selectionOverlay;
-(void)setSelectionOverlay:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFilter:(FBGLFilter *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(double)_buttonSize;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(FBGLFilter *)filter;
@end

