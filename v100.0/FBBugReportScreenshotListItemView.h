/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBBugReportPlayVideoButtonOverlayView, UIButton, FBBugReportRemoveButtonView;

@interface FBBugReportScreenshotListItemView : UIView {

	CGSize _imageSize;
	FBBugReportPlayVideoButtonOverlayView* _playVideoButtonOverlayView;
	int _itemType;
	UIButton* _screenshotThumbnail;
	FBBugReportRemoveButtonView* _removeButton;

}

@property (nonatomic,readonly) UIButton * screenshotThumbnail;                        //@synthesize screenshotThumbnail=_screenshotThumbnail - In the implementation block
@property (nonatomic,retain) FBBugReportRemoveButtonView * removeButton;              //@synthesize removeButton=_removeButton - In the implementation block
@property (assign) int itemType;                                                      //@synthesize itemType=_itemType - In the implementation block
+(double)removeButtonRadius;
-(UIButton *)screenshotThumbnail;
-(void)setRemoveButton:(FBBugReportRemoveButtonView *)arg1 ;
-(int)widthAdjustedToHeight:(int)arg1 ;
-(id)initWithImage:(id)arg1 itemType:(int)arg2 ;
-(void)layoutSubviews;
-(int)itemType;
-(void)setItemType:(int)arg1 ;
-(FBBugReportRemoveButtonView *)removeButton;
@end
