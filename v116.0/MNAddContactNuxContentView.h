/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBRichTextView, MNAddContactNuxReasonsView, MNProfileImageView, NSString;

@interface MNAddContactNuxContentView : UIView {

	UIImageView* _profileMaskImageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	MNAddContactNuxReasonsView* _reasonsView;
	MNProfileImageView* _profileImageView;

}

@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,readonly) MNProfileImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
-(MNProfileImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

