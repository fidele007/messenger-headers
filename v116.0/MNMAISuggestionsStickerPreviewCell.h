/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <FBSharedFramework/FBMStickerViewDelegate.h>

@class FBMStickerView, UIView, MNMAISuggestionsStickerPreviewCellViewModel, NSString;

@interface MNMAISuggestionsStickerPreviewCell : UITableViewCell <FBMStickerViewDelegate> {

	FBMStickerView* _stickerPreviewView;
	UIView* _separatorView;
	MNMAISuggestionsStickerPreviewCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNMAISuggestionsStickerPreviewCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightThatFits:(CGSize)arg1 forViewModel:(id)arg2 ;
-(id)initWithStickerResourceManager:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(MNMAISuggestionsStickerPreviewCellViewModel *)viewModel;
-(void)setViewModel:(MNMAISuggestionsStickerPreviewCellViewModel *)arg1 ;
@end

